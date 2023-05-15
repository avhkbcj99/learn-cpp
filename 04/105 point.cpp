/** 
 * Created by author on 2023/5/15 17:30
*/
#include "105 point.h"

void Point::setX(int x) {
    this->m_x = x;
}

void Point::setY(int y) {
    this->m_y = y;
}

int Point::getX() const {
    return this->m_x;
}

int Point::getY() const {
    return this->m_y;
}