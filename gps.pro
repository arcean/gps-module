#-------------------------------------------------
#
# Project created by QtCreator 2011-04-03T11:40:19
#
#-------------------------------------------------

QT       += core gui

TARGET = gps
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gps_module.cpp

HEADERS  += mainwindow.h \
    gps_module.h

FORMS    += mainwindow.ui

maemo5 {
  CONFIG += mobility11
} else {
  CONFIG += mobility
}


//PKGCONFIG += glib-2.0 liblocation hildon-1

MOBILITY = location

symbian {
    TARGET.UID3 = 0xebbca0c5
    # TARGET.CAPABILITY += 
    TARGET.EPOCSTACKSIZE = 0x14000
    TARGET.EPOCHEAPSIZE = 0x020000 0x800000
}
