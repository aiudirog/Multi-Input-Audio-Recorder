#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QAudioRecorder>
#include <QScrollArea>
#include <QVBoxLayout>
#include "audiorecorder.h"

namespace Ui { class MainWindow; }

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionAddRow_triggered();

private:
    Ui::MainWindow *ui;
    QList<AudioRecorder*> recorders;
    QScrollArea *scrollArea;
    QVBoxLayout *mainLayout;
    QWidget *scrollAreaContents;
    QVBoxLayout *scrollAreaLayout;
};

#endif // MAINWINDOW_H
