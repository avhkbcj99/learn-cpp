/** 
 * Created by author on 2023/5/11 18:10
*/
#include <iostream>

using namespace std;

void func(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void func2(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a = 1;
    int b = 2;
//     引用就是指向变量的指针常量，引用的变量地址和被引用的变量的地址是一样的
//     引用的变量值和被引用的变量值是一样的
//     不加&符号就是变量的值，加了&符号就是变量的地址
    int &c = a;
    int &d = b;
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
    cout << &c << " " << &d << endl;
    func(c, d);
    cout << a << " " << b << endl;
    func2(&c, &d);
    cout << a << " " << b << endl;
    return 0;
}