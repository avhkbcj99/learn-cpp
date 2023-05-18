/** 
 * Created by author on 2023/5/18 15:41
*/
#include "iostream"

using namespace std;

class Person1 {
public:
    static Person1 PersonAdd(Person1 &p1, Person1 &p2) {
        Person1 temp = {};
        temp.m_A = p1.m_A + p2.m_A;
        temp.m_B = p2.m_A + p2.m_B;
        return temp;
    }

    Person1 PersonAdd(Person1 &p) const {
        Person1 temp = {};
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }

    void showPerson() const {
        cout << "show Person m_A = " << m_A << endl;
        cout << "show Person m_B = " << m_B << endl;
    }

    int m_A;
    int m_B;
};

class Person2 {
public:
    Person2 operator+(Person2 &p) const {
        Person2 temp = {};
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }

    void showPerson() const {
        cout << "show Person m_A = " << m_A << endl;
        cout << "show Person m_B = " << m_B << endl;
    }

    int m_A;
    int m_B;
};


void test1() {
    Person1 p1 = {};
    Person1 p2 = {};

    p1.m_A = 10;
    p1.m_B = 10;
    p2.m_A = 10;
    p2.m_B = 10;

    Person1 p3 = Person1::PersonAdd(p1, p2);
    cout << "p3.m_A = " << p3.m_A << endl;
    cout << "p3.m_B = " << p3.m_B << endl;
    p3.showPerson();
}

void test2() {
    Person1 p1 = {};
    Person1 p2 = {};

    p1.m_A = 10;
    p1.m_B = 10;
    p2.m_A = 10;
    p2.m_B = 10;

    Person1 p4 = p1.PersonAdd(p2);
    cout << "p4.m_A = " << p4.m_A << endl;
    cout << "p4.m_B = " << p4.m_B << endl;
    p4.showPerson();
}

void test3() {
    Person2 p1 = {};
    Person2 p2 = {};

    p1.m_A = 10;
    p1.m_B = 10;
    p2.m_A = 10;
    p2.m_B = 10;

    Person2 p5 = p1 + p2;
    cout << "p5.m_A = " << p5.m_A << endl;
    cout << "p5.m_B = " << p5.m_B << endl;
    p5.showPerson();
}

int main() {
    test1();
    test2();
    test3();
    return 0;
}