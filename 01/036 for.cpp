/** 
 * Created by author on 2023/5/6 11:43
*/
#include "iostream"
using namespace std;

int main(){

    for (int a = 1; a < 100; a++){
        if (a % 10 == 7){
            cout << a << endl;
        } else if (a % 7 == 0){
            cout << a << endl;
        } else if (a / 10 == 7){
            cout << a << endl;
        }
    }

    // 打印九九乘法表
    for (int d=1; d < 10; d++){
        for (int e=1; e <= d; e++){
            cout << e << " * " << d << " = " << e * d << "\t";
        }
        cout << endl;
    }
    return 0;
}