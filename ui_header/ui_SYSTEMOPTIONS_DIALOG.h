/********************************************************************************
** Form generated from reading UI file 'SYSTEMOPTIONS_DIALOG.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMOPTIONS_DIALOG_H
#define UI_SYSTEMOPTIONS_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_SystemOptions_Dialog
{
public:
    QCheckBox *_132;
    QPushButton *_2;
    QPushButton *_1;
    QPushButton *_140;
    QGroupBox *groupBox;
    QLabel *label_11;
    QDoubleSpinBox *_102;
    QDoubleSpinBox *_101;
    QLabel *label_8;
    QLabel *label_9;
    QDoubleSpinBox *_128;
    QLabel *label_10;
    QLabel *label_7;
    QDoubleSpinBox *_103;
    QLabel *label_23;
    QDoubleSpinBox *_131;
    QLabel *label_18;
    QLabel *label_17;
    QSpinBox *_121;
    QLabel *label_14;
    QDoubleSpinBox *_119;
    QDoubleSpinBox *_109;
    QDoubleSpinBox *_104;
    QCheckBox *_120;
    QLabel *label_28;
    QComboBox *_123;
    QComboBox *_137;
    QLabel *label_123;
    QLabel *label_138;
    QComboBox *_141;
    QComboBox *_110;
    QComboBox *_105;
    QLabel *label_137;
    QLabel *label_15;
    QGroupBox *groupBox_2;
    QLabel *label_12;
    QDoubleSpinBox *_112;
    QComboBox *_113;
    QSpinBox *_127;
    QLabel *label_13;
    QGroupBox *groupBox_4;
    QCheckBox *_139;
    QCheckBox *_138;
    QCheckBox *_135;
    QCheckBox *_136;
    QCheckBox *_129;
    QCheckBox *_111;
    QCheckBox *_118;
    QCheckBox *_126;
    QGroupBox *groupBox_5;
    QLabel *label_27;
    QDoubleSpinBox *_150;
    QLabel *label_20;
    QLabel *label_16;
    QDoubleSpinBox *_108;
    QPushButton *_1000;
    QDoubleSpinBox *_106;
    QLabel *label_24;
    QLabel *label_21;
    QLabel *label_22;
    QDoubleSpinBox *_151;
    QDoubleSpinBox *_152;
    QPushButton *_1001;
    QLabel *label_26;
    QDoubleSpinBox *_107;
    QLabel *label_25;
    QComboBox *_142;
    QLabel *label_139;
    QPushButton *_143;

    void setupUi(QDialog *SystemOptions_Dialog)
    {
        if (SystemOptions_Dialog->objectName().isEmpty())
            SystemOptions_Dialog->setObjectName(QString::fromUtf8("SystemOptions_Dialog"));
        SystemOptions_Dialog->resize(841, 429);
        SystemOptions_Dialog->setMinimumSize(QSize(841, 429));
        SystemOptions_Dialog->setMaximumSize(QSize(841, 429));
        QFont font;
        font.setPointSize(10);
        SystemOptions_Dialog->setFont(font);
        _132 = new QCheckBox(SystemOptions_Dialog);
        _132->setObjectName(QString::fromUtf8("_132"));
        _132->setEnabled(false);
        _132->setGeometry(QRect(38, 553, 181, 21));
        _132->setFont(font);
        _132->setLayoutDirection(Qt::RightToLeft);
        _132->setCheckable(true);
        _132->setChecked(false);
        _132->setTristate(false);
        _2 = new QPushButton(SystemOptions_Dialog);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setGeometry(QRect(752, 372, 75, 23));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(11);
        _2->setFont(font1);
        _2->setAutoDefault(false);
        _1 = new QPushButton(SystemOptions_Dialog);
        _1->setObjectName(QString::fromUtf8("_1"));
        _1->setGeometry(QRect(662, 372, 75, 23));
        _1->setFont(font1);
        _1->setAutoDefault(false);
        _140 = new QPushButton(SystemOptions_Dialog);
        _140->setObjectName(QString::fromUtf8("_140"));
        _140->setGeometry(QRect(388, 372, 149, 23));
        _140->setFont(font1);
        _140->setAutoDefault(false);
        groupBox = new QGroupBox(SystemOptions_Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(8, 6, 363, 405));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(24, 128, 171, 20));
        label_11->setFont(font);
        _102 = new QDoubleSpinBox(groupBox);
        _102->setObjectName(QString::fromUtf8("_102"));
        _102->setGeometry(QRect(231, 55, 115, 24));
        _102->setDecimals(6);
        _102->setMinimum(0.000010000000000);
        _102->setMaximum(10.000000000000000);
        _102->setSingleStep(0.100000000000000);
        _102->setValue(4.000000000000000);
        _101 = new QDoubleSpinBox(groupBox);
        _101->setObjectName(QString::fromUtf8("_101"));
        _101->setGeometry(QRect(231, 31, 115, 24));
        _101->setDecimals(6);
        _101->setMinimum(0.000001000000000);
        _101->setMaximum(0.100000000000000);
        _101->setSingleStep(0.010000000000000);
        _101->setValue(0.100000000000000);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(24, 57, 171, 20));
        label_8->setFont(font);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(24, 105, 171, 20));
        label_9->setFont(font);
        _128 = new QDoubleSpinBox(groupBox);
        _128->setObjectName(QString::fromUtf8("_128"));
        _128->setGeometry(QRect(231, 174, 115, 24));
        _128->setMaximum(2.000000000000000);
        _128->setSingleStep(0.100000000000000);
        _128->setValue(0.100000000000000);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(24, 81, 171, 20));
        label_10->setFont(font);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(24, 33, 171, 20));
        label_7->setFont(font);
        _103 = new QDoubleSpinBox(groupBox);
        _103->setObjectName(QString::fromUtf8("_103"));
        _103->setGeometry(QRect(231, 79, 115, 24));
        _103->setMinimum(0.100000000000000);
        _103->setMaximum(10.000000000000000);
        _103->setSingleStep(0.100000000000000);
        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(23, 224, 171, 20));
        label_23->setFont(font);
        _131 = new QDoubleSpinBox(groupBox);
        _131->setObjectName(QString::fromUtf8("_131"));
        _131->setGeometry(QRect(231, 198, 115, 24));
        _131->setMinimum(0.100000000000000);
        _131->setMaximum(10.000000000000000);
        _131->setSingleStep(0.050000000000000);
        _131->setValue(1.000000000000000);
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(24, 199, 169, 20));
        label_18->setFont(font);
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(24, 175, 171, 20));
        label_17->setFont(font);
        _121 = new QSpinBox(groupBox);
        _121->setObjectName(QString::fromUtf8("_121"));
        _121->setGeometry(QRect(231, 127, 115, 24));
        _121->setMaximum(16);
        _121->setValue(2);
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(24, 152, 147, 20));
        label_14->setFont(font);
        _119 = new QDoubleSpinBox(groupBox);
        _119->setObjectName(QString::fromUtf8("_119"));
        _119->setGeometry(QRect(231, 151, 115, 24));
        _119->setMinimum(-10000.000000000000000);
        _119->setMaximum(10000.000000000000000);
        _119->setValue(1.000000000000000);
        _109 = new QDoubleSpinBox(groupBox);
        _109->setObjectName(QString::fromUtf8("_109"));
        _109->setGeometry(QRect(231, 222, 115, 24));
        _109->setAccelerated(true);
        _109->setMinimum(-360.000000000000000);
        _109->setMaximum(360.000000000000000);
        _104 = new QDoubleSpinBox(groupBox);
        _104->setObjectName(QString::fromUtf8("_104"));
        _104->setGeometry(QRect(231, 103, 115, 24));
        _104->setDecimals(2);
        _104->setMinimum(0.000000000000000);
        _104->setMaximum(0.100000000000000);
        _104->setSingleStep(0.100000000000000);
        _104->setValue(0.100000000000000);
        _120 = new QCheckBox(groupBox);
        _120->setObjectName(QString::fromUtf8("_120"));
        _120->setEnabled(true);
        _120->setGeometry(QRect(164, 148, 61, 31));
        QFont font2;
        font2.setPointSize(9);
        _120->setFont(font2);
        _120->setLayoutDirection(Qt::RightToLeft);
        _120->setCheckable(true);
        _120->setChecked(false);
        _120->setTristate(false);
        label_28 = new QLabel(groupBox);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(24, 250, 171, 20));
        label_28->setFont(font);
        _123 = new QComboBox(groupBox);
        _123->setObjectName(QString::fromUtf8("_123"));
        _123->setGeometry(QRect(228, 344, 115, 22));
        _137 = new QComboBox(groupBox);
        _137->setObjectName(QString::fromUtf8("_137"));
        _137->setGeometry(QRect(228, 296, 115, 22));
        _137->setFrame(true);
        label_123 = new QLabel(groupBox);
        label_123->setObjectName(QString::fromUtf8("label_123"));
        label_123->setGeometry(QRect(22, 346, 171, 20));
        label_123->setFont(font);
        label_138 = new QLabel(groupBox);
        label_138->setObjectName(QString::fromUtf8("label_138"));
        label_138->setGeometry(QRect(22, 324, 167, 16));
        label_138->setFont(font);
        _141 = new QComboBox(groupBox);
        _141->setObjectName(QString::fromUtf8("_141"));
        _141->setGeometry(QRect(228, 320, 115, 22));
        _141->setFrame(true);
        _110 = new QComboBox(groupBox);
        _110->setObjectName(QString::fromUtf8("_110"));
        _110->setGeometry(QRect(228, 248, 115, 22));
        _105 = new QComboBox(groupBox);
        _105->setObjectName(QString::fromUtf8("_105"));
        _105->setGeometry(QRect(228, 272, 115, 22));
        label_137 = new QLabel(groupBox);
        label_137->setObjectName(QString::fromUtf8("label_137"));
        label_137->setGeometry(QRect(22, 300, 167, 16));
        label_137->setFont(font);
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(23, 274, 171, 20));
        label_15->setFont(font);
        groupBox_2 = new QGroupBox(SystemOptions_Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(384, 6, 445, 85));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(18, 28, 159, 20));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        _112 = new QDoubleSpinBox(groupBox_2);
        _112->setObjectName(QString::fromUtf8("_112"));
        _112->setGeometry(QRect(190, 26, 99, 24));
        _112->setMaximum(1000.000000000000000);
        _113 = new QComboBox(groupBox_2);
        _113->setObjectName(QString::fromUtf8("_113"));
        _113->setGeometry(QRect(296, 28, 97, 22));
        _127 = new QSpinBox(groupBox_2);
        _127->setObjectName(QString::fromUtf8("_127"));
        _127->setGeometry(QRect(190, 54, 99, 24));
        _127->setMaximum(20);
        _127->setValue(5);
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(16, 54, 161, 20));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupBox_4 = new QGroupBox(SystemOptions_Dialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(384, 196, 447, 129));
        _139 = new QCheckBox(groupBox_4);
        _139->setObjectName(QString::fromUtf8("_139"));
        _139->setEnabled(true);
        _139->setGeometry(QRect(222, 100, 207, 21));
        _139->setFont(font);
        _139->setLayoutDirection(Qt::RightToLeft);
        _139->setCheckable(true);
        _139->setChecked(false);
        _139->setTristate(false);
        _138 = new QCheckBox(groupBox_4);
        _138->setObjectName(QString::fromUtf8("_138"));
        _138->setEnabled(true);
        _138->setGeometry(QRect(248, 52, 181, 21));
        _138->setFont(font);
        _138->setLayoutDirection(Qt::RightToLeft);
        _138->setCheckable(true);
        _138->setChecked(false);
        _138->setTristate(false);
        _135 = new QCheckBox(groupBox_4);
        _135->setObjectName(QString::fromUtf8("_135"));
        _135->setEnabled(true);
        _135->setGeometry(QRect(222, 28, 207, 21));
        _135->setFont(font);
        _135->setLayoutDirection(Qt::RightToLeft);
        _135->setCheckable(true);
        _135->setChecked(false);
        _135->setTristate(false);
        _136 = new QCheckBox(groupBox_4);
        _136->setObjectName(QString::fromUtf8("_136"));
        _136->setEnabled(true);
        _136->setGeometry(QRect(248, 76, 181, 21));
        _136->setFont(font);
        _136->setLayoutDirection(Qt::RightToLeft);
        _136->setCheckable(true);
        _136->setChecked(false);
        _136->setTristate(false);
        _129 = new QCheckBox(groupBox_4);
        _129->setObjectName(QString::fromUtf8("_129"));
        _129->setEnabled(true);
        _129->setGeometry(QRect(22, 52, 180, 21));
        _129->setFont(font);
        _129->setLayoutDirection(Qt::RightToLeft);
        _129->setCheckable(true);
        _129->setChecked(false);
        _129->setTristate(false);
        _111 = new QCheckBox(groupBox_4);
        _111->setObjectName(QString::fromUtf8("_111"));
        _111->setEnabled(true);
        _111->setGeometry(QRect(22, 76, 180, 21));
        _111->setFont(font);
        _111->setLayoutDirection(Qt::RightToLeft);
        _111->setCheckable(true);
        _111->setChecked(false);
        _111->setTristate(false);
        _118 = new QCheckBox(groupBox_4);
        _118->setObjectName(QString::fromUtf8("_118"));
        _118->setEnabled(true);
        _118->setGeometry(QRect(22, 28, 180, 21));
        _118->setFont(font);
        _118->setLayoutDirection(Qt::RightToLeft);
        _118->setCheckable(true);
        _118->setChecked(false);
        _118->setTristate(false);
        _126 = new QCheckBox(groupBox_4);
        _126->setObjectName(QString::fromUtf8("_126"));
        _126->setEnabled(true);
        _126->setGeometry(QRect(22, 100, 180, 21));
        _126->setFont(font);
        _126->setLayoutDirection(Qt::RightToLeft);
        _126->setCheckable(true);
        _126->setChecked(false);
        _126->setTristate(false);
        groupBox_5 = new QGroupBox(SystemOptions_Dialog);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(384, 96, 445, 95));
        label_27 = new QLabel(groupBox_5);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(297, 62, 31, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Lucida Grande"));
        font3.setPointSize(10);
        label_27->setFont(font3);
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        _150 = new QDoubleSpinBox(groupBox_5);
        _150->setObjectName(QString::fromUtf8("_150"));
        _150->setGeometry(QRect(108, 60, 69, 24));
        _150->setMaximum(1.000000000000000);
        _150->setSingleStep(0.100000000000000);
        _150->setValue(1.000000000000000);
        label_20 = new QLabel(groupBox_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(182, 29, 37, 20));
        label_20->setFont(font3);
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(298, 29, 31, 20));
        label_16->setFont(font3);
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        _108 = new QDoubleSpinBox(groupBox_5);
        _108->setObjectName(QString::fromUtf8("_108"));
        _108->setGeometry(QRect(333, 28, 69, 24));
        _108->setMaximum(1.000000000000000);
        _108->setSingleStep(0.100000000000000);
        _108->setValue(1.000000000000000);
        _1000 = new QPushButton(groupBox_5);
        _1000->setObjectName(QString::fromUtf8("_1000"));
        _1000->setGeometry(QRect(407, 28, 24, 24));
        _1000->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/PROPERTIES-colours.svg"), QSize(), QIcon::Normal, QIcon::Off);
        _1000->setIcon(icon);
        _1000->setIconSize(QSize(20, 20));
        _1000->setAutoDefault(false);
        _1000->setFlat(true);
        _106 = new QDoubleSpinBox(groupBox_5);
        _106->setObjectName(QString::fromUtf8("_106"));
        _106->setGeometry(QRect(109, 27, 69, 24));
        _106->setMaximum(1.000000000000000);
        _106->setSingleStep(0.100000000000000);
        _106->setValue(1.000000000000000);
        label_24 = new QLabel(groupBox_5);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(8, 62, 67, 20));
        label_24->setFont(font);
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_21 = new QLabel(groupBox_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(80, 30, 25, 20));
        label_21->setFont(font3);
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_22 = new QLabel(groupBox_5);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(6, 30, 71, 20));
        label_22->setFont(font);
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        _151 = new QDoubleSpinBox(groupBox_5);
        _151->setObjectName(QString::fromUtf8("_151"));
        _151->setGeometry(QRect(222, 60, 69, 24));
        _151->setMaximum(1.000000000000000);
        _151->setSingleStep(0.100000000000000);
        _151->setValue(0.000000000000000);
        _152 = new QDoubleSpinBox(groupBox_5);
        _152->setObjectName(QString::fromUtf8("_152"));
        _152->setGeometry(QRect(333, 61, 69, 24));
        _152->setMaximum(1.000000000000000);
        _152->setSingleStep(0.100000000000000);
        _152->setValue(1.000000000000000);
        _1001 = new QPushButton(groupBox_5);
        _1001->setObjectName(QString::fromUtf8("_1001"));
        _1001->setGeometry(QRect(407, 61, 24, 24));
        _1001->setMouseTracking(false);
        _1001->setIcon(icon);
        _1001->setIconSize(QSize(20, 20));
        _1001->setAutoDefault(false);
        _1001->setFlat(true);
        label_26 = new QLabel(groupBox_5);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(181, 62, 37, 20));
        label_26->setFont(font3);
        label_26->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        _107 = new QDoubleSpinBox(groupBox_5);
        _107->setObjectName(QString::fromUtf8("_107"));
        _107->setGeometry(QRect(223, 27, 69, 24));
        _107->setMaximum(1.000000000000000);
        _107->setSingleStep(0.100000000000000);
        _107->setValue(1.000000000000000);
        label_25 = new QLabel(groupBox_5);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(79, 63, 25, 20));
        label_25->setFont(font3);
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        _142 = new QComboBox(SystemOptions_Dialog);
        _142->addItem(QString());
        _142->addItem(QString());
        _142->addItem(QString());
        _142->setObjectName(QString::fromUtf8("_142"));
        _142->setGeometry(QRect(236, 374, 115, 22));
        _142->setFrame(true);
        label_139 = new QLabel(SystemOptions_Dialog);
        label_139->setObjectName(QString::fromUtf8("label_139"));
        label_139->setGeometry(QRect(30, 378, 167, 16));
        label_139->setFont(font);
        _143 = new QPushButton(SystemOptions_Dialog);
        _143->setObjectName(QString::fromUtf8("_143"));
        _143->setGeometry(QRect(388, 334, 149, 23));
        QFont font4;
        font4.setPointSize(11);
        _143->setFont(font4);
        _143->setAutoDefault(false);
        QWidget::setTabOrder(_101, _102);
        QWidget::setTabOrder(_102, _103);
        QWidget::setTabOrder(_103, _104);
        QWidget::setTabOrder(_104, _121);
        QWidget::setTabOrder(_121, _120);
        QWidget::setTabOrder(_120, _119);
        QWidget::setTabOrder(_119, _128);
        QWidget::setTabOrder(_128, _131);
        QWidget::setTabOrder(_131, _109);
        QWidget::setTabOrder(_109, _110);
        QWidget::setTabOrder(_110, _105);
        QWidget::setTabOrder(_105, _137);
        QWidget::setTabOrder(_137, _141);
        QWidget::setTabOrder(_141, _123);
        QWidget::setTabOrder(_123, _142);
        QWidget::setTabOrder(_142, _112);
        QWidget::setTabOrder(_112, _113);
        QWidget::setTabOrder(_113, _127);
        QWidget::setTabOrder(_127, _106);
        QWidget::setTabOrder(_106, _107);
        QWidget::setTabOrder(_107, _108);
        QWidget::setTabOrder(_108, _1000);
        QWidget::setTabOrder(_1000, _150);
        QWidget::setTabOrder(_150, _151);
        QWidget::setTabOrder(_151, _152);
        QWidget::setTabOrder(_152, _1001);
        QWidget::setTabOrder(_1001, _118);
        QWidget::setTabOrder(_118, _129);
        QWidget::setTabOrder(_129, _111);
        QWidget::setTabOrder(_111, _126);
        QWidget::setTabOrder(_126, _135);
        QWidget::setTabOrder(_135, _138);
        QWidget::setTabOrder(_138, _136);
        QWidget::setTabOrder(_136, _139);
        QWidget::setTabOrder(_139, _140);
        QWidget::setTabOrder(_140, _1);
        QWidget::setTabOrder(_1, _2);
        QWidget::setTabOrder(_2, _132);

        retranslateUi(SystemOptions_Dialog);

        _1->setDefault(true);


        QMetaObject::connectSlotsByName(SystemOptions_Dialog);
    } // setupUi

    void retranslateUi(QDialog *SystemOptions_Dialog)
    {
        SystemOptions_Dialog->setWindowTitle(QCoreApplication::translate("SystemOptions_Dialog", "System options", nullptr));
        _132->setText(QCoreApplication::translate("SystemOptions_Dialog", "Dialog Box Auto OK", nullptr));
        _2->setText(QCoreApplication::translate("SystemOptions_Dialog", "Cancel", nullptr));
        _1->setText(QCoreApplication::translate("SystemOptions_Dialog", "OK", nullptr));
        _140->setText(QCoreApplication::translate("SystemOptions_Dialog", "Set as System Defaults", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SystemOptions_Dialog", "Numeric Settings", nullptr));
        label_11->setText(QCoreApplication::translate("SystemOptions_Dialog", "Numeric display precision", nullptr));
        label_8->setText(QCoreApplication::translate("SystemOptions_Dialog", "Display tolerance", nullptr));
        label_9->setText(QCoreApplication::translate("SystemOptions_Dialog", "Trace tolerance", nullptr));
        label_10->setText(QCoreApplication::translate("SystemOptions_Dialog", "Snap tolerance", nullptr));
        label_7->setText(QCoreApplication::translate("SystemOptions_Dialog", "Same point tolerance", nullptr));
        label_23->setText(QCoreApplication::translate("SystemOptions_Dialog", "Auto snap angle", nullptr));
        label_18->setText(QCoreApplication::translate("SystemOptions_Dialog", "Adjust screen aspect ratio", nullptr));
        label_17->setText(QCoreApplication::translate("SystemOptions_Dialog", "Minimum line weight", nullptr));
        label_14->setText(QCoreApplication::translate("SystemOptions_Dialog", "Plot to view scale ratio", nullptr));
        _120->setText(QCoreApplication::translate("SystemOptions_Dialog", "Auto", nullptr));
        label_28->setText(QCoreApplication::translate("SystemOptions_Dialog", "Refresh Delay", nullptr));
        label_123->setText(QCoreApplication::translate("SystemOptions_Dialog", "Units                   ", nullptr));
        label_138->setText(QCoreApplication::translate("SystemOptions_Dialog", "Menu Buttons Size", nullptr));
        label_137->setText(QCoreApplication::translate("SystemOptions_Dialog", "Colour Scheme", nullptr));
        label_15->setText(QCoreApplication::translate("SystemOptions_Dialog", "Mouse wheel zoom step", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SystemOptions_Dialog", "Auto save", nullptr));
        label_12->setText(QCoreApplication::translate("SystemOptions_Dialog", "Auto save Delay (min)", nullptr));
        label_13->setText(QCoreApplication::translate("SystemOptions_Dialog", "Numbers of versions to save", nullptr));
        groupBox_4->setTitle(QString());
        _139->setText(QCoreApplication::translate("SystemOptions_Dialog", "Show Welcome Screen on start up", nullptr));
        _138->setText(QCoreApplication::translate("SystemOptions_Dialog", "Reduce detail for zoom && pan", nullptr));
        _135->setText(QCoreApplication::translate("SystemOptions_Dialog", "Reverse Mouse Wheel for Zoom", nullptr));
        _136->setText(QCoreApplication::translate("SystemOptions_Dialog", "Use Antialiasing", nullptr));
        _129->setText(QCoreApplication::translate("SystemOptions_Dialog", "Show distance tracking", nullptr));
        _111->setText(QCoreApplication::translate("SystemOptions_Dialog", "Dynamic cursor", nullptr));
        _118->setText(QCoreApplication::translate("SystemOptions_Dialog", "Default coordinates incremental", nullptr));
        _126->setText(QCoreApplication::translate("SystemOptions_Dialog", "Always show entity handles", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("SystemOptions_Dialog", "Colours", nullptr));
        label_27->setText(QCoreApplication::translate("SystemOptions_Dialog", "Blue", nullptr));
        label_20->setText(QCoreApplication::translate("SystemOptions_Dialog", "Green", nullptr));
        label_16->setText(QCoreApplication::translate("SystemOptions_Dialog", "Blue", nullptr));
#if QT_CONFIG(tooltip)
        _1000->setToolTip(QCoreApplication::translate("SystemOptions_Dialog", "Select Colour", nullptr));
#endif // QT_CONFIG(tooltip)
        _1000->setText(QString());
        label_24->setText(QCoreApplication::translate("SystemOptions_Dialog", "Selection", nullptr));
        label_21->setText(QCoreApplication::translate("SystemOptions_Dialog", "Red", nullptr));
        label_22->setText(QCoreApplication::translate("SystemOptions_Dialog", "Background", nullptr));
#if QT_CONFIG(tooltip)
        _1001->setToolTip(QCoreApplication::translate("SystemOptions_Dialog", "Select Colour", nullptr));
#endif // QT_CONFIG(tooltip)
        _1001->setText(QString());
        label_26->setText(QCoreApplication::translate("SystemOptions_Dialog", "Green", nullptr));
        label_25->setText(QCoreApplication::translate("SystemOptions_Dialog", "Red", nullptr));
        _142->setItemText(0, QCoreApplication::translate("SystemOptions_Dialog", "No Preview", nullptr));
        _142->setItemText(1, QCoreApplication::translate("SystemOptions_Dialog", "Screen Shot", nullptr));
        _142->setItemText(2, QCoreApplication::translate("SystemOptions_Dialog", "Drawn Preview", nullptr));

        label_139->setText(QCoreApplication::translate("SystemOptions_Dialog", "Preview Save Type", nullptr));
        _143->setText(QCoreApplication::translate("SystemOptions_Dialog", "File Locations", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SystemOptions_Dialog: public Ui_SystemOptions_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMOPTIONS_DIALOG_H
