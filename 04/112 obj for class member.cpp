/** 
 * Created by author on 2023/5/16 16:38
*/
// 在程序运行过程中，析构执行的顺序与构造执行的顺序相反
#include "iostream"

using namespace std;

class Phone {
public:
    Phone() {
        cout << "Phone的无参构造函数调用" << endl;
    }

    Phone(const string model) {
        cout << "Phone的有参构造函数调用" << endl;
        m_model = model;
    }

    ~Phone() {
        cout << "Phone的析构函数调用" << endl;
    }

    string m_model;
};

class Person {
public:
    Person() : m_age() {
        cout << "Person的构造函数调用" << endl;
    }
    // string model 隐式转换，调用了Phone的构造函数，这里的model实际上是Phone的对象的model
    Person(int age, const string& model) : m_age(age), m_model(model) {
        cout << "Person的有参构造函数调用" << endl;
        m_age = age;
        m_model = model;
    }

    // 上面的写法等价于下面的写法
    Person(int age,  const Phone& phone) : m_age(age), m_model(phone.m_model) {
        cout << "Person的有参构造函数调用" << endl;
        m_age = age;
        m_model = phone.m_model;
    }

    Person(const Person &p) {
        cout << "Person的拷贝构造函数调用" << endl;
        m_age = p.m_age;
        m_model = p.m_model;
    }

    ~Person() {
        cout << "Person的析构函数调用" << endl;
    }

    int m_age;
    Phone m_model;
};

int main(){
    Phone phone("iPhone 12");
    Person p1(10, phone);
    cout << "p1.m_age " << p1.m_age << endl;
    cout << "p1.m_model " << p1.m_model.m_model << endl;
    /*
        Phone的构造函数调用
        Phone的构造函数调用
        Person的有参构造函数调用
        Phone的构造函数调用
        Phone的析构函数调用
        p1.m_age 10
        p1.m_model iPhone 12
        Person的析构函数调用
        Phone的析构函数调用
        Phone的析构函数调用
     */
    cout << "----------------" << endl;
//    Person p2(20, "iPhone 14 Pro Max");
//    cout << "p2.m_age " << p2.m_age << endl;
//    cout << "p2.m_model " << p2.m_model.m_model << endl;
    /*
        Phone的构造函数调用
        Person的有参构造函数调用
        Phone的构造函数调用
        Phone的析构函数调用
        p2.m_age 20
        p2.m_model iPhone 14 Pro Max
        Person的析构函数调用
        Phone的析构函数调用
     */
    return 0;
}