#include "windowmain.h"
#include "ui_windowmain.h"
#include <QTimer>

#include <iostream>

/***********************************************************************************************************
 * We setup the associated UI and instantiate a database connection for the WinowMain model
 * We also set the style sheet of the QTableView embedded db's row highlight color.
***********************************************************************************************************/
WindowMain::WindowMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowMain)
{
    ui->setupUi(this);
    DatabaseConnection *dbc = new DatabaseConnection(this);
    db3 = dbc->establishConnection("three");

    ui->tableWidget_db_3->setStyleSheet("QTableView:item:selected {background-color: #F56525; color: #FFFFFF}\n"
                         "QTableView:item:selected:focus {background-color: #F56525;}");
    ui->tableWidget_db_4->setStyleSheet("QTableView:item:selected {background-color: #F56525; color: #FFFFFF}\n"
                         "QTableView:item:selected:focus {background-color: #F56525;}");

    ui->oopsNoEmployee->hide();
    ui->oopsNoTeamSelected->hide();
    ui->oopsSearchFilter->hide();
    ui->oopsTooManyEmp->hide();
    ui->oopsTooManyTeams->hide();
}






WindowMain::~WindowMain()
{
    delete ui;
}





/***********************************************************************************************************
 * This button is found in the Control tab.
 * When it is clicked, the user wants to view/edit the selected employee.
 * If there is in fact a selected row in the embedded database, a ControlTab_ViewEditEmployee object is
 * instantiated (which is the main UI for viewing/editing existing details of an employee).
 * If there is no epmloyee selected, a MessageBox will pop up in error.
***********************************************************************************************************/
void WindowMain::on_pushButton_vieweditemployee_2_clicked()
{
    QModelIndexList rowSelection = ui->tableWidget_db_3->selectionModel()->selectedRows();
    if (rowSelection.count() != 1){
        if (rowSelection.count() == 0)
            ui->oopsNoEmployee->show();
            ui->oopsTooManyEmp->hide();
            ui->oopsNoTeamSelected->hide();
            ui->oopsTooManyTeams->hide();
            ui->oopsSearchFilter->hide();
        else
            ui->oopsTooManyEmp->show();
            ui->oopsNoTeamSelected->hide();
            ui->oopsTooManyTeams->hide();
            ui->oopsSearchFilter->hide();
            ui->oopsNoEmployee->hide();
    } else {

        QModelIndex index = ui -> tableWidget_db_3 -> selectionModel() -> currentIndex();

        QVector<QString> fields = { };
        for (int i = 0; i < ui -> tableWidget_db_3 -> columnCount(); i++) {
            QString str = ui -> tableWidget_db_3 -> model() -> index(index.row(), i).data().toString();
            fields.push_back(str);
            std::cout << fields.back().toStdString() << std::endl;
        }

        viewEditEmployeeWindow = new ControlTab_ViewEditEmployee();
        viewEditEmployeeWindow -> set_fields(fields, fields);
        viewEditEmployeeWindow -> set_view_position(userPosition);
        viewEditEmployeeWindow -> set_edit_mode_lock();
        viewEditEmployeeWindow -> show();
    }

}





/****************************************************************************************************************************
 * Details from the employee database are loaded into the QTableWidget that acts as the embedded MYSQL database for employees.
 * To get this data a query is created that gets all the employees from the Employee table in the db, and loads them one by
 * one into a newly created row for the QTableWidget employee embedded db.
*****************************************************************************************************************************/
void WindowMain::resetEmployeeTable(){

    QSqlQuery query_getEmployeeRow(QSqlDatabase::database("three"));
    QString employeeRowSqlString;
    employeeRowSqlString = "SELECT EmployeeID, Name_Last, Name_First, Salary, SSN, Position_Code, Username, Password, Team FROM Employee";
    query_getEmployeeRow.exec(employeeRowSqlString);

    ui->tableWidget_db_3->setRowCount(0);
    int col = 0;

    while (query_getEmployeeRow.next()) {
        ui->tableWidget_db_3->insertRow ( ui->tableWidget_db_3->rowCount() );
        int row = ui->tableWidget_db_3->rowCount()-1;
        while (col < 9){
            if (col == 7){
                QString password = query_getEmployeeRow.value(col).toString();
                QString encryptedPassword = "";
                for (auto letter : password){
                    encryptedPassword.append("*");
                }
                ui->tableWidget_db_3->setItem( row, col, new QTableWidgetItem(encryptedPassword));
            }
            else{
                ui->tableWidget_db_3->setItem( row, col, new QTableWidgetItem(query_getEmployeeRow.value(col).toString()));
            }
            col++;
        }
        col = 0;
    }
}





