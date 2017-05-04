#ifndef ENGINE_H
#define ENGINE_H

#include <QPainter>
#include <QPaintEvent>

class Engine
{
public:
    Engine();

    virtual void init() = 0;

    virtual void update(long delta, QPainter *painter) = 0;

    virtual void destory() = 0;
};

#endif // ENGINE_H
