#ifndef GPS_MODULE_H
#define GPS_MODULE_H

#include <qmobilityglobal.h>
#include <qgeopositioninfosource.h>

QTM_USE_NAMESPACE


class gps_module : public QObject
{
public:
    gps_module(QObject *parent);
    ~gps_module();

private:
    QGeoPositionInfoSource *source;
    QObject *parent;

    void set_up();
};

#endif // GPS_MODULE_H
