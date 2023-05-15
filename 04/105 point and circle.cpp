/** 
 * Created by author on 2023/5/15 17:11
*/
#include "iostream"
#include "105 point.cpp"
#include "105 circle.cpp"

using namespace std;

// 为什么加了const修饰符之后，就不能调用setX()和setY()方法了呢？
// 因为const修饰的是this指针，this指针指向的是一个常量，所以不能调用非const修饰的方法

// 为什么加了const修饰之后，就不能调用circle了？
// 因为const修饰的是this指针，this指针指向的是一个常量，所以不能调用非const修饰的方法
//void isInCircle(const Circle &circle, const Point &point) {
//    Point center = circle.getCenter();
//    int distance = (center.getX() - point.getX()) * (center.getX() - point.getX()) +
//                   (center.getY() - point.getY()) * (center.getY() - point.getY());
//    int rDistance = circle.getR() * circle.getR();
//    if (distance < rDistance) {
//        cout << "点在圆内" << endl;
//    } else if (distance == rDistance) {
//        cout << "点在圆上" << endl;
//    } else {
//        cout << "点在圆外" << endl;
//    }
//}

void isInCircle(Circle &circle, Point &point) {
    Point center = circle.getCenter();
    int distance = (center.getX() - point.getX()) * (center.getX() - point.getX()) +
                   (center.getY() - point.getY()) * (center.getY() - point.getY());
    int rDistance = circle.getR() * circle.getR();
    if (distance < rDistance) {
        cout << "点在圆内" << endl;
    } else if (distance == rDistance) {
        cout << "点在圆上" << endl;
    } else {
        cout << "点在圆外" << endl;
    }
}

int main() {
    Point p1;
    p1.setX(10);
    p1.setY(10);

    Point p2;
    p2.setX(10);
    p2.setY(20);

    Circle c1;

    c1.setCenter(p1);
    c1.setR(10);
    isInCircle(c1, p2);
    return 0;
}