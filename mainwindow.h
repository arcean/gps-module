#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <qmobilityglobal.h>
#include <QMainWindow>

QTM_BEGIN_NAMESPACE
class QGeoPositionInfo;
QTM_END_NAMESPACE


namespace Ui {
    class MainWindow;
}

QTM_USE_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void positionUpdated(const QGeoPositionInfo &info);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
