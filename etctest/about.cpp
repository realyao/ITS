#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    QPixmap pixmap("C:/Users/59236/Documents/ManagerGUI/About.png");
    ui->label_About->setPixmap(pixmap);
    ui->label_About->show();
}

About::~About()
{
    delete ui;
}
