#ifndef APPENGINE_H
#define APPENGINE_H

#include <iostream>
#include "xlobj.h"
#include "engine.h"
#include "xlstream.h"

using namespace std;

class AppEngine : public Engine
{
public:
    AppEngine();
    ~AppEngine();
public:
    void init() override;

    void update(long delta, QPainter *paint) override;

    void destory() override;
private:
    XLObj *mCube;
    XLStream *mRenderSteam;

protected:
    void iniCube();
};

#endif // APPENGINE_H
