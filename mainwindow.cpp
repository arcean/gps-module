#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gps_module.h"

#include <qgeopositioninfosource.h>

QTM_USE_NAMESPACE


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    gps_module *gps = new gps_module(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::positionUpdated(const QGeoPositionInfo &info)
{
    ui->gps_te->append(QString("Position updated: Date/time = %1, Coordinate = %2").arg(info.timestamp().toString()).arg(info.coordinate().toString()));
}
