/** 
 * Created by author on 2023/5/9 17:31
*/
#include "iostream"
using namespace std;

int test(){
    int a = 10;
    int b = 20;
    int c = 30;
    // 常量指针
    const int *p1 = &a;

    // 指针常量
    int *const p2 = &a;

    // 修饰类型，常量指针，地址可改，值不可改。 // 常量值
    p1 = &b;
    // *p1 = 100; // error

    // 修饰变量，指针常量，地址不改，值可以改  // 址常量
    *p2 = 100;
    // p2 = &c; // error

    return 0;
}

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    // 指针常量
    int *const p1 = &a;
    *p1 = 100;

    // 常量指针
    const int *p2 = &b;
    p2 = &c;
    cout << "p2 = " << p2 << endl;
    return 0;
}
