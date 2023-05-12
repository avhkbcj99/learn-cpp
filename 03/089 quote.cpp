/** 
 * Created by author on 2023/5/11 17:48
*/
#include "iostream"

using namespace std;

int main(){
    int a = 10;
    // 引用必须要初始化，不能直接int &b;这样写
    int &b = a;
//     引用的本质是指针常量，指针常量是指针指向不可以改变
//     也不能直接进行赋值，被引用的对象必须是一个变量，不能是常量
    // int *const p2 = &a;
    // p2 = &b; // 这样写是错误的
    // 但是指针常量指向的值可以改变
    b = 100;
    cout << a << endl;
    cout << b << endl;

    return 0;
}