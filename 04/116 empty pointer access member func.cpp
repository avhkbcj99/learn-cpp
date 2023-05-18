/** 
 * Created by author on 2023/5/18 09:26
*/
// C++中，空指针也是可以调用成员函数的，但是要注意空指针中的this指针
// 如果成员函数中访问了this指针中的成员变量，就会发生空指针访问成员变量，程序崩溃
// 如果成员函数中没有访问this指针中的成员变量，就不会发生空指针访问成员变量，程序不会崩溃
// 如果用到了this指针，需要加以判断，以保证代码的健壮性

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

    void showClassName() {
        cout << "this指针的值为：" << this << endl;
        cout << "Person的类名为：Person" << endl;
    }

    void showAge() {
        // 如果this指针为空的话，访问不到成员变量，会报错
//        cout << "年龄为：" << this->m_age << endl;
        // 解决方法：加以判断
        if (this == nullptr) {
            cout << "传入的指针为空" << endl;
            return;
        }
        cout << "年龄为：" << this->m_age << endl;
    }

    int m_age;
};

void test1(){
    Person *p = NULL;
    p->showClassName();
    p->showAge();
}

int main(){
    test1();
    return 0;
}