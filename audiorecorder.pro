TEMPLATE = app
TARGET = audiorecorder

QT += multimedia

win32:INCLUDEPATH += $$PWD

HEADERS = \
    audiorecorder.h \
    qaudiolevel.h \
    mainwindow.h \
    qaudiowaveform.h

SOURCES = \
    main.cpp \
    audiorecorder.cpp \
    qaudiolevel.cpp \
    mainwindow.cpp \
    qaudiowaveform.cpp

FORMS += audiorecorder.ui \
    mainwindow.ui

target.path = $$[QT_INSTALL_EXAMPLES]/multimedia/audiorecorder
INSTALLS += target

QT+=widgets

RESOURCES += \
    resources.qrc
    
ICON = icons/microphone.icns
