#include "mainwin.h"

MainWin::MainWin(QWidget *parent)
    : QOpenGLWidget(parent)
{
    this->setFixedSize(QSize(SCREEN_WITDH,SCREEN_HEIGHT));//set window size

    engine = new AppEngine();

    if(engine){
        engine->init();
    }
    //cout<<"construct complete!"<<endl;
    QTimer *timer = new QTimer(this);
    this->connect(timer,&QTimer::timeout,this,&MainWin::animate);
    timer->start(10);
}

MainWin::~MainWin()
{
    if(engine){
        engine->destory();
    }

    if(engine){
        free(engine);
    }

}

void MainWin::animate()
{
    elapsed = (elapsed + qobject_cast<QTimer*>(sender())->interval()) % 1000;
    //cout<<"delta --->"<<elapsed<<endl;
    this->update();
}

void MainWin::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    painter.setRenderHint(QPainter::Antialiasing);

    if(engine){
        engine->update(elapsed,&painter);
    }
    painter.end();
}

