/********************************************************************************
** Form generated from reading UI file 'sericaltest.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERICALTEST_H
#define UI_SERICALTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_SericalTest
{
public:
    QGroupBox *groupBox;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *OpenSerialButton;
    QTextEdit *Tedit_Write;
    QLabel *label_6;
    QPushButton *SendButton;
    QComboBox *ParityBox;
    QGroupBox *groupBox_2;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QComboBox *PortBox;
    QComboBox *BitBox;
    QLabel *label_3;
    QComboBox *BaudBox;
    QTextEdit *Tedit_Read;
    QLabel *label;
    QPushButton *pushButton_4;
    QComboBox *StopBox;

    void setupUi(QDialog *SericalTest)
    {
        if (SericalTest->objectName().isEmpty())
            SericalTest->setObjectName(QStringLiteral("SericalTest"));
        SericalTest->resize(827, 454);
        groupBox = new QGroupBox(SericalTest);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(482, 300, 321, 131));
        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(20, 20, 121, 21));
        QFont font;
        font.setFamily(QStringLiteral("Arial Narrow"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        checkBox_3->setFont(font);
        checkBox_4 = new QCheckBox(groupBox);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(150, 20, 121, 21));
        checkBox_4->setFont(font);
        checkBox_5 = new QCheckBox(groupBox);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setGeometry(QRect(20, 60, 121, 21));
        checkBox_5->setFont(font);
        checkBox_6 = new QCheckBox(groupBox);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setGeometry(QRect(20, 100, 121, 21));
        checkBox_6->setFont(font);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 60, 181, 21));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 100, 181, 21));
        label_4 = new QLabel(SericalTest);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(482, 110, 54, 21));
        label_2 = new QLabel(SericalTest);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(482, 50, 54, 21));
        OpenSerialButton = new QPushButton(SericalTest);
        OpenSerialButton->setObjectName(QStringLiteral("OpenSerialButton"));
        OpenSerialButton->setGeometry(QRect(712, 20, 81, 31));
        Tedit_Write = new QTextEdit(SericalTest);
        Tedit_Write->setObjectName(QStringLiteral("Tedit_Write"));
        Tedit_Write->setGeometry(QRect(22, 330, 441, 51));
        label_6 = new QLabel(SericalTest);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(482, 140, 54, 21));
        SendButton = new QPushButton(SericalTest);
        SendButton->setObjectName(QStringLiteral("SendButton"));
        SendButton->setGeometry(QRect(132, 400, 331, 31));
        ParityBox = new QComboBox(SericalTest);
        ParityBox->setObjectName(QStringLiteral("ParityBox"));
        ParityBox->setGeometry(QRect(540, 110, 151, 22));
        groupBox_2 = new QGroupBox(SericalTest);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(482, 170, 321, 121));
        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(150, 30, 121, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial Narrow"));
        font1.setPointSize(10);
        checkBox_2->setFont(font1);
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 30, 121, 21));
        checkBox->setFont(font);
        PortBox = new QComboBox(SericalTest);
        PortBox->setObjectName(QStringLiteral("PortBox"));
        PortBox->setGeometry(QRect(540, 20, 151, 22));
        BitBox = new QComboBox(SericalTest);
        BitBox->setObjectName(QStringLiteral("BitBox"));
        BitBox->setGeometry(QRect(540, 80, 151, 22));
        BitBox->setEditable(false);
        label_3 = new QLabel(SericalTest);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(482, 80, 54, 21));
        BaudBox = new QComboBox(SericalTest);
        BaudBox->setObjectName(QStringLiteral("BaudBox"));
        BaudBox->setGeometry(QRect(540, 50, 151, 22));
        Tedit_Read = new QTextEdit(SericalTest);
        Tedit_Read->setObjectName(QStringLiteral("Tedit_Read"));
        Tedit_Read->setGeometry(QRect(22, 20, 441, 291));
        label = new QLabel(SericalTest);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(482, 20, 54, 21));
        pushButton_4 = new QPushButton(SericalTest);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(22, 400, 81, 31));
        StopBox = new QComboBox(SericalTest);
        StopBox->setObjectName(QStringLiteral("StopBox"));
        StopBox->setGeometry(QRect(540, 140, 151, 22));

        retranslateUi(SericalTest);

        BitBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SericalTest);
    } // setupUi

    void retranslateUi(QDialog *SericalTest)
    {
        SericalTest->setWindowTitle(QApplication::translate("SericalTest", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SericalTest", "\346\216\245\346\224\266\346\240\274\345\274\217\350\256\276\347\275\256", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("SericalTest", "\346\214\211\345\233\236\350\275\246\346\216\245\346\224\266\346\226\255\350\241\214", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("SericalTest", "\346\214\211\346\215\242\350\241\214\346\216\245\346\224\266\346\226\255\350\241\214", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("SericalTest", "\350\207\252\345\256\232\344\271\211\345\214\205\345\244\264", Q_NULLPTR));
        checkBox_6->setText(QApplication::translate("SericalTest", "\350\207\252\345\256\232\344\271\211\345\214\205\345\260\276", Q_NULLPTR));
        label_4->setText(QApplication::translate("SericalTest", "\346\240\241\351\252\214\344\275\215\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("SericalTest", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
        OpenSerialButton->setText(QApplication::translate("SericalTest", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        label_6->setText(QApplication::translate("SericalTest", "\345\201\234\346\255\242\344\275\215\357\274\232", Q_NULLPTR));
        SendButton->setText(QApplication::translate("SericalTest", "\345\217\221\351\200\201\346\225\260\346\215\256", Q_NULLPTR));
        ParityBox->clear();
        ParityBox->insertItems(0, QStringList()
         << QApplication::translate("SericalTest", "0", Q_NULLPTR)
        );
        groupBox_2->setTitle(QApplication::translate("SericalTest", "\345\217\221\351\200\201\346\240\274\345\274\217\350\256\276\347\275\256", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("SericalTest", "\345\270\246\346\215\242\350\241\214\347\254\246\345\217\221\351\200\201", Q_NULLPTR));
        checkBox->setText(QApplication::translate("SericalTest", "\345\270\246\345\233\236\350\275\246\345\217\221\351\200\201", Q_NULLPTR));
        BitBox->clear();
        BitBox->insertItems(0, QStringList()
         << QApplication::translate("SericalTest", "8", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("SericalTest", "\346\225\260\346\215\256\344\275\215\357\274\232", Q_NULLPTR));
        BaudBox->clear();
        BaudBox->insertItems(0, QStringList()
         << QApplication::translate("SericalTest", "115200", Q_NULLPTR)
        );
        label->setText(QApplication::translate("SericalTest", "\344\270\262\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("SericalTest", "\346\270\205\347\251\272\346\216\245\346\224\266", Q_NULLPTR));
        StopBox->clear();
        StopBox->insertItems(0, QStringList()
         << QApplication::translate("SericalTest", "1", Q_NULLPTR)
         << QApplication::translate("SericalTest", "2", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class SericalTest: public Ui_SericalTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERICALTEST_H
