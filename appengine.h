#ifndef APPENGINE_H
#define APPENGINE_H

#include <iostream>
#include "engine.h"

using namespace std;

class AppEngine : public Engine
{
public:
    AppEngine();

public:
    void init() override;

    void update(long delta, QPainter *paint) override;

    void destory() override;


};

#endif // APPENGINE_H
