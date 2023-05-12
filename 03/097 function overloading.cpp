/** 
 * Created by author on 2023/5/12 15:16
*/
#include "iostream"

using namespace std;

void func(int a, int b) {
    cout << "func(int a, int b)调用" << endl;
    cout << a << " " << b << endl;
}

void func(double a, double b) {
    cout << "func(double a, double b)调用" << endl;
    cout << a << " " << b << endl;
}

void func(int a, double b) {
    cout << "func(int a, double b)调用" << endl;
    cout << a << " " << b << endl;
}

void func(double a, int b) {
    cout << "func(double a, int b)调用" << endl;
    cout << a << " " << b << endl;
}

void func(int a, int b, int c) {
    cout << "func(int a, int b, int c)调用" << endl;
    cout << a << " " << b << " " << c << endl;
}

//// 函数重载也不要设置默认参数，因为默认参数会造成二义性。（编译器无法判断调用哪个函数）
//void func(int a){
//    cout << "func(int a)调用" << endl;
//    cout << a << endl;
//}
//
//void func(int a, int b = 20) {
//    cout << "func(double a, double b, double c)调用" << endl;
//    cout << a << " " << b << endl;
//}
//
//void run(){
//    // 产生了二义性，编译器无法判断调用哪个函数，会报错
//    func(10);
//}

int main() {
    func(10, 20);
    func(10.0, 20.0);
    return 0;
}