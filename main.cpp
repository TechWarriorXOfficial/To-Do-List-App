#include "ToDoListApp.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    ToDoListApp mainWindow;
    mainWindow.show();
    return app.exec();
}