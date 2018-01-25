TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    vertex.cpp \
    halfedge.cpp \
    face.cpp \
    mesh.cpp

HEADERS += \
    vertex.h \
    halfedge.h \
    face.h \
    mesh.h
