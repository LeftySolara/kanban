/******************************************************************************
 * card.cpp : a kanban card
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

#include "card.h"
#include "ui_card.h"

Card::Card(QWidget *parent, QString title, QString desctiption) :
    QFrame(parent),
    ui(new Ui::Card)
{
    ui->setupUi(this);

    this->title = ui->title;
    this->description = ui->description;
    this->tags = new QStringList;

    this->title->setText(title);
    this->description->setText(desctiption);
}

Card::~Card()
{
    delete ui;
    delete tags;
    delete title;
    delete description;
}
