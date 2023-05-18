/** 
 * Created by author on 2023/5/17 09:46
*/
#include "iostream"

using namespace std;

class Person1 {
};

void test1() {
    // 空对象占用内存空间为：1个字节
    // C++编译器会给每个空对象也分配一个字节的空间，是为了区分空对象占内存的位置
    // 每个空对象也应该有一个独一无二的内存地址
    Person1 p1;
    cout << "p1占用内存空间为：" << sizeof(p1) << endl;
}


class Person2 {
public:
    // 非静态成员变量会分配内存
    int m_age;
};

void test2() {
    // 非空对象占用内存空间为：4个字节
    Person2 p2 = {};
    cout << "p2占用内存空间为：" << sizeof(p2) << endl;
}

class Person3 {
    // 非静态成员变量，属于类的对象上
    int m_age;
    // 静态成员变量，不属于类的对象上
    static int m_height;
    // 非静态成员函数，不属于类的对象上
    void run() {
        cout << "run()" << endl;
    }
    // 静态成员函数，不属于类的对象上
    static void eat() {
        cout << "eat()" << endl;
    }
};

int main() {
    test1();
    test2();
    return 0;
}