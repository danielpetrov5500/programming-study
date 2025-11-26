#include "fileexplorer.h"
#include "./ui_fileexplorer.h"

FileExplorer::FileExplorer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FileExplorer)
{
    ui->setupUi(this);
}

FileExplorer::~FileExplorer()
{
    delete ui;
}
