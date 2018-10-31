TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    classes_abstratas.cpp \
    screen.cpp \
    reta.cpp \
    retangulo.cpp \
    circulo.cpp

HEADERS += \
    classes_abstratas.h \
    screen.h \
    reta.h \
    figurageometrica.h \
    retangulo.h \
    circulo.h
