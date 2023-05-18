/** 
 * Created by author on 2023/5/18 08:53
*/
// this指针是隐含每一个非静态成员函数内的一种指针
// this指针不需要定义，直接使用即可
// this指针的用途：
// 1.当形参和成员变量同名时，可用this指针来区分
// 2.在类的非静态成员函数中返回对象本身，可使用return *this
// 3.在类的非静态成员函数中，访问当前对象的成员变量
// 4.在类的非静态成员函数中，访问当前对象的成员函数
// 5.在类的静态成员函数中，不能使用this指针
// 6.在类的常量成员函数中，不能使用this指针
// 7.在类的构造函数和析构函数中，不能使用this指针
// 8.在类的友元函数中，不能使用this指针
// 9.在全局函数中，不能使用this指针
// 10.在类的静态成员函数中，不能使用this指针
// 11.在类的常量成员函数中，不能使用this指针

#include "iostream"

using namespace std;

class Person {
public:
    Person() {
        cout << "Person的构造函数调用" << endl;
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

    // 1.当形参和成员变量同名时，可用this指针来区分
    Person &operator=(Person &p) {
        this->m_age = p.m_age;
        return *this;
    }

    // 2.在类的非静态成员函数中返回对象本身，可使用return *this
    Person &addAge(int age) {
        this->m_age += age;
        return *this;
    }

    // 3.在类的非静态成员函数中，访问当前对象的成员变量
    void showPerson() const {
        cout << "m_age is " << this->m_age << endl;
    }

    // 4.在类的非静态成员函数中，访问当前对象的成员函数
    void func() const {
        this->showPerson();
    }

    // 5.在类的静态成员函数中，不能使用this指针
    static void func2() {
        // cout << "m_age is " << this->m_age << endl;
    }

    // 6.在类的常量成员函数中，不能使用this指针
    void func3() const {
        // cout << "m_age is " << this->m_age << endl;
    }

    // 7.在类的构造函数和析构函数中，不能使用this指针
    // 8.在类的友元函数中，不能使用this指针
    // 9.在全局函数中，不能使用this指针
    // 10.在类的静态成员函数中，不能使用this指针
};

int main(){
    Person p1;
    Person p2(10);
    Person p3(p2);
    p1 = p2;
    p1.showPerson();
    p1.addAge(10).addAge(10).addAge(10);
    p1.showPerson();
    p1.func();
    return 0;
}