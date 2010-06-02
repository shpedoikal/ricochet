/* TorIM - http://gitorious.org/torim
 * Copyright (C) 2010, John Brooks <special@dereferenced.net>
 *
 * TorIM is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with TorIM. If not, see http://www.gnu.org/licenses/
 */

#ifndef VIDALIATESTWIDGET_H
#define VIDALIATESTWIDGET_H

#include <QWidget>

class VidaliaConfigManager;

namespace TorConfig
{

class TorConnTestWidget;

class VidaliaTestWidget : public QWidget
{
    Q_OBJECT
    Q_DISABLE_COPY(VidaliaTestWidget)

public:
    explicit VidaliaTestWidget(VidaliaConfigManager *vidaliaConfig, QWidget *parent = 0);

    bool hasTestSucceeded() const;

public slots:
    void startTest();

signals:
    void stateChanged();

private slots:
    void testStateChanged();

private:
    VidaliaConfigManager * const vidaliaConfig;
    TorConnTestWidget *tester;
};

}

#endif // VIDALIATESTWIDGET_H