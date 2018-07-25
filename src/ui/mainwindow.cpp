/******************************************************************************
 * mainwindow.cpp : functions for managing the main application window
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


#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QCoreApplication::setOrganizationName("Jalen Adams");
    QCoreApplication::setApplicationName("kanban");
    QCoreApplication::setOrganizationDomain("jalenkadams.me");

    ui->setupUi(this);

    card = new Card(this, "Hello world!", "This is a sample card");
    card2 = new Card(this, "Another sample", "The quick brown fox jumps over the lazy dog");

    cards = ui->cardLayout;
    cards->addWidget(card);
    cards->addWidget(card2);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete card;
    delete card2;
    delete cards;
}

void MainWindow::on_actionQuit_triggered()
{
    QApplication::exit();
}

void MainWindow::on_actionAboutQt_triggered()
{
    QApplication::aboutQt();
}
