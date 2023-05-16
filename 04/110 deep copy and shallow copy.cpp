/** 
 * Created by author on 2023/5/16 15:42
*/

#include "iostream"

using namespace std;

// 如果有堆区开辟的数据，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题
class Person {
public:
    Person() {
        cout << "Person的构造函数调用" << endl;
    }

    Person(int age, float height) {
        cout << "Person的有参构造函数调用" << endl;
        m_age = age;
        // 为指针手动开辟空间，分配内存
        m_height = new float(height);
    }

    // 通过自己实现拷贝构造函数，来解决浅拷贝带来的问题（释放同一块内存空间导致程序运行出错）
    Person(const Person &p) {
        cout << "Person的拷贝构造函数调用" << endl;
        m_age = p.m_age;
        // 编译器的默认实现拷贝的代码
        // m_height p.m_height;
        // 自己实现拷贝的代码
        m_height = new float(*p.m_height);
    }

    ~Person() {
        // 此时，析构函数的作用则得以体现，在对象释放时，同时手动释放堆区开辟的内存
        if (m_height != NULL) {
            delete m_height;
            // 将指针置空，防止野指针
            m_height = NULL;
        }
        cout << "Person的析构函数调用" << endl;
    }

    int m_age;
    float *m_height;
};

int main(){
    Person p1(18, 180);
    cout << "p1的年龄为：" << p1.m_age << "，身高为：" << *p1.m_height << endl;
    cout << "----------------" << endl;
    Person p2(p1);
    cout << "p2的年龄为：" << p2.m_age << "，身高为：" << *p2.m_height << endl;
    cout << "----------------" << endl;
    // 以上代码会出现问题，因为p1和p2的m_height指向同一块内存，并且该内存是通过new开辟的，new开辟的内存放在堆区
    // 当p1和p2的生命周期结束时，会调用析构函数，此时会释放堆区的内存，但是由于p1和p2的m_height指向同一块内存，所以会出现问题
    // 解决方法：通过自己实现拷贝构造函数（深拷贝），来解决浅拷贝带来的问题（释放同一块内存空间导致程序运行出错）
    Person p3 = Person(p1);
    cout << "p3的年龄为：" << p3.m_age << "，身高为：" << *p3.m_height << endl;
    cout << "----------------" << endl;
    return 0;
}