/********************************************************************************
** Form generated from reading UI file 'enterform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERFORM_H
#define UI_ENTERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EnterForm
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame;
    QPushButton *btn_Serial;

    void setupUi(QDialog *EnterForm)
    {
        if (EnterForm->objectName().isEmpty())
            EnterForm->setObjectName(QStringLiteral("EnterForm"));
        EnterForm->resize(442, 420);
        buttonBox = new QDialogButtonBox(EnterForm);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(80, 380, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame = new QFrame(EnterForm);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(20, 20, 401, 341));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btn_Serial = new QPushButton(frame);
        btn_Serial->setObjectName(QStringLiteral("btn_Serial"));
        btn_Serial->setGeometry(QRect(40, 60, 75, 61));

        retranslateUi(EnterForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), EnterForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EnterForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(EnterForm);
    } // setupUi

    void retranslateUi(QDialog *EnterForm)
    {
        EnterForm->setWindowTitle(QApplication::translate("EnterForm", "Dialog", Q_NULLPTR));
        btn_Serial->setText(QApplication::translate("EnterForm", "\344\270\262\345\217\243\346\265\213\350\257\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EnterForm: public Ui_EnterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERFORM_H
