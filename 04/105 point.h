/** 
 * Created by author on 2023/5/15 17:29
*/
#pragma once

#include "iostream"

using namespace std;
#ifndef LEARN_CPP_105_POINT_H
#define LEARN_CPP_105_POINT_H

#endif //LEARN_CPP_105_POINT_H

class Point {
public:
    void setX(int x);

    int getX() const;

    void setY(int y);

    int getY() const;

private:
    int m_x;
    int m_y;
};