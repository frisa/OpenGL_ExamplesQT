#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_BombermanWindow.h"

class BombermanWindow : public QMainWindow
{
	Q_OBJECT

public:
	BombermanWindow(QWidget *parent = Q_NULLPTR);

private:
	Ui::BombermanWindowClass ui;
};