/****************************************************************************************************************************
 * See details of resetEmployeeTable. All the same applies but to the Team table in the db rather than the Employee table.
*****************************************************************************************************************************/
void WindowMain::resetTeamTable(){
    // Populates the Team embedded db
    QSqlQuery query_numTeams(QSqlDatabase::database("three"));
    QSqlQuery query_getTeamRow(QSqlDatabase::database("three"));
    QString teamRowSqlString;
    query_numTeams.exec("SELECT COUNT(*) FROM Team");
    teamRowSqlString = "SELECT TeamID, TeamName, ProjectsAssigned, ProjectsCompleted FROM Team";
    query_getTeamRow.exec(teamRowSqlString);
    ui->tableWidget_db_4->setRowCount(0);
    int col = 0;

    while (query_getTeamRow.next()) {
        ui->tableWidget_db_4->insertRow ( ui->tableWidget_db_4->rowCount() );
        int row = ui->tableWidget_db_4->rowCount()-1;
        while (col < 4){
            ui->tableWidget_db_4->setItem( row, col, new QTableWidgetItem(query_getTeamRow.value(col).toString()));
            col++;
        }
        col = 0;
    }
}



/***********************************************************************************************************
 * When the WindowMain object is first viewed, it opens on the MyEDI tab. When the tab is changed,
 * we reset the embedded db tables so duplicated rows do not occur.
***********************************************************************************************************/
void WindowMain::on_tabWidget_currentChanged(int index)
{
    resetEmployeeTable();
    resetTeamTable();
}





/***********************************************************************************************************
 * When log out button pushed from WindowMain, we see a popup window saying "Goodbye!".
***********************************************************************************************************/
void WindowMain::on_pushButton_LogOut_clicked()
{
    QMessageBox::information(
        this,
        tr("EDI: Employee Data Interface"), // Window text
        tr("Goodbye!") );                   // Text displayed inside of window
    this -> close();
}





/***********************************************************************************************************
 * Sets the "Welcome <user>" message at the top of the WindowMain UI.
***********************************************************************************************************/
void WindowMain::setWelcomeName(QString userFirstName){
    this->userFirstName = userFirstName;
    ui->label_welcomeUser->setText("Welcome, " + userFirstName + ".");
}





/***********************************************************************************************************
 * Stores a copy of the user's position.
***********************************************************************************************************/
void WindowMain::setPosition(QString userPos) {
    userPosition = userPos;
}




/***********************************************************************************************************
 * Disables tabs indexed 1 and 2, or the Control tab and the Analyze tab when a users position code matches
 * that of a basic level employee "E".
***********************************************************************************************************/
void WindowMain::setDisabledFeatures(QString userPositionCode){
    if (userPositionCode == "E"){
        ui->tabWidget->setTabEnabled(1, false);
        ui->tabWidget->setTabEnabled(2, false);
    }
}





