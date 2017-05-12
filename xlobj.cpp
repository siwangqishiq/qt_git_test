#include "xlobj.h"

XLObj::XLObj(vector<Point3D> vs)
{
    this->mMVertex = vs;
    this->mRVertex = mMVertex;
}

void XLObj::addVertex(const Point3D p){
    this->mMVertex.push_back(p);
}

void XLObj::addLine(int startIndex,int endIndex){
    this->mModeLines.push_back(make_pair(startIndex,endIndex));
}


