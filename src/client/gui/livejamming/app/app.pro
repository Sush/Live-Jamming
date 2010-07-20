# -------------------------------------------------
# Project created by QtCreator 2010-03-18T13:38:22
# -------------------------------------------------
include(../livejamming.pri)
RESOURCES = app.qrc
TARGET = livejamming_client
DESTDIR = ..
TEMPLATE = app
# FOR GUI
SOURCES += mainwindow.cpp \
    accountconnection.cpp \
    configuration_dialog.cpp \
    roomdialog.cpp \
    proxy.cpp \
    channellist.cpp \
    conversationset.cpp \
    roomplayeritem.cpp \
    channelsearch.cpp
HEADERS += mainwindow.h \
    accountconnection.h \
    configuration_dialog.h \
    roomdialog.h \
    proxy.h \
    channellist.h \
    conversationset.h \
    roomplayeritem.h \
    channelsearch.h

# OTHER
DEPENDPATH += ../../../../core
INCLUDEPATH += ../../../../core/include
SOURCES += Manager.cpp \
    Session.cpp \
    Bind_recv.cpp \
    Request.cpp \
    PacketQueue.cpp \
    Packet.cpp \
    Packet_v1.cpp \
    Packet_v1_Session.cpp \
    Packet_v1_Channel.cpp \
    Packet_v1_Friend.cpp \
    Packet_v1_Room.cpp \
    Packet_v1_Jam.cpp \
    Packet_v1_UserInfo.cpp \
    Channel.cpp \
    Room.cpp \
    Jam.cpp \
    Tools.cpp \
    Time.cpp \
    IComponent.cpp
HEADERS += Session.h \
    Manager.h \
    Packet.h \
    Packet_v1.h \
    PacketQueue.h \
    Bind_recv.h \
    Packet_v1_Session.h \
    Packet_v1_Channel.h \
    Packet_v1_Friend.h
#PIERRE
SOURCES += audioengine.cpp
HEADERS += audioengine.h
#!PIERRE
DEPENDPATH += ../../../../client
INCLUDEPATH += ../../../../client/include
SOURCES += main_net.cpp \
    Client.cpp \
    ClientManager.cpp \
    Component_Session.cpp \
    Component_Friend.cpp \
    Component_Channel.cpp \
    Component_Room.cpp \
    Component_Jam.cpp \
    Component_UserInfo.cpp
HEADERS += Client.h \
    ClientManager.h \
    Component_Session.h \
    Component_Friend.h \
    Component_Channel.h \
    Component_Room.h \
    Component_Jam.h
INCLUDEPATH += ../../../../include/boost
HEADERS += threadpool.hpp
INCLUDEPATH += ../../../../server/include
HEADERS += Config.h
INCLUDEPATH += ../../../../include
HEADERS += Protocol.h
LIBS += -lboost_system \
    -lboost_thread-mt \
    -lboost_program_options \
    -lyaml-cpp \
    -L../../../../libs \
    -L/usr/share/qt4/lib
FORMS += mainwindow.ui \
    accountconnection.ui \
    configuration_dialog.ui \
    roomdialog.ui \
    newchan.ui \
    chanlist.ui \
    conversationset.ui \
    roomplayeritem.ui
DEFINES += _GUI
CONFIG += link_pkgconfig
PKGCONFIG += portaudiocpp
debug:QMAKE_CXXFLAGS += -D_DEBUG \
    -g3 \
    -pg
else:QMAKE_CXXFLAGS += -D_NDEBUG
unix:# Provide relative path from application to fftreal library
:
QMAKE_LFLAGS += -Wl,--rpath=\\\$\$ORIGIN