/***********************************************************************************************************
 * Searches for an employee in the embedded employee db based on the radio button/filter that is selected.
***********************************************************************************************************/
void WindowMain::on_pushButton_SearchEmployee_clicked(){

    QString lineEdit_searchEmployee = ui->lineEdit_searchEmployee->text();
    QSqlQuery query_searchEmployee(QSqlDatabase::database("three"));
    QString stringSearchEmployee = "";

    if (lineEdit_searchEmployee != ""){ // The user entered SOMETHING in the search field. It is not empty.
        if(ui->radioButton_ID->isChecked()){
            query_searchEmployee.prepare("SELECT * FROM Employee WHERE EmployeeID = :employeeID");
            query_searchEmployee.bindValue(":employeeID", lineEdit_searchEmployee);
            query_searchEmployee.exec();
        }
        else if(ui->radioButton_FirstName->isChecked()){
            query_searchEmployee.prepare("SELECT * FROM Employee WHERE Name_First = :employeeName_First");
            query_searchEmployee.bindValue(":employeeName_First", lineEdit_searchEmployee);
            query_searchEmployee.exec();
        }
        else if(ui->radioButton_LastName->isChecked()){
            query_searchEmployee.prepare("SELECT * FROM Employee WHERE Name_Last = :employeeName_Last");
            query_searchEmployee.bindValue(":employeeName_Last", lineEdit_searchEmployee);
            query_searchEmployee.exec();
        }
        else if(ui->radioButton_SSN->isChecked()){
            query_searchEmployee.prepare("SELECT * FROM Employee WHERE SSN = :employee_SSN");
            query_searchEmployee.bindValue(":employee_SSN", lineEdit_searchEmployee);
            query_searchEmployee.exec();
        }
        else if (ui->radioButton_Position->isChecked()){
            query_searchEmployee.prepare("SELECT * FROM Employee WHERE Position_Code = :employeePosition_Code");
            query_searchEmployee.bindValue(":employeePosition_Code", lineEdit_searchEmployee);
            query_searchEmployee.exec();
        }
        else if(ui->radioButton_Salary->isChecked()){
            query_searchEmployee.prepare("SELECT * FROM Employee WHERE Salary = :employeeSalary");
            query_searchEmployee.bindValue(":employeeSalary", lineEdit_searchEmployee);
            query_searchEmployee.exec();
        }
        else if(ui->radioButton_Username->isChecked()){
            query_searchEmployee.prepare("SELECT * FROM Employee WHERE Username = :employeeUsername");
            query_searchEmployee.bindValue(":employeeUsername", lineEdit_searchEmployee);
            query_searchEmployee.exec();
        }
        else if(ui->radioButton_Team->isChecked()){
            query_searchEmployee.prepare("SELECT * FROM Employee WHERE Team = :employeeTeam");
            query_searchEmployee.bindValue(":employeeTeam", lineEdit_searchEmployee);
            query_searchEmployee.exec();
        }
        else{ // No Radio button was selected
            ui->oopsSearchFilter->show();
            ui->oopsTooManyEmp->hide();
            ui->oopsNoTeamSelected->hide();
            ui->oopsTooManyTeams->hide();
            ui->oopsNoEmployee->hide();
        }


        // The search of the embedded db table returns at least one employe, based on the radio button/filter selected.
        if (query_searchEmployee.size() > 0){
            ui->tableWidget_db_3->setRowCount(0);
            int col = 0;
            while (query_searchEmployee.next()) {
                ui->tableWidget_db_3->insertRow ( ui->tableWidget_db_3->rowCount() );
                int row = ui->tableWidget_db_3->rowCount()-1;
                ui->tableWidget_db_3->setItem( row, 0, new QTableWidgetItem(query_searchEmployee.value(0).toString()));
                ui->tableWidget_db_3->setItem( row, 1, new QTableWidgetItem(query_searchEmployee.value(1).toString()));
                ui->tableWidget_db_3->setItem( row, 2, new QTableWidgetItem(query_searchEmployee.value(2).toString()));
                ui->tableWidget_db_3->setItem( row, 3, new QTableWidgetItem(query_searchEmployee.value(3).toString()));
                ui->tableWidget_db_3->setItem( row, 4, new QTableWidgetItem(query_searchEmployee.value(4).toString()));
                ui->tableWidget_db_3->setItem( row, 5, new QTableWidgetItem(query_searchEmployee.value(5).toString()));
                ui->tableWidget_db_3->setItem( row, 6, new QTableWidgetItem(query_searchEmployee.value(6).toString()));
                ui->tableWidget_db_3->setItem( row, 7, new QTableWidgetItem(query_searchEmployee.value(7).toString()));

                QString password = query_searchEmployee.value(7).toString();
                QString encryptedPassword = "";
                for (auto letter : password){
                    encryptedPassword.append("*");
                }
                ui->tableWidget_db_3->setItem( row, 7, new QTableWidgetItem(encryptedPassword));
                col++;
            }
        }
        else{
            ui->tableWidget_db_3->setRowCount(0);
        }
    }

}




/***********************************************************************************************************
 * The user wants to reset the employee search. The table will be repopulated with all employee data.
***********************************************************************************************************/
void WindowMain::on_pushButton_Reset_clicked()
{
    resetEmployeeTable();
}





