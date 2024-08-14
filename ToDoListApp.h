#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ToDoListApp.h"

class ToDoListApp : public QMainWindow
{
    Q_OBJECT

public:
    ToDoListApp(QWidget* parent = nullptr);
    ~ToDoListApp();

private slots:
    void on_addButton_clicked();
    void on_editButton_clicked();
    void on_deleteButton_clicked();

private:
    Ui::ToDoListAppClass* ui;  // Pointer to the UI class
};
