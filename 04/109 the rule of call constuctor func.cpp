/** 
 * Created by author on 2023/5/16 15:28
*/
/*
 * 默认情况下，C++编译器至少给一个类添加3个函数
 *   1.默认构造函数（无参，函数体为空）
 *   2.默认析构函数（无参，函数体为空）
 *   3.默认拷贝构造函数，对属性进行值拷贝
 *
 *   构造函数调用规则如下：
 *   1. 如果用户定义有参构造函数，C++不再提供默认无参构造，但是会提供默认拷贝构造
 *   2. 如果用户定义拷贝构造函数，C++不会再提供其他构造函数
 */

#include "iostream"

using namespace std;

class Person {

public:
    Person() {
        cout << "Person的无参构造函数调用" << endl;
    }

    Person(int age) {
        cout << "Person的有参构造函数调用" << endl;
        m_age = age;
    }

    Person(const Person &p) {
        cout << "Person的拷贝构造函数调用" << endl;
        m_age = p.m_age;
    }

    ~Person() {
        cout << "Person的析构函数调用" << endl;
    }

    int m_age;
};

int main(){
    Person p1;
    // 如果用户定义有参构造函数，C++不再提供默认无参构造，但是会提供默认拷贝构造
    Person p2(10);
    // 如果用户定义拷贝构造函数，C++不会再提供其他构造函数
    Person p3(p2);
    return 0;
}