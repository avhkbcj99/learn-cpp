/** 
 * Created by author on 2023/5/16 08:35
*/
#include "iostream"

using namespace std;


class Person {
public:
    // 无参构造函数
    Person() {
        cout << "Person的无参构造函数调用" << endl;
    }

    // 有参构造函数
    Person(int age) {
        cout << "Person的有参构造函数调用" << endl;
        m_age = age;
    }

    // 拷贝构造函数
    Person(const Person &p) {
        cout << "Person的拷贝构造函数调用" << endl;
        m_age = p.m_age;
    }

    // 析构函数
    ~Person() {
        cout << "Person的析构函数调用" << endl;
    }

    int m_age;
};

int main() {
//    Person p1;
//    Person p2(10);
//    Person p3(p2);
    Person p4 = Person(10);
    Person p5(10);
    Person p6 = Person(p5);
    // 下面这样写是错误的，因为p6已经存在了，不能再调用构造函数了
    // 不要利用拷贝构造函数初始化匿名对象，编译器会认为这是一个函数声明，不会认为是在创建一个匿名对象
    // Person(p6);

    // 隐式转换法
    Person p7 = 10; // 相当于Person p7 = Person(10);
    return 0;
}