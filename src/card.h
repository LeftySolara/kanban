/******************************************************************************
 * card.h : a kanban card
 * ****************************************************************************
 * Copyright (C) 2018 Jalen Adams
 *
 * Authors: Jalen Adams <leftysolara@gmail.com>
 *
 * This file is part of kanban.
 *
 * kanban is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * kanban is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with kanban.  If not, see <http://www.gnu.org/licenses/>.
 ***************************************************************************/

#ifndef CARD_H
#define CARD_H

#include <QFrame>
#include <QLabel>

namespace Ui {
class Card;
}

class Card : public QFrame
{
    Q_OBJECT

public:
    explicit Card(QWidget *parent = nullptr, QString title="", QString description="");
    ~Card();

private:
    Ui::Card *ui;

    QLabel *title;
    QLabel *description;
    QStringList *tags;
};

#endif // CARD_H
