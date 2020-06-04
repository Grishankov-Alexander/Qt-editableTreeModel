#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QModelIndex>

#include <ui_mainwindow.h>

class MainWindow : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

public slots:
    void updateActions();

private slots:
    void insertChild();
    bool insertColumn();
    void insertRow();
    bool removeColumn();
    void removeRow();
};

#endif // MAINWINDOW_H
