/** 
 * Created by author on 2023/5/18 10:16
*/
// 常函数：
// 成员函数后加const后我们称为这个函数为常函数
// 常函数内不可以修改成员属性
// 成员属性声明时加关键字mutable后，在常函数中依然可以修改
// 常对象：
// 声明对象前加const称该对象为常对象
// 常对象只能调用常函数
// 常对象的成员属性不可以修改，加mutable后可以修改
// 常对象必须初始化，因为常对象的属性也必须初始化
// 常引用：
// 用const修饰的引用
// 常引用主要用来修饰形参，防止误操作
// 常引用指向的对象，不可以通过常引用修改对象
// 常指针：
// 用const修饰的指针
// 常指针指向的地址不可以修改

// this的本质是一个指针常量，指针的指向不可以修改
// this指针指向不可以修改，但是this指针指向的值可以修改

#include "iostream"

using namespace std;

class Person {
public:
    // Person *const this
    void showAge() {
        m_age = 18;
        this->m_height = 180;
        cout << "m_age = " << m_age << endl;
    }

    // const Person *const this
    // 函数后面的const表示常函数，修饰的是this指针的指向，让指针指向的值也不可以修改
    // 这个const就相当于在Person *const this前面加了const
    void showHeight() const {
        // 常函数内不可以修改成员属性
        // m_height = 100;
        cout << "m_height = " << m_height << endl;
    }

    void setName(const string &name) const {
        // 成员属性声明时加关键字mutable后，在常函数中依然可以修改
        this->m_name = name;
    }

    void showName() const {
        cout << "m_name = " << this->m_name << endl;
    }

    int m_age;
    int m_height;
    // 常函数内可以修改mutable修饰的成员属性
    mutable string m_name;
};

void test01() {
    Person p1;
    p1.showAge();
    p1.showHeight();
    p1.setName("Curry");
    p1.showName();
    cout << "-----------------" << endl;
}


void test02() {
    // 常对象
    const Person p2 = {}; // 常对象必须初始化，因为常对象的属性也必须初始化
    // 常对象只能调用常函数
    p2.showHeight();
    // p2.showAge(); // 报错

    // 常对象的成员属性不可以修改
    // p.m_height = 100;
    // 常对象的成员属性加mutable后可以修改
    p2.setName("Kobe");
    p2.showName();
    // 常对象必须初始化，因为常对象的属性也必须初始化
    cout << "-----------------" << endl;
}

int main() {
    test01();
    test02();
    return 0;
}