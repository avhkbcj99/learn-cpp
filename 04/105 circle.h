/** 
 * Created by author on 2023/5/15 17:42
*/
#ifndef LEARN_CPP_105_CIRCLE_H
#define LEARN_CPP_105_CIRCLE_H

#endif //LEARN_CPP_105_CIRCLE_H

#include "105 point.h"

class Circle {
public:
    void setR(int r);

    int getR() const;

    void setCenter(const Point &center);

    Point getCenter() const;

private:
    int m_r;
    Point m_center;
};