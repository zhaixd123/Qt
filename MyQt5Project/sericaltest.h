#ifndef SERICALTEST_H
#define SERICALTEST_H

#include <QDialog>
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "kmp_arithmetic.h"
#include "string.h"

namespace Ui {
class SericalTest;
}

class SericalTest : public QDialog
{
    Q_OBJECT

public:
    explicit SericalTest(QWidget *parent = nullptr);
    ~SericalTest();




private slots:
    void on_OpenSerialButton_clicked();

    void ReadData();

    void on_SendButton_clicked();


    void on_btn_Clear_clicked();

private:
    Ui::SericalTest *ui;
    QSerialPort *serial;//定义串口类
    KMP_Arithmetic *kmp_arithmetic;
    void serial_Read();//串口数据读取显示
    void initSerial(); //串口初始化
};

#endif // SERICALTEST_H
