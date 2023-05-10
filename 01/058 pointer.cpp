/** 
 * Created by author on 2023/5/9 13:35
*/
#include "iostream"

using namespace std;

int main() {
    // 空指针
    // 这里的p2是一个指针变量，它的值是一个地址，这个地址是一个随机的地址，这个地址里面存放的是一个随机的值
    int *p2;
    cout << "p2 = " << p2 << endl;
    cout << "*p2 = " << *p2 << endl;

    // 这里的p3是一个空指针，它的值是0，它指向的地址是一个非法的地址，因此访问的时候会报错
    int *p3 =NULL;
    // 可以查看p3的地址，它的值是0，即NULL
    cout << "p3 = " << p3 << endl; // 0x0

    //    // 下面这行代码会报错，因为p3指向的地址是非法的，因此不能访问，不能被修改
    //    *p3 = 200;    cout << "p3 = " << p3 << endl;
    //    // 下面这行代码会报错，因为p3指向的地址是非法的，因此不能访问，不能被修改
    //    cout << "*p3 = " << *p3 << endl;

    // 野指针，在程序中，指针本来指向的地址被释放了，但是指针变量没有及时修改，导致指针变量指向了非法的地址，这个指针就是野指针
    // 或者，指向了一块没有访问权限的内存空间，这个指针也是野指针
    // 在程序中，尽量避免出现野指针
    int * p4 = (int*)0x1ff7bc2af460;
    cout << "*p4 = " << *p4 << endl;
    cout << "Hello World!" << endl;
    return 0;
}