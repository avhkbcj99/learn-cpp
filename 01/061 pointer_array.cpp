/** 
 * Created by author on 2023/5/9 17:59
*/
#include "iostream"
using namespace std;

int main(){
    double arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double *p = arr;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    // 因为指针的类型和指针指向的数据类型是相关的，比如：double类型的指针只能指向double类型的数据
    // 所以在移动指针的时候，会根据指针的类型，加上对应的数据类型的字节数
    // 比如double类型的指针的大小是8个字节，那么double类型的指针+1，就会加上8个字节
    cout << "p + 1 = " << p + 1 << endl;
    cout << "*(p + 1) = " << *(p + 1) << endl;
    return 0;
}