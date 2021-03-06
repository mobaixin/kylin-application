/*
 * Copyright (C) 2020, KylinSoft Co., Ltd.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QFont>
#include <QLabel>
#include <QWidget>
#include <QListWidget>
#include <QStackedWidget>
#include <QRegExp>
#include <QTime>
#include <QVector>

#include "daemonipcdbus.h"
#include "widgetstyle.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // 初始化组件
    void setWidgetUi();

    // 初始化样式
    void setWidgetStyle();

    // 切换深色模式
    void changeDarkTheme();

    // 切换浅色模式
    void changeLightTheme();

public slots:

    // 键盘响应事件
    void keyPressEvent(QKeyEvent *event);

private:

    // 整体界面widget
    QWidget *mainWid;

    // QGSettings
    QGSettings *gSettings = nullptr;

    // 用户手册功能
    DaemonIpcDbus *mDaemonIpcDbus;

    // 整体界面布局
    QVBoxLayout *mainLayout;


};
#endif // MAINWINDOW_H