/***********************************************************************************************************
 * Searches for a team in the embedded team db. Search is performed on TeamID or TeamName.
***********************************************************************************************************/
void WindowMain::on_pushButton_SearchTeam_clicked()
{
    QString lineEdit_searchTeam = ui->lineEdit_searchTeam->text();
    QSqlQuery query_searchTeam(QSqlDatabase::database("three"));
    QString stringSearchTeam = "";

    if (lineEdit_searchTeam != ""){
        query_searchTeam.prepare("SELECT * FROM Team WHERE TeamID = :teamSearch OR TeamName = :teamSearch");
        query_searchTeam.bindValue(":teamSearch", lineEdit_searchTeam);
        query_searchTeam.exec();

        if (query_searchTeam.size() > 0){

            ui->tableWidget_db_4->setRowCount(0);
            int col = 0;

            while (query_searchTeam.next()) {
                ui->tableWidget_db_4->insertRow ( ui->tableWidget_db_4->rowCount() );
                int row = ui->tableWidget_db_4->rowCount()-1;
                ui->tableWidget_db_4->setItem( row, 0, new QTableWidgetItem(query_searchTeam.value(0).toString()));
                ui->tableWidget_db_4->setItem( row, 1, new QTableWidgetItem(query_searchTeam.value(1).toString()));
                ui->tableWidget_db_4->setItem( row, 2, new QTableWidgetItem(query_searchTeam.value(2).toString()));
                ui->tableWidget_db_4->setItem( row, 3, new QTableWidgetItem(query_searchTeam.value(3).toString()));
                col++;
            }
        }
        else{
            ui->tableWidget_db_4->setRowCount(0);
        }
    }

}




/***********************************************************************************************************
 * The user wants to reset the team search. The table will be repopulated with all employee data.
***********************************************************************************************************/
void WindowMain::on_pushButton_TeamReset_clicked()
{
    resetTeamTable();
}





/*************************************************************************************
 * The user selected to create a New Team.
**************************************************************************************/
void WindowMain::on_pushButton_newTeam_clicked()
{
    newTeam = new NewTeam();
    newTeam->set_db_table_refs(ui->tableWidget_db_3, ui->tableWidget_db_4);
;
    newTeam->show();
}





/***********************************************************************************************************
 * The user selected to View/Edit Team for the currently selected team row in the embedded team db.
***********************************************************************************************************/
void WindowMain::on_pushButton_viewEditTeam_clicked()
{
    QModelIndexList rowSelection = ui->tableWidget_db_4->selectionModel()->selectedRows();
    if (rowSelection.count() != 1){
        if (rowSelection.count() == 0){
            ui->oopsNoTeamSelected->show();
            ui->oopsTooManyEmp->hide();
            ui->oopsTooManyTeams->hide();
            ui->oopsSearchFilter->hide();
            ui->oopsNoEmployee->hide();
        }
        else{
            ui->oopsTooManyTeams->show();
            ui->oopsTooManyEmp->hide();
            ui->oopsNoTeamSelected->hide();
            ui->oopsSearchFilter->hide();
            ui->oopsNoEmployee->hide();
        }
    } else {
        QModelIndex index = ui -> tableWidget_db_4 -> selectionModel() -> currentIndex();
        QVector<QString> fields = { };
        for (int i = 0; i < ui -> tableWidget_db_4 -> columnCount(); i++) {
            QString str = ui -> tableWidget_db_4 -> model() -> index(index.row(), i).data().toString();
            fields.push_back(str);
        }

        viewEditTeamWindow = new ControlTab_ViewEditTeamWindow();
        viewEditTeamWindow -> set_fields(fields);
        viewEditTeamWindow->set_db_table_refs(ui->tableWidget_db_3, ui->tableWidget_db_4);
        viewEditTeamWindow -> show();
    }
}





/***********************************************************************************************************
 * process(ControlTab_ViewEditTeamWindow *viewEditTeamWindow): resets the team table.
***********************************************************************************************************/
void WindowMain::process(ControlTab_ViewEditTeamWindow *viewEditTeamWindow) {
      resetTeamTable();
}






/***********************************************************************************************************
 * Hides the Edi helper popup when no employee was selected, but the user clicked "View/Edit Employee"
***********************************************************************************************************/
void WindowMain::on_pushButton_noEmployee_clicked()
{
    ui->bubbleOopsNoEmployee->hide();
}






/***********************************************************************************************************
 * Hides the Edi helper popup when no employee was selected, but the user clicked "View/Edit Employee"
***********************************************************************************************************/
void WindowMain::on_pushButton_noTeamSelected_clicked()
{
    ui->oopsNoTeamSelected->hide();
}






void WindowMain::on_pushButton_SearchField_clicked()
{
    ui->oopsSearchFilter->hide();
}






void WindowMain::on_pushButton_tooManyEmp_clicked()
{
    ui->oopsTooManyEmp->hide();
}






void WindowMain::on_pushButton_tooManyTeams_clicked()
{
    ui->oopsTooManyTeams->hide();
}
