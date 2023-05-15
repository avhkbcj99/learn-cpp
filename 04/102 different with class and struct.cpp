/** 
 * Created by author on 2023/5/12 18:38
*/

#include "iostream"

using namespace std;

class Person1 {
    int age;
public:
    string name;
};

struct Person2 {
    int age;
    string name;
};

int main() {
    Person1 p1;
    Person2 p2;

    p1.name = "张三";
    // 下面这样写是错误的，因为class中，成员属性默认是private
    // p1.age = 10;

    p2.name = "李四";
    // 下面这样写是正确的，因为struct中，成员属性默认是public
    p2.age = 10;
    return 0;
}