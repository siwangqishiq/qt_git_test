#ifndef MAINWIN_H
#define MAINWIN_H

#include <iostream>
#include <QWidget>
#include <QOpenGLWidget>
#include <QSize>
#include <QTimer>
#include <QPaintEvent>
#include <QPainter>

#include "engine.h"
#include "appengine.h"

using namespace std;

#define SCREEN_WITDH  800
#define SCREEN_HEIGHT 480

class MainWin : public QOpenGLWidget
{
    Q_OBJECT

private :
    long elapsed = 0;
    Engine *engine = NULL;

public:
    MainWin(QWidget *parent = 0);
    ~MainWin();

public slots:
    void animate();

protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // MAINWIN_H
