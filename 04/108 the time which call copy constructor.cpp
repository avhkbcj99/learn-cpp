/** 
 * Created by author on 2023/5/16 14:32
*/
#include "iostream"

using namespace std;

class Person {
public:
    Person() : m_age() {
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


void test1(const Person& p) {
    cout << "test1函数调用 " << endl;
}

void test2(Person p) {
    cout << "test2函数调用 " << endl;
}

Person test3() {
    cout << "test3函数调用 " << endl;
    Person p1;
    cout << "test3中的地址为：" << &p1 << endl;
    return p1;
}


int main(){
    // 输出结果：
    // Person的无参构造函数调用
    Person p1;
    cout << "----------------" << endl;
    // 输出结果：
    // test1函数调用
    test1(p1);
    cout << "----------------" << endl;
    // 输出结果：
    // Person的拷贝构造函数调用
    // test2函数调用
    // Person的析构函数调用
    test2(p1);
    cout << "----------------" << endl;
    // 输出结果：
    // test3函数调用
    // Person的无参构造函数调用
    Person p2 = test3();
    cout << "对象中的地址为：" << &p2 << endl;
    cout << "----------------" << endl;
    return 0;
}