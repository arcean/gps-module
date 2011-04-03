#include "gps_module.h"
#include <qgeopositioninfosource.h>

gps_module::gps_module(QObject *parent)
{
    this->parent = parent;
    this->set_up();
}

void gps_module::set_up()
{
    QGeoPositionInfoSource *source = QGeoPositionInfoSource::createDefaultSource(parent);
    if (source) {
        connect(source, SIGNAL(positionUpdated(QGeoPositionInfo)),
                parent, SLOT(positionUpdated(QGeoPositionInfo)));
        source->startUpdates();
    }
}

gps_module::~gps_module()
{

}
