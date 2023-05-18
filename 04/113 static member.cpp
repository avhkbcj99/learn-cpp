/** 
 * Created by author on 2023/5/17 08:21
*/
#include "iostream"

using namespace std;
// 静态成员
// 静态成员就是在成员变量和成员函数前加上static关键字，称为静态成员
// 静态成员分为静态成员变量和静态成员函数
// 静态成员变量
// 1.所有对象共享同一份数据
// 2.编译阶段分配内存
// 3.类内声明，类外初始化
// 4.静态成员变量在类内声明，类外初始化时，不加static关键字
// 5.静态成员变量在类内声明时，必须初始化
// 6.静态成员变量可以通过类名访问
// 7.静态成员变量和静态成员函数都有访问权限
// 静态成员函数
// 1.静态成员函数只能访问静态成员变量
// 2.静态成员函数没有this指针
// 3.静态成员函数不能是虚函数
// 4.静态成员函数可以通过类名访问
// 5.静态成员函数和静态成员变量都有访问权限
// 6.静态成员函数可以访问非静态成员函数和非静态成员变量
// 7.非静态成员函数可以访问静态成员函数和静态成员变量

class Person {
public:
    // 静态成员变量
    // 1. 所有对象共享同一份数据
    // 2. 编译阶段分配内存
    // 3. 类内声明，类外初始化

    // 非静态成员变量只能通过对象去访问
    // 而静态成员函数是共享的，并不属于某一个具体的对象，因此无法准确的知道访问的是哪个对象的成员变量
    string m_name;

    static int m_age;

    // 静态成员函数
    static void func(int height) {
        // 静态成员函数没有this指针
        // cout << this->m_age << endl;
        // 静态成员函数只能访问静态成员变量
        // cout << m_height << endl;
        // 静态成员函数不能是虚函数
        // 静态成员函数可以通过类名访问
        cout << "func函数调用" << endl;
        m_height = height;
        // 静态成员函数不能访问非静态成员变量
//        cout << "name is " << m_name << endl;
        cout << "age is " << m_age << endl;
        cout << "height is " << m_height << endl;
    }

private:
    static int m_height;
};

// 下面会报错，因为没有初始化静态成员变量
void test1() {
//    Person p1;
    // cout << p1.m_age << endl;
}

// 初始化静态成员变量
int Person::m_age = 10;

// 下面则不会报错
void test2() {
    cout << "----------------" << endl;
    cout << "test2函数调用" << endl;
    Person p1;
    Person p2;
    // 共享同一份数据
    cout << p1.m_age << endl;
    cout << p2.m_age << endl;
    cout << Person::m_age << endl;
    Person::m_age = 20;
    cout << p1.m_age << endl;
    cout << p2.m_age << endl;
    cout << Person::m_age << endl;
}


void test3() {
    cout << "----------------" << endl;
    cout << "test3函数调用" << endl;
    Person p1;
    Person p2;
    // 静态成员变量不属于某个对象，所有对象都共享同一份数据，有两种访问方式
    // 1. 通过对象访问
    cout << p1.m_age << endl;
    cout << p2.m_age << endl;
    // 2. 通过类名访问
    cout << Person::m_age << endl;
    Person::m_age = 20;
    cout << Person::m_age << endl;
}

int Person::m_height = 20;

void test4() {
    cout << "----------------" << endl;
    cout << "test4函数调用" << endl;
    Person p1;
    // 以下两种方式访问私有静态成员变量都会报错
//    cout << p1.m_height << endl;
//    cout << Person::m_height << endl;
}

void test5() {
    cout << "----------------" << endl;
    cout << "test5函数调用" << endl;
    Person p1;
    // 静态成员函数可以通过类名访问
    Person::func(160);
    // 静态成员函数可以通过对象访问
    p1.func(170);
}


int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    return 0;
}