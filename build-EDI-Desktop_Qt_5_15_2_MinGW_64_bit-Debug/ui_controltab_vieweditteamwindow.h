/********************************************************************************
** Form generated from reading UI file 'controltab_vieweditteamwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLTAB_VIEWEDITTEAMWINDOW_H
#define UI_CONTROLTAB_VIEWEDITTEAMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlTab_ViewEditTeamWindow
{
public:
    QPushButton *pushButton_editMode;
    QPushButton *pushButton_saveChanges;
    QLineEdit *lineEditTeamID;
    QLineEdit *lineEditTeamName;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEditProjAssigned;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEditProjComplete;
    QLabel *label_6;
    QLineEdit *lineEditCurProjects;
    QLineEdit *lineEdit_newProj;
    QLabel *label_8;
    QPushButton *pushButton_assign;
    QLabel *label_9;
    QTableWidget *tableWidget_members;
    QPushButton *pushButton_addNew;
    QPushButton *pushButton_remove;
    QTableWidget *tableWidget_projs;
    QLineEdit *lineEditNewMember;
    QPushButton *pushButton_removeProj;
    QLabel *label_11;
    QPushButton *pushButton_changeStatus;
    QLabel *label_ExpectedHours;
    QDoubleSpinBox *spinBoxExpectedHours;
    QLabel *labelTeamName;
    QLabel *label_7;
    QLineEdit *lineEditNumMembers;
    QLabel *labelTeamName_2;
    QWidget *oopsTeamExists;
    QLabel *label_edi;
    QLabel *bubbleOops;
    QLabel *label_TeamExists;
    QPushButton *pushButton_TeamExists;
    QWidget *oopsEmployeeTaken;
    QLabel *label_edi_3;
    QLabel *bubbleOops_3;
    QLabel *label_EmployeeTaken;
    QPushButton *pushButton_EmployeeTaken;
    QWidget *oopsInvalidID;
    QLabel *label_edi_4;
    QLabel *bubbleOops_4;
    QLabel *label_InvalidID;
    QPushButton *pushButton_InvalidID;
    QWidget *oopsNotOnTeam;
    QLabel *label_edi_5;
    QLabel *bubbleOops_5;
    QLabel *label_NotOnTeam;
    QPushButton *pushButton_NotOnTeam;
    QWidget *oopsDuplicateProject;
    QLabel *label_edi_6;
    QLabel *bubbleOops_6;
    QLabel *label_DuplicateProject;
    QPushButton *pushButton_DuplicateProject;
    QWidget *oopsNegHours;
    QLabel *label_edi_7;
    QLabel *bubbleOops_7;
    QLabel *label_NegHours;
    QPushButton *pushButton_NegHours;
    QWidget *oopsTeamNameLen;
    QLabel *label_edi_8;
    QLabel *bubbleOops_8;
    QLabel *label_TeamNameLen;
    QPushButton *pushButton_TeamNameLen;
    QWidget *oopsNoProjSelected;
    QLabel *label_edi_9;
    QLabel *bubbleOops_9;
    QLabel *label_NoProjSelected;
    QPushButton *pushButton_NoProjSelected;
    QWidget *oopsTooManyProj;
    QLabel *label_edi_10;
    QLabel *bubbleOops_10;
    QLabel *label_TooManyProj;
    QPushButton *pushButton_TooManyProj;
    QWidget *oopsCannotRemove;
    QLabel *label_edi_11;
    QLabel *bubbleOops_11;
    QLabel *label_CannotRemove;
    QPushButton *pushButton_CannotRemove;

    void setupUi(QWidget *ControlTab_ViewEditTeamWindow)
    {
        if (ControlTab_ViewEditTeamWindow->objectName().isEmpty())
            ControlTab_ViewEditTeamWindow->setObjectName(QString::fromUtf8("ControlTab_ViewEditTeamWindow"));
        ControlTab_ViewEditTeamWindow->resize(597, 405);
        pushButton_editMode = new QPushButton(ControlTab_ViewEditTeamWindow);
        pushButton_editMode->setObjectName(QString::fromUtf8("pushButton_editMode"));
        pushButton_editMode->setGeometry(QRect(380, 10, 91, 32));
        pushButton_saveChanges = new QPushButton(ControlTab_ViewEditTeamWindow);
        pushButton_saveChanges->setObjectName(QString::fromUtf8("pushButton_saveChanges"));
        pushButton_saveChanges->setEnabled(false);
        pushButton_saveChanges->setGeometry(QRect(470, 10, 112, 32));
        lineEditTeamID = new QLineEdit(ControlTab_ViewEditTeamWindow);
        lineEditTeamID->setObjectName(QString::fromUtf8("lineEditTeamID"));
        lineEditTeamID->setEnabled(false);
        lineEditTeamID->setGeometry(QRect(100, 70, 161, 21));
        lineEditTeamName = new QLineEdit(ControlTab_ViewEditTeamWindow);
        lineEditTeamName->setObjectName(QString::fromUtf8("lineEditTeamName"));
        lineEditTeamName->setEnabled(false);
        lineEditTeamName->setGeometry(QRect(100, 100, 161, 21));
        label = new QLabel(ControlTab_ViewEditTeamWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(15, 70, 75, 16));
        label->setMinimumSize(QSize(75, 0));
        label->setMaximumSize(QSize(75, 16777215));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(ControlTab_ViewEditTeamWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(15, 100, 75, 16));
        label_2->setMinimumSize(QSize(75, 0));
        label_2->setMaximumSize(QSize(75, 16777215));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(ControlTab_ViewEditTeamWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(370, 40, 121, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        lineEditProjAssigned = new QLineEdit(ControlTab_ViewEditTeamWindow);
        lineEditProjAssigned->setObjectName(QString::fromUtf8("lineEditProjAssigned"));
        lineEditProjAssigned->setEnabled(false);
        lineEditProjAssigned->setGeometry(QRect(410, 100, 171, 21));
        label_4 = new QLabel(ControlTab_ViewEditTeamWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(280, 100, 121, 16));
        label_5 = new QLabel(ControlTab_ViewEditTeamWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(280, 130, 121, 16));
        lineEditProjComplete = new QLineEdit(ControlTab_ViewEditTeamWindow);
        lineEditProjComplete->setObjectName(QString::fromUtf8("lineEditProjComplete"));
        lineEditProjComplete->setEnabled(false);
        lineEditProjComplete->setGeometry(QRect(410, 130, 171, 21));
        label_6 = new QLabel(ControlTab_ViewEditTeamWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(280, 70, 121, 16));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEditCurProjects = new QLineEdit(ControlTab_ViewEditTeamWindow);
        lineEditCurProjects->setObjectName(QString::fromUtf8("lineEditCurProjects"));
        lineEditCurProjects->setEnabled(false);
        lineEditCurProjects->setGeometry(QRect(410, 70, 171, 21));
        lineEdit_newProj = new QLineEdit(ControlTab_ViewEditTeamWindow);
        lineEdit_newProj->setObjectName(QString::fromUtf8("lineEdit_newProj"));
        lineEdit_newProj->setEnabled(false);
        lineEdit_newProj->setGeometry(QRect(280, 195, 121, 21));
        label_8 = new QLabel(ControlTab_ViewEditTeamWindow);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(110, 40, 121, 16));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);
        pushButton_assign = new QPushButton(ControlTab_ViewEditTeamWindow);
        pushButton_assign->setObjectName(QString::fromUtf8("pushButton_assign"));
        pushButton_assign->setEnabled(false);
        pushButton_assign->setGeometry(QRect(376, 220, 51, 32));
        label_9 = new QLabel(ControlTab_ViewEditTeamWindow);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 170, 75, 16));
        label_9->setMinimumSize(QSize(75, 0));
        label_9->setMaximumSize(QSize(75, 16777215));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        tableWidget_members = new QTableWidget(ControlTab_ViewEditTeamWindow);
        if (tableWidget_members->columnCount() < 2)
            tableWidget_members->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_members->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_members->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_members->setObjectName(QString::fromUtf8("tableWidget_members"));
        tableWidget_members->setGeometry(QRect(10, 250, 245, 141));
        tableWidget_members->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_members->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_members->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget_members->horizontalHeader()->setMinimumSectionSize(19);
        tableWidget_members->horizontalHeader()->setDefaultSectionSize(121);
        pushButton_addNew = new QPushButton(ControlTab_ViewEditTeamWindow);
        pushButton_addNew->setObjectName(QString::fromUtf8("pushButton_addNew"));
        pushButton_addNew->setEnabled(false);
        pushButton_addNew->setGeometry(QRect(4, 220, 51, 32));
        pushButton_remove = new QPushButton(ControlTab_ViewEditTeamWindow);
        pushButton_remove->setObjectName(QString::fromUtf8("pushButton_remove"));
        pushButton_remove->setEnabled(false);
        pushButton_remove->setGeometry(QRect(45, 220, 71, 32));
        tableWidget_projs = new QTableWidget(ControlTab_ViewEditTeamWindow);
        if (tableWidget_projs->columnCount() < 3)
            tableWidget_projs->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_projs->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_projs->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_projs->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        tableWidget_projs->setObjectName(QString::fromUtf8("tableWidget_projs"));
        tableWidget_projs->setEnabled(true);
        tableWidget_projs->setGeometry(QRect(280, 250, 301, 141));
        tableWidget_projs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_projs->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_projs->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget_projs->horizontalHeader()->setMinimumSectionSize(19);
        tableWidget_projs->horizontalHeader()->setDefaultSectionSize(99);
        lineEditNewMember = new QLineEdit(ControlTab_ViewEditTeamWindow);
        lineEditNewMember->setObjectName(QString::fromUtf8("lineEditNewMember"));
        lineEditNewMember->setEnabled(false);
        lineEditNewMember->setGeometry(QRect(10, 195, 121, 21));
        pushButton_removeProj = new QPushButton(ControlTab_ViewEditTeamWindow);
        pushButton_removeProj->setObjectName(QString::fromUtf8("pushButton_removeProj"));
        pushButton_removeProj->setEnabled(false);
        pushButton_removeProj->setGeometry(QRect(418, 220, 71, 32));
        label_11 = new QLabel(ControlTab_ViewEditTeamWindow);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(280, 170, 75, 16));
        label_11->setMinimumSize(QSize(75, 0));
        label_11->setMaximumSize(QSize(75, 16777215));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_changeStatus = new QPushButton(ControlTab_ViewEditTeamWindow);
        pushButton_changeStatus->setObjectName(QString::fromUtf8("pushButton_changeStatus"));
        pushButton_changeStatus->setEnabled(false);
        pushButton_changeStatus->setGeometry(QRect(274, 220, 111, 32));
        label_ExpectedHours = new QLabel(ControlTab_ViewEditTeamWindow);
        label_ExpectedHours->setObjectName(QString::fromUtf8("label_ExpectedHours"));
        label_ExpectedHours->setGeometry(QRect(410, 197, 101, 16));
        spinBoxExpectedHours = new QDoubleSpinBox(ControlTab_ViewEditTeamWindow);
        spinBoxExpectedHours->setObjectName(QString::fromUtf8("spinBoxExpectedHours"));
        spinBoxExpectedHours->setEnabled(false);
        spinBoxExpectedHours->setGeometry(QRect(510, 195, 71, 22));
        labelTeamName = new QLabel(ControlTab_ViewEditTeamWindow);
        labelTeamName->setObjectName(QString::fromUtf8("labelTeamName"));
        labelTeamName->setGeometry(QRect(70, 5, 291, 31));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        labelTeamName->setFont(font1);
        labelTeamName->setStyleSheet(QString::fromUtf8("color: #F46524;\n"
""));
        labelTeamName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_7 = new QLabel(ControlTab_ViewEditTeamWindow);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(15, 130, 75, 16));
        label_7->setMinimumSize(QSize(75, 0));
        label_7->setMaximumSize(QSize(75, 16777215));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEditNumMembers = new QLineEdit(ControlTab_ViewEditTeamWindow);
        lineEditNumMembers->setObjectName(QString::fromUtf8("lineEditNumMembers"));
        lineEditNumMembers->setEnabled(false);
        lineEditNumMembers->setGeometry(QRect(100, 130, 161, 21));
        labelTeamName_2 = new QLabel(ControlTab_ViewEditTeamWindow);
        labelTeamName_2->setObjectName(QString::fromUtf8("labelTeamName_2"));
        labelTeamName_2->setGeometry(QRect(10, 5, 61, 31));
        labelTeamName_2->setFont(font1);
        labelTeamName_2->setStyleSheet(QString::fromUtf8(""));
        labelTeamName_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        oopsTeamExists = new QWidget(ControlTab_ViewEditTeamWindow);
        oopsTeamExists->setObjectName(QString::fromUtf8("oopsTeamExists"));
        oopsTeamExists->setGeometry(QRect(460, 280, 141, 121));
        label_edi = new QLabel(oopsTeamExists);
        label_edi->setObjectName(QString::fromUtf8("label_edi"));
        label_edi->setGeometry(QRect(100, 90, 31, 31));
        label_edi->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_edi->setScaledContents(true);
        bubbleOops = new QLabel(oopsTeamExists);
        bubbleOops->setObjectName(QString::fromUtf8("bubbleOops"));
        bubbleOops->setGeometry(QRect(10, 20, 91, 81));
        bubbleOops->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/rBubble.png")));
        bubbleOops->setScaledContents(true);
        label_TeamExists = new QLabel(oopsTeamExists);
        label_TeamExists->setObjectName(QString::fromUtf8("label_TeamExists"));
        label_TeamExists->setGeometry(QRect(12, 25, 86, 38));
        QFont font2;
        font2.setPointSize(11);
        label_TeamExists->setFont(font2);
        label_TeamExists->setWordWrap(true);
        pushButton_TeamExists = new QPushButton(oopsTeamExists);
        pushButton_TeamExists->setObjectName(QString::fromUtf8("pushButton_TeamExists"));
        pushButton_TeamExists->setGeometry(QRect(80, 20, 21, 16));
        QFont font3;
        font3.setPointSize(12);
        pushButton_TeamExists->setFont(font3);
        pushButton_TeamExists->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        oopsEmployeeTaken = new QWidget(ControlTab_ViewEditTeamWindow);
        oopsEmployeeTaken->setObjectName(QString::fromUtf8("oopsEmployeeTaken"));
        oopsEmployeeTaken->setGeometry(QRect(460, 280, 141, 121));
        label_edi_3 = new QLabel(oopsEmployeeTaken);
        label_edi_3->setObjectName(QString::fromUtf8("label_edi_3"));
        label_edi_3->setGeometry(QRect(100, 90, 31, 31));
        label_edi_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_edi_3->setScaledContents(true);
        bubbleOops_3 = new QLabel(oopsEmployeeTaken);
        bubbleOops_3->setObjectName(QString::fromUtf8("bubbleOops_3"));
        bubbleOops_3->setGeometry(QRect(10, 20, 91, 81));
        bubbleOops_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/rBubble.png")));
        bubbleOops_3->setScaledContents(true);
        label_EmployeeTaken = new QLabel(oopsEmployeeTaken);
        label_EmployeeTaken->setObjectName(QString::fromUtf8("label_EmployeeTaken"));
        label_EmployeeTaken->setGeometry(QRect(12, 25, 86, 38));
        label_EmployeeTaken->setFont(font2);
        label_EmployeeTaken->setWordWrap(true);
        pushButton_EmployeeTaken = new QPushButton(oopsEmployeeTaken);
        pushButton_EmployeeTaken->setObjectName(QString::fromUtf8("pushButton_EmployeeTaken"));
        pushButton_EmployeeTaken->setGeometry(QRect(80, 20, 21, 16));
        pushButton_EmployeeTaken->setFont(font3);
        pushButton_EmployeeTaken->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        oopsInvalidID = new QWidget(ControlTab_ViewEditTeamWindow);
        oopsInvalidID->setObjectName(QString::fromUtf8("oopsInvalidID"));
        oopsInvalidID->setGeometry(QRect(460, 280, 141, 121));
        label_edi_4 = new QLabel(oopsInvalidID);
        label_edi_4->setObjectName(QString::fromUtf8("label_edi_4"));
        label_edi_4->setGeometry(QRect(100, 90, 31, 31));
        label_edi_4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_edi_4->setScaledContents(true);
        bubbleOops_4 = new QLabel(oopsInvalidID);
        bubbleOops_4->setObjectName(QString::fromUtf8("bubbleOops_4"));
        bubbleOops_4->setGeometry(QRect(10, 20, 91, 81));
        bubbleOops_4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/rBubble.png")));
        bubbleOops_4->setScaledContents(true);
        label_InvalidID = new QLabel(oopsInvalidID);
        label_InvalidID->setObjectName(QString::fromUtf8("label_InvalidID"));
        label_InvalidID->setGeometry(QRect(12, 25, 86, 38));
        label_InvalidID->setFont(font2);
        label_InvalidID->setWordWrap(true);
        pushButton_InvalidID = new QPushButton(oopsInvalidID);
        pushButton_InvalidID->setObjectName(QString::fromUtf8("pushButton_InvalidID"));
        pushButton_InvalidID->setGeometry(QRect(80, 20, 21, 16));
        pushButton_InvalidID->setFont(font3);
        pushButton_InvalidID->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        oopsNotOnTeam = new QWidget(ControlTab_ViewEditTeamWindow);
        oopsNotOnTeam->setObjectName(QString::fromUtf8("oopsNotOnTeam"));
        oopsNotOnTeam->setGeometry(QRect(460, 280, 141, 121));
        label_edi_5 = new QLabel(oopsNotOnTeam);
        label_edi_5->setObjectName(QString::fromUtf8("label_edi_5"));
        label_edi_5->setGeometry(QRect(100, 90, 31, 31));
        label_edi_5->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_edi_5->setScaledContents(true);
        bubbleOops_5 = new QLabel(oopsNotOnTeam);
        bubbleOops_5->setObjectName(QString::fromUtf8("bubbleOops_5"));
        bubbleOops_5->setGeometry(QRect(10, 20, 91, 81));
        bubbleOops_5->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/rBubble.png")));
        bubbleOops_5->setScaledContents(true);
        label_NotOnTeam = new QLabel(oopsNotOnTeam);
        label_NotOnTeam->setObjectName(QString::fromUtf8("label_NotOnTeam"));
        label_NotOnTeam->setGeometry(QRect(12, 25, 86, 38));
        label_NotOnTeam->setFont(font2);
        label_NotOnTeam->setWordWrap(true);
        pushButton_NotOnTeam = new QPushButton(oopsNotOnTeam);
        pushButton_NotOnTeam->setObjectName(QString::fromUtf8("pushButton_NotOnTeam"));
        pushButton_NotOnTeam->setGeometry(QRect(80, 20, 21, 16));
        pushButton_NotOnTeam->setFont(font3);
        pushButton_NotOnTeam->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        oopsDuplicateProject = new QWidget(ControlTab_ViewEditTeamWindow);
        oopsDuplicateProject->setObjectName(QString::fromUtf8("oopsDuplicateProject"));
        oopsDuplicateProject->setGeometry(QRect(460, 280, 141, 121));
        label_edi_6 = new QLabel(oopsDuplicateProject);
        label_edi_6->setObjectName(QString::fromUtf8("label_edi_6"));
        label_edi_6->setGeometry(QRect(100, 90, 31, 31));
        label_edi_6->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_edi_6->setScaledContents(true);
        bubbleOops_6 = new QLabel(oopsDuplicateProject);
        bubbleOops_6->setObjectName(QString::fromUtf8("bubbleOops_6"));
        bubbleOops_6->setGeometry(QRect(10, 20, 91, 81));
        bubbleOops_6->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/rBubble.png")));
        bubbleOops_6->setScaledContents(true);
        label_DuplicateProject = new QLabel(oopsDuplicateProject);
        label_DuplicateProject->setObjectName(QString::fromUtf8("label_DuplicateProject"));
        label_DuplicateProject->setGeometry(QRect(12, 25, 86, 38));
        label_DuplicateProject->setFont(font2);
        label_DuplicateProject->setWordWrap(true);
        pushButton_DuplicateProject = new QPushButton(oopsDuplicateProject);
        pushButton_DuplicateProject->setObjectName(QString::fromUtf8("pushButton_DuplicateProject"));
        pushButton_DuplicateProject->setGeometry(QRect(80, 20, 21, 16));
        pushButton_DuplicateProject->setFont(font3);
        pushButton_DuplicateProject->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        oopsNegHours = new QWidget(ControlTab_ViewEditTeamWindow);
        oopsNegHours->setObjectName(QString::fromUtf8("oopsNegHours"));
        oopsNegHours->setGeometry(QRect(460, 280, 141, 121));
        label_edi_7 = new QLabel(oopsNegHours);
        label_edi_7->setObjectName(QString::fromUtf8("label_edi_7"));
        label_edi_7->setGeometry(QRect(100, 90, 31, 31));
        label_edi_7->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_edi_7->setScaledContents(true);
        bubbleOops_7 = new QLabel(oopsNegHours);
        bubbleOops_7->setObjectName(QString::fromUtf8("bubbleOops_7"));
        bubbleOops_7->setGeometry(QRect(10, 20, 91, 81));
        bubbleOops_7->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/rBubble.png")));
        bubbleOops_7->setScaledContents(true);
        label_NegHours = new QLabel(oopsNegHours);
        label_NegHours->setObjectName(QString::fromUtf8("label_NegHours"));
        label_NegHours->setGeometry(QRect(12, 25, 86, 38));
        label_NegHours->setFont(font2);
        label_NegHours->setWordWrap(true);
        pushButton_NegHours = new QPushButton(oopsNegHours);
        pushButton_NegHours->setObjectName(QString::fromUtf8("pushButton_NegHours"));
        pushButton_NegHours->setGeometry(QRect(80, 20, 21, 16));
        pushButton_NegHours->setFont(font3);
        pushButton_NegHours->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        oopsTeamNameLen = new QWidget(ControlTab_ViewEditTeamWindow);
        oopsTeamNameLen->setObjectName(QString::fromUtf8("oopsTeamNameLen"));
        oopsTeamNameLen->setGeometry(QRect(460, 280, 141, 121));
        label_edi_8 = new QLabel(oopsTeamNameLen);
        label_edi_8->setObjectName(QString::fromUtf8("label_edi_8"));
        label_edi_8->setGeometry(QRect(100, 90, 31, 31));
        label_edi_8->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_edi_8->setScaledContents(true);
        bubbleOops_8 = new QLabel(oopsTeamNameLen);
        bubbleOops_8->setObjectName(QString::fromUtf8("bubbleOops_8"));
        bubbleOops_8->setGeometry(QRect(10, 20, 91, 81));
        bubbleOops_8->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/rBubble.png")));
        bubbleOops_8->setScaledContents(true);
        label_TeamNameLen = new QLabel(oopsTeamNameLen);
        label_TeamNameLen->setObjectName(QString::fromUtf8("label_TeamNameLen"));
        label_TeamNameLen->setGeometry(QRect(12, 25, 86, 38));
        label_TeamNameLen->setFont(font2);
        label_TeamNameLen->setWordWrap(true);
        pushButton_TeamNameLen = new QPushButton(oopsTeamNameLen);
        pushButton_TeamNameLen->setObjectName(QString::fromUtf8("pushButton_TeamNameLen"));
        pushButton_TeamNameLen->setGeometry(QRect(80, 20, 21, 16));
        pushButton_TeamNameLen->setFont(font3);
        pushButton_TeamNameLen->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        oopsNoProjSelected = new QWidget(ControlTab_ViewEditTeamWindow);
        oopsNoProjSelected->setObjectName(QString::fromUtf8("oopsNoProjSelected"));
        oopsNoProjSelected->setGeometry(QRect(460, 280, 141, 121));
        label_edi_9 = new QLabel(oopsNoProjSelected);
        label_edi_9->setObjectName(QString::fromUtf8("label_edi_9"));
        label_edi_9->setGeometry(QRect(100, 90, 31, 31));
        label_edi_9->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_edi_9->setScaledContents(true);
        bubbleOops_9 = new QLabel(oopsNoProjSelected);
        bubbleOops_9->setObjectName(QString::fromUtf8("bubbleOops_9"));
        bubbleOops_9->setGeometry(QRect(10, 20, 91, 81));
        bubbleOops_9->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/rBubble.png")));
        bubbleOops_9->setScaledContents(true);
        label_NoProjSelected = new QLabel(oopsNoProjSelected);
        label_NoProjSelected->setObjectName(QString::fromUtf8("label_NoProjSelected"));
        label_NoProjSelected->setGeometry(QRect(12, 25, 86, 38));
        label_NoProjSelected->setFont(font2);
        label_NoProjSelected->setWordWrap(true);
        pushButton_NoProjSelected = new QPushButton(oopsNoProjSelected);
        pushButton_NoProjSelected->setObjectName(QString::fromUtf8("pushButton_NoProjSelected"));
        pushButton_NoProjSelected->setGeometry(QRect(80, 20, 21, 16));
        pushButton_NoProjSelected->setFont(font3);
        pushButton_NoProjSelected->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        oopsTooManyProj = new QWidget(ControlTab_ViewEditTeamWindow);
        oopsTooManyProj->setObjectName(QString::fromUtf8("oopsTooManyProj"));
        oopsTooManyProj->setGeometry(QRect(460, 280, 141, 121));
        label_edi_10 = new QLabel(oopsTooManyProj);
        label_edi_10->setObjectName(QString::fromUtf8("label_edi_10"));
        label_edi_10->setGeometry(QRect(100, 90, 31, 31));
        label_edi_10->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_edi_10->setScaledContents(true);
        bubbleOops_10 = new QLabel(oopsTooManyProj);
        bubbleOops_10->setObjectName(QString::fromUtf8("bubbleOops_10"));
        bubbleOops_10->setGeometry(QRect(10, 20, 91, 81));
        bubbleOops_10->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/rBubble.png")));
        bubbleOops_10->setScaledContents(true);
        label_TooManyProj = new QLabel(oopsTooManyProj);
        label_TooManyProj->setObjectName(QString::fromUtf8("label_TooManyProj"));
        label_TooManyProj->setGeometry(QRect(12, 25, 86, 38));
        label_TooManyProj->setFont(font2);
        label_TooManyProj->setWordWrap(true);
        pushButton_TooManyProj = new QPushButton(oopsTooManyProj);
        pushButton_TooManyProj->setObjectName(QString::fromUtf8("pushButton_TooManyProj"));
        pushButton_TooManyProj->setGeometry(QRect(80, 20, 21, 16));
        pushButton_TooManyProj->setFont(font3);
        pushButton_TooManyProj->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        oopsCannotRemove = new QWidget(ControlTab_ViewEditTeamWindow);
        oopsCannotRemove->setObjectName(QString::fromUtf8("oopsCannotRemove"));
        oopsCannotRemove->setGeometry(QRect(460, 280, 141, 121));
        label_edi_11 = new QLabel(oopsCannotRemove);
        label_edi_11->setObjectName(QString::fromUtf8("label_edi_11"));
        label_edi_11->setGeometry(QRect(100, 90, 31, 31));
        label_edi_11->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_edi_11->setScaledContents(true);
        bubbleOops_11 = new QLabel(oopsCannotRemove);
        bubbleOops_11->setObjectName(QString::fromUtf8("bubbleOops_11"));
        bubbleOops_11->setGeometry(QRect(10, 20, 91, 81));
        bubbleOops_11->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/rBubble.png")));
        bubbleOops_11->setScaledContents(true);
        label_CannotRemove = new QLabel(oopsCannotRemove);
        label_CannotRemove->setObjectName(QString::fromUtf8("label_CannotRemove"));
        label_CannotRemove->setGeometry(QRect(12, 25, 86, 38));
        label_CannotRemove->setFont(font2);
        label_CannotRemove->setWordWrap(true);
        pushButton_CannotRemove = new QPushButton(oopsCannotRemove);
        pushButton_CannotRemove->setObjectName(QString::fromUtf8("pushButton_CannotRemove"));
        pushButton_CannotRemove->setGeometry(QRect(80, 20, 21, 16));
        pushButton_CannotRemove->setFont(font3);
        pushButton_CannotRemove->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));

        retranslateUi(ControlTab_ViewEditTeamWindow);

        QMetaObject::connectSlotsByName(ControlTab_ViewEditTeamWindow);
    } // setupUi

    void retranslateUi(QWidget *ControlTab_ViewEditTeamWindow)
    {
        ControlTab_ViewEditTeamWindow->setWindowTitle(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Team Details", nullptr));
        pushButton_editMode->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Edit Mode", nullptr));
        pushButton_saveChanges->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Save Changes", nullptr));
        label->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Team ID", nullptr));
        label_2->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Team Name", nullptr));
        label_3->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Projects", nullptr));
        label_4->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "# Projects Assigned", nullptr));
        label_5->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "# Projects Completed", nullptr));
        label_6->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "# Current Projects", nullptr));
        lineEdit_newProj->setPlaceholderText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Project Name", nullptr));
        label_8->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Team Details", nullptr));
        pushButton_assign->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Add", nullptr));
        label_9->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Members", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_members->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_members->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Last Name", nullptr));
        pushButton_addNew->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Add", nullptr));
        pushButton_remove->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Remove", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_projs->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Project", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_projs->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Status", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_projs->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Hours", nullptr));
        lineEditNewMember->setText(QString());
        lineEditNewMember->setPlaceholderText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Employee ID", nullptr));
        pushButton_removeProj->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Remove", nullptr));
        label_11->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Projects", nullptr));
        pushButton_changeStatus->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Change Status", nullptr));
        label_ExpectedHours->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Expected Hours", nullptr));
        labelTeamName->setText(QString());
        label_7->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "# Members", nullptr));
        lineEditNumMembers->setText(QString());
        labelTeamName_2->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Team :", nullptr));
        label_edi->setText(QString());
        bubbleOops->setText(QString());
        label_TeamExists->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Team name already exists.", nullptr));
        pushButton_TeamExists->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "x", nullptr));
        label_edi_3->setText(QString());
        bubbleOops_3->setText(QString());
        label_EmployeeTaken->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Employee already on a team.", nullptr));
        pushButton_EmployeeTaken->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "x", nullptr));
        label_edi_4->setText(QString());
        bubbleOops_4->setText(QString());
        label_InvalidID->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Invalid employee ID.", nullptr));
        pushButton_InvalidID->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "x", nullptr));
        label_edi_5->setText(QString());
        bubbleOops_5->setText(QString());
        label_NotOnTeam->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Employee not part of this team.", nullptr));
        pushButton_NotOnTeam->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "x", nullptr));
        label_edi_6->setText(QString());
        bubbleOops_6->setText(QString());
        label_DuplicateProject->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Duplicate project name in company.", nullptr));
        pushButton_DuplicateProject->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "x", nullptr));
        label_edi_7->setText(QString());
        bubbleOops_7->setText(QString());
        label_NegHours->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Expected \n"
"hours must be positive.", nullptr));
        pushButton_NegHours->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "x", nullptr));
        label_edi_8->setText(QString());
        bubbleOops_8->setText(QString());
        label_TeamNameLen->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Team name cannot exceed 30 characters.", nullptr));
        pushButton_TeamNameLen->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "x", nullptr));
        label_edi_9->setText(QString());
        bubbleOops_9->setText(QString());
        label_NoProjSelected->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "No project selected.", nullptr));
        pushButton_NoProjSelected->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "x", nullptr));
        label_edi_10->setText(QString());
        bubbleOops_10->setText(QString());
        label_TooManyProj->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Too many projects selected.", nullptr));
        pushButton_TooManyProj->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "x", nullptr));
        label_edi_11->setText(QString());
        bubbleOops_11->setText(QString());
        label_CannotRemove->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Can't remove completed project.", nullptr));
        pushButton_CannotRemove->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlTab_ViewEditTeamWindow: public Ui_ControlTab_ViewEditTeamWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLTAB_VIEWEDITTEAMWINDOW_H
