#ifndef XLSTREAM_H
#define XLSTREAM_H

#include <vector>
#include "xlobj.h"

using namespace std;

class XLStream
{
private:
    real cam_x,cam_y,cam_z;
    real cam_angle_x,cam_angle_y,cam_angle_z;

    //使用默认  视距=1 视宽 PI / 2
    //real distance = 1;//

    vector<XLObj * > mRenderObjs;

protected:
    void model2WorldOr(XLObj *obj);//模型坐标->世界坐标
    void world2CamOr(XLObj *obj);//世界坐标->相机坐标
    void cam2PreOr(XLObj *obj);//相机坐标->透视坐标
    void per2ScrOr(XLObj *obj);//透视坐标->屏幕坐标

public:
    XLStream();

     void addRenderObj(XLObj *obj);

     void setCamPos(real x,real y,real z);
     void setCamAngle(real x,real y,real z);

    void renderStream();//渲染流水线
};

#endif // XLSTREAM_H
