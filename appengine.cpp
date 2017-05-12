#include "appengine.h"
#include "mainwin.h"
#include <QPoint>
#include <memory>
#include "xlobj.h"
#include "xlstream.h"

AppEngine::AppEngine(){

}

void AppEngine::init()
{
    cout << "game init"<<endl;

    iniCube();

    mRenderSteam = new XLStream();
    mRenderSteam->addRenderObj(mCube);
}

void AppEngine::iniCube(){
    vector<Point3D> vertex = {  { 1,  1,  1},
                                                { 1,  1, -1},
                                                {-1,  1, -1},
                                                {-1,  1,   1},
                                                { 1,  -1,  1},
                                                { 1,  -1, -1},
                                                {-1,  -1, -1},
                                                {-1,  -1,  1},};

    this->mCube = new XLObj(vertex);

    mCube->addLine(0,1);
    mCube->addLine(1,2);
    mCube->addLine(2,3);
    mCube->addLine(3,0);

    mCube->addLine(4,5);
    mCube->addLine(5,6);
    mCube->addLine(6,7);
    mCube->addLine(7,4);

    mCube->addLine(0,4);
    mCube->addLine(1,5);
    mCube->addLine(2,6);
    mCube->addLine(3,7);
}

void AppEngine::update(long delta, QPainter *painter)
{

    mRenderSteam->renderStream();

    QRectF bgRect(0,0,SCREEN_WITDH,SCREEN_HEIGHT);
    painter->fillRect(bgRect,Qt::white);

    painter->save();

    //QPen pen(Qt::white, 10);
    //painter->setPen(pen);
    //QBush bush();

    //painter->drawRect(bgRect);




    painter->restore();
    //cout<<"my delta = "<<delta<<endl;
}

void AppEngine::destory()
{
    if(mCube){
        delete mCube;
        mCube = nullptr;
    }
    cout << "game destory"<<endl;
}
