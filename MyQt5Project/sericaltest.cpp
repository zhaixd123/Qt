#include "sericaltest.h"
#include "ui_sericaltest.h"

#include <QDateTime>
#include <QTextCodec>

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
    static QByteArray byteArray;
    QByteArray temp;
    temp=serial->readAll();
    //QString str=QTextCodec::codecForName("UTF-8")->toUnicode(justReadData);
     QString lineBreak=NULL;
    if(!temp.isEmpty())
           {
               byteArray.append(temp);
               if(byteArray.contains("\r\n"))
               {
                   if(byteArray.contains("\r\n")){
                       int tempcount=byteArray.indexOf("\r\n");
                       qDebug()<<"包含换行符"<<tempcount<<endl;
                   }
                     QDateTime time = QDateTime::currentDateTime();
                     QString readStr=QTextCodec::codecForName("UTF-8")->toUnicode(byteArray.left(byteArray.indexOf("\r\n")+2));
                     QString showStr="RX->"+time.toString("hh:mm:ss")+":"+readStr;
                     ui->Tedit_Read->append(showStr);
                     byteArray = byteArray.right(byteArray.length()-byteArray.indexOf("\r\n")-2);
               }
           }
        qDebug()<<tr("In this function");
}
//发送按钮槽函数
void SericalTest::on_SendButton_clicked(){
    QString sendStr=ui->Tedit_Write->toPlainText();
    QCheckBox *qcheckTemp=ui->GroupBox_SendSettings->findChild<QCheckBox *>("QCheckBox_AddSpaceOnEnd");
    if(qcheckTemp->isChecked()==true){
        sendStr+="\r";
    }
    qcheckTemp=ui->GroupBox_SendSettings->findChild<QCheckBox *>("QCheckBox_AddEnterOnEnd");
    if(qcheckTemp->isChecked()==true){
        sendStr+="\n";
    }
    QByteArray sendByteArray=sendStr.toLatin1();
    serial->write(sendByteArray);
    QString showStr="TX->"+QDateTime::currentDateTime().toString("hh:mm:ss")+":"+sendStr;
    ui->Tedit_Read->append(showStr);
}


//初始化函数
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

//清空发送
void SericalTest::on_btn_Clear_clicked()
{
    ui->Tedit_Read->setText("");
}
