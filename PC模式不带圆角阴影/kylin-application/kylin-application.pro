
QT += core gui widgets network dbus

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# 将以下的kylin-application进行自行替换
# 项目名
TARGET = kylin-application

# 添加.so库
#LIBS += /usr/lib/libtag.so
#LIBS += /usr/lib/libtag_c.so

# 适配窗口管理器圆角阴影
#QT += KWindowSystem x11extras
#LIBS +=-lpthread
#LIBS +=-lX11 -lXrandr -lXinerama -lXi -lXcursor

# 添加.h库文件
#INCLUDEPATH += ./taglib

# 执行文件装载
target.path = /usr/bin
target.source += $$TARGET

# 应用图标装载
#icon.path = /usr/share/pixmaps
#icon.files = img/kylin-application.png

# desktop文件装载
desktop.path = /usr/share/applications/
desktop.files = kylin-application.desktop

# gsetting文件装载
#schemes.files = data/org.kylin-application-data.gschema.xml
#schemes.path = /usr/share/glib-2.0/schemas/

# 安装
INSTALLS += target  \
            icon    \
            desktop \
            schemes

DEFINES += QT_DEPRECATED_WARNINGS

# 配置gsettings
CONFIG += link_pkgconfig
PKGCONFIG += gsettings-qt

SOURCES +=                  \
    src/main.cpp            \
    src/mainwindow.cpp      \
    src/daemonipcdbus.cpp   \
    src/widgetstyle.cpp

HEADERS +=                  \
    src/mainwindow.h        \
    src/daemonipcdbus.h     \
    src/widgetstyle.h

# 图片资源路径
RESOURCES += \
    image.qrc

# desktop文件
DISTFILES += \
    kylin-application.desktop
