/** 
 * Created by author on 2023/5/9 18:31
*/
#include "iostream"
using namespace std;

void swapp(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;
}

int main(){
    int a = 10;
    int b = 20;
    swapp(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}