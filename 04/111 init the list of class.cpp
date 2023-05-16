/** 
 * Created by author on 2023/5/16 16:22
*/

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
};

int main(){

    return 0;
}