#ifndef XLOBJ_H
#define XLOBJ_H

#include <vector>

using namespace  std;

typedef float real;

struct Vect3{
    real x;
    real y;
    real z;
};

typedef struct Vect3 Point3D;

class XLObj
{
public:
    XLObj(vector<Point3D> vs);

    vector<Point3D> mMVertex;//模型坐标
    vector<Point3D> mRVertex;
private:
    vector<pair<int,int>> mModeLines;//线框
    Point3D mPos;//位置

public:
    void addVertex(const Point3D p);
    void addLine(const int startIndex,const int endIndex);

    void setPos(real pos_x,real pos_y,real pos_z){
        mPos.x = pos_x;
        mPos.y = pos_y;
        mPos.z = pos_z;
    }

    Point3D getPos(){
        return mPos;
    }
};//end class

#endif // XLOBJ_H
