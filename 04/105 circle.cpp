/** 
 * Created by author on 2023/5/15 17:43
*/

#include "105 circle.h"


void Circle::setR(int r) {
    this->m_r = r;
}

int Circle::getR() const {
    return this->m_r;
}

void Circle::setCenter(const Point &center) {
    this->m_center = center;
}

 Point Circle::getCenter() const {
    return this->m_center;
}
