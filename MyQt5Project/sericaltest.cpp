#include "sericaltest.h"
#include "ui_sericaltest.h"

SericalTest::SericalTest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SericalTest)
{
    ui->setupUi(this);
    initSerial();
}

SericalTest::~SericalTest()
{
    delete ui;
}

void SericalTest::on_OpenSerialButton_clicked(){
    if(ui->OpenSerialButton->text()==tr("打开串口")){
        serial = new QSerialPort;
        //设置串口名
        serial->setPortName(ui->PortBox->currentText());
        //打开串口
        serial->open(QIODevice::ReadWrite);
        //设置波特率
        serial->setBaudRate(ui->BaudBox->currentText().toInt());
        //设置数据位
        switch(ui->BitBox->currentIndex()){
            case 0:
                serial->setDataBits(QSerialPort::Data8);
                break;
            default:
                break;
        }
        //设置校验位
        switch(ui->ParityBox->currentIndex()){
            case 0:
                serial->setParity(QSerialPort::NoParity);
                break;
            default:
            break;
        }
        //设置停止位
        switch(ui->BitBox->currentIndex()){
        case 1:
            serial->setStopBits(QSerialPort::OneStop);
            break;
        case 2:
            serial->setStopBits(QSerialPort::TwoStop);
            break;
        default:
            break;
        }
        //设置流控制
        serial->setFlowControl(QSerialPort::NoFlowControl);

        //关闭流控制
        ui->PortBox->setEnabled(false);
        ui->BaudBox->setEnabled(false);
        ui->BitBox->setEnabled(false);
        ui->ParityBox->setEnabled(false);
        ui->StopBox->setEnabled(false);
        ui->OpenSerialButton->setText(tr("关闭串口"));

        //连接信号槽
        QObject::connect(serial,&QSerialPort::readyRead,this,&SericalTest::ReadData);
    }
    else
    {
       //关闭串口
        serial->clear();
        serial->close();
        serial->deleteLater();

        //恢复设置使能
       ui->PortBox->setEnabled(true);
       ui->BaudBox->setEnabled(true);
       ui->BitBox->setEnabled(true);
       ui->ParityBox->setEnabled(true);
       ui->StopBox->setEnabled(true);
       ui->OpenSerialButton->setText(tr("打开串口"));
    }
}
//读取接收到的信息
void SericalTest::ReadData(){

    QByteArray buf;
    buf=serial->readAll();
    if(!buf.isEmpty()){
        QString str=ui->Tedit_Read->toPlainText();
        str+=tr(buf);
        ui->Tedit_Read->clear();
        ui->Tedit_Read->append(str);
        qDebug()<<tr("In this function");
    }
    buf.clear();
}
//发送按钮槽函数
void SericalTest::on_SendButton_clicked(){
    serial->write(ui->Tedit_Write->toPlainText().toLatin1());
}

void SericalTest::initSerial(){
    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts()){
        QSerialPort serial;
        serial.setPort(info);
        if(serial.open(QIODevice::ReadWrite)){
            ui->PortBox->addItem(serial.portName());
            serial.close();
        }
    }
    ui->BaudBox->setCurrentIndex(0);
}
