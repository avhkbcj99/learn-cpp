/** 
 * Created by author on 2023/5/5 09:13
*/
#include "iostream"
using namespace std;

int main(){
    float xx = 3.14f;
    double yy = 3.14;
//    int zz = 3;
    // 获取f是什么数据类型
    cout << "xx is " << xx << ", type is " << typeid(xx).name() << endl;
    cout << "yy is " << yy << ", type is " << typeid(yy).name() << endl;
//    cout << "zz is " << zz << ", type is " << typeid(zz).name() << endl;

    // 科学计数法
    float aa = 3e2;
    int bb = 3e2;
    cout << "aa is " << aa << ", type is " << typeid(aa).name() << endl;
    cout << "bb is " << bb << ", type is " << typeid(bb).name() << endl;

    // hello world
    cout << "hello world" << endl;
    return 0;
}