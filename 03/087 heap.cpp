/** 
 * Created by author on 2023/5/11 14:55
*/
#include "iostream"

using namespace std;

int *test(){
    // new int(10)返回的是一个地址，这个地址指向的是堆区中的一块内存空间
    // 这块内存空间中存储的是10这个值
    int *p1 =  new int(10);

    return p1;
}

int main(){
    int *p1 = test();
    cout << *p1 << endl;
    cout << *p1 << endl;
    // 如果想释放堆区中的数据，需要使用关键字delete
     delete p1;
     // 此时再访问p1指向的内存空间，就会出现问题
     cout << *p1 << endl;

    // 使用new创建长度为10的数组
    int *p2 = new int[10];
    p2[0] = 100;
    p2[1] = 200;

    cout << p2[0] << endl;
    cout << p2[1] << endl;
    cout << p2[2] << endl;

    // 释放数组，需要加上[]
    delete[] p2;
    // 再次访问
    cout << p2[0] << endl;

    return 0;
}