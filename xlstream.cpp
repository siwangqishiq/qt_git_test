#include "xlstream.h"

#include <iostream>

XLStream::XLStream(){
}

void XLStream::addRenderObj(XLObj *obj){
    this->mRenderObjs.push_back(obj);
}

void  XLStream::setCamPos(real x, real y, real z){
    this->cam_x = x;
    this->cam_y = y;
    this->cam_z = z;
}

void  XLStream::setCamAngle(real x, real y, real z){
    this->cam_angle_x = x;
    this->cam_angle_y = y;
    this->cam_angle_z = z;
}

void XLStream::renderStream() const{
    if(mRenderObjs.empty())
        return;

    for(auto beg = mRenderObjs.begin();beg!=mRenderObjs.end();++beg){
        XLObj *obj = (XLObj *)(*beg);

        model2WorldOr(obj);
        world2CamOr(obj);
        cam2PreOr(obj);
        per2ScrOr(obj);
    }//end for
}

//模型坐标->世界坐标
void XLStream::model2WorldOr(const XLObj *obj) const{
    //cout<<"mode->world"<<endl;
    if(!obj)
        return;


}


//世界坐标->相机坐标
void XLStream::world2CamOr(const XLObj *obj) const{
    //cout<<"world->camera"<<endl;
    if(!obj)
        return;
}

//相机坐标->透视坐标
void XLStream::cam2PreOr(const XLObj *obj) const{
     // cout<<"camera->perspective"<<endl;
    if(!obj)
        return;
}

//透视坐标->屏幕坐标
void XLStream::per2ScrOr(const XLObj *obj) const{
     //cout<<"perspective->screen"<<endl;
    if(!obj)
        return;
}


