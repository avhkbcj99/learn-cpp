/**
* Created by author on 2023/5/8 17:09
*/

/**
* 函数分文件写一般有4个步骤
 * 1. 创建后缀名为.h的头文件
 * 2. 创建后缀名为.cpp的源文件
 * 3. 在头文件中写函数的声明
 * 4. 在源文件中写函数的定义
 */
#include "iostream"
#include "055 swapp.cpp"

using namespace std;


int main() {
    int a = 10;
    int b = 20;
    cout << "************************" << endl;
    cout << "main" << endl;
    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;
    swapp(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap1(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap2(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}