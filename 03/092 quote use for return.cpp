/** 
 * Created by author on 2023/5/12 08:18
*/
#include "iostream"

using namespace std;

// 引用做函数的返回值, 不要返回局部变量的引用
// 否则当函数调用完成后，这个局部变量就被释放掉了，那么这个引用就是一个野引用
int &test1() {
    int c = 10;
    cout << &c << endl;
    return c;
}

int &test2() {
    // 静态变量的引用可以返回
    // 因为静态变量的生命周期是整个程序，当程序结束后才会被释放掉
    static int c = 10;
    cout << &c << endl;
    return c;
}

int main() {
    int a = 10;
    int b = 20;
    int &e = test1();
    cout << e << endl;
    // 第二次打印的值是不确定的，因为test1函数中的局部变量c已经被释放掉了
    cout << e << endl;
    cout << &e << endl;

    int &f = test2();
    cout << f << endl;
    // 第二次打印的值是确定的，因为test2函数中的局部变量c是静态变量，生命周期是整个程序
    cout << f << endl;
    cout << &f << endl;
    return 0;
}