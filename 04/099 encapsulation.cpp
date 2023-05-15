/** 
 * Created by author on 2023/5/12 17:39
*/
#include "iostream"
#define PI 3.14
using namespace std;

class Circle {
public:
    double m_r;
    double calculateZC() const {
        return 2 * PI * m_r;
    }
    // const修饰返回值，表示常函数，相当于是只读函数，常函数不可以修改成员属性
    double calculateMJ() const {
        // 经过const修饰后，不能修改成员属性
        // m_r = 20;
        return PI * m_r * m_r;
    }
};

int main(){
    Circle c1 = {};
    c1.m_r = 1;
    cout << "圆的周长为：" << c1.calculateZC() << endl;
    cout << "圆的面积为：" << c1.calculateMJ() << endl;
    return 0;
}