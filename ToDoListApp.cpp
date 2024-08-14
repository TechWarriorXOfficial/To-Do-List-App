#include "ToDoListApp.h"

ToDoListApp::ToDoListApp(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::ToDoListAppClass)
{
    ui->setupUi(this);


    // Connect buttons to slots
    connect(ui->addButton, &QPushButton::clicked, this, &ToDoListApp::on_addButton_clicked);
    connect(ui->editButton, &QPushButton::clicked, this, &ToDoListApp::on_editButton_clicked);
    connect(ui->deleteButton, &QPushButton::clicked, this, &ToDoListApp::on_deleteButton_clicked);
}

ToDoListApp::~ToDoListApp()
{
    delete ui;  // Clean up the UI pointer
}

void ToDoListApp::on_addButton_clicked()
{
    QString task = ui->lineEdit->text();
    if (!task.isEmpty()) {
        ui->listWidget->addItem(task);
        ui->lineEdit->clear();
    }
}

void ToDoListApp::on_editButton_clicked()
{
    QListWidgetItem* selectedItem = ui->listWidget->currentItem();
    if (selectedItem) {
        QString task = ui->lineEdit->text();
        if (!task.isEmpty()) {
            selectedItem->setText(task);
            ui->lineEdit->clear();
        }
    }
}

void ToDoListApp::on_deleteButton_clicked()
{
    QListWidgetItem* selectedItem = ui->listWidget->currentItem();
    if (selectedItem)
    {
        delete selectedItem;  // Remove the selected item from the list
    }
    else
    {
        // Optional: Handle case where no item is selected
    }
}