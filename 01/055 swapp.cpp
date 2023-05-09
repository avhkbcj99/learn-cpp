/** 
 * Created by author on 2023/5/8 17:54
*/
#include "iostream"
#include "055 swapp.h"
using namespace std;


void swapp(int &c, int &d){
    cout << "************************" << endl;
    cout << "swapp" << endl;
    // 这里接受的是a和b的地址，即0x008和0x004，他们指向的值分别是10和20
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    // 这里的temp是一个新的变量，它的地址是0x00a，它的值是10
    int temp = c;
    // 下面将a的值改为b的值，即将a的值改为20，此时a的地址还是0x008，但是它的值变成了20
    c = d;
    // 下面将b的值改为temp的值，即将b的值改为10，此时b的地址还是0x004，但是它的值变成了10
    d = temp;
}

void swap1(int c, int d){
    cout << "************************" << endl;
    cout << "swap1" << endl;
    cout << "&c = " << &c << endl;
    cout << "&d = " << &d << endl;

    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    int temp = c;
    c = d;
    d = temp;
}

void swap2(int &c, int &d){
    cout << "************************" << endl;
    cout << "swap2" << endl;

    cout << "&c = " << &c << endl;
    cout << "&d = " << &d << endl;

    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    int temp = c;
    c = d;
    d = temp;
}