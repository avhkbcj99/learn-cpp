/** 
 * Created by author on 2023/5/11 13:42
*/
#include "iostream"

using namespace std;

int c = 30;
int d = 40;

int main(){
    int a = 10;
    int b = 20;

//    cout << "局部变量a的地址为：" << (int)&a << endl;
//    cout << "局部变量b的地址为：" << (int)&b << endl;
//
//    cout << "局部变量a的地址为：" << dec << (int)&a << endl;
//    cout << "局部变量b的地址为：" << dec << (int)&b << endl;

    uintptr_t addr_a = reinterpret_cast<uintptr_t>(&a);
    uintptr_t addr_b = reinterpret_cast<uintptr_t>(&b);

    cout << "局部变量a的十进制地址为：   " << dec << addr_a << endl;
    cout << "局部变量b的十进制地址为：   " << dec << addr_b << endl;

    cout << "局部变量a的十六进制地址为： " << hex << addr_a << endl;
    cout << "局部变量b的十六进制地址为： " << hex << addr_b << endl;

    cout << "**********************************************" << endl;

    static int e = 50;
    static int f = 60;

    const int g = 70;
    const int h = 80;

    const string i = "hello";
    string const j = "world";

    cout << "局部变量a的地址为：         " << &a << endl;
    cout << "局部变量b的地址为：         " << &b << endl;
    cout << "全局变量c的地址为：         " << &c << endl;
    cout << "全局变量d的地址为：         " << &d << endl;
    cout << "静态变量e的地址为：         " << &e << endl;
    cout << "静态变量f的地址为：         " << &f << endl;
    cout << "常量g的地址为：             " << &g << endl;
    cout << "常量h的地址为：             " << &h << endl;
    cout << "常量i的地址为：             " << &i << endl;
    cout << "常量j的地址为：             " << &j << endl;

    return 0;
}