#include "appengine.h"

AppEngine::AppEngine()
{

}

void AppEngine::init()
{
    cout << "game init"<<endl;
}

void AppEngine::update(long delta, QPainter *painter)
{
    painter->save();

    painter->restore();
    //cout<<"my delta = "<<delta<<endl;
}

void AppEngine::destory()
{
    cout << "game destory"<<endl;
}
