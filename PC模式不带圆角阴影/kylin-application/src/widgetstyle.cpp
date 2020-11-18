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

#include "widgetstyle.h"

int WidgetStyle::themeColor = 0;

//在屏幕中央显示
WidgetStyle::WidgetStyle(QWidget *parent)
{
    // 初始化组件
    this->setWidgetUi();

    // 初始化样式
    this->setWidgetStyle();
}

//在屏幕中央显示
void WidgetStyle::handleIconClickedSub()
{
    QRect availableGeometry = qApp->primaryScreen()->availableGeometry();
    this->move((availableGeometry.width() - this->width())/2, (availableGeometry.height() - this->height())/2);
}

// 初始化组件
void WidgetStyle::setWidgetUi()
{

}

// 初始化样式
void WidgetStyle::setWidgetStyle()
{

}
