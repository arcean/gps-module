#include "gps.h"

class GPS
{
public:
    GPS(QWidget *parent) :
            QMainWindow(parent),
    {
        QGeoPositionInfoSource *source = QGeoPositionInfoSource::createDefaultSource(this);
        if (source) {
            connect(source, SIGNAL(positionUpdated(QGeoPositionInfo)),
                    this, SLOT(positionUpdated(QGeoPositionInfo)));
            source->startUpdates();
        }
    }

    void positionUpdated(const QGeoPositionInfo &info)
    {
        qDebug() << "Position updated:" << info;
    }
};
