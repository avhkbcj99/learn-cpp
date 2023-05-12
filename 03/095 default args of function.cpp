/** 
 * Created by author on 2023/5/12 08:52
*/
#include "iostream"

using namespace std;

// 函数的声明和实现只能有一个有默认参数
// 函数声明
int f1(int a, int b = 10, int c = 20);

// 函数实现
//int f1(int a, int b = 10, int c = 20) {
//    return a + b + c;
//}

int f1(int a, int b, int c) {
    return a + b + c;
}


int main() {
    cout << f1(10, 20, 30) << endl;
    return 0;
}