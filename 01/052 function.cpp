/** 
 * Created by author on 2023/5/8 09:08
*/
#include "iostream"
using namespace std;
int max_a_b(int a, int b);

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main(){
    int a = 10;
    int b = 20;
    swap(a, b);
    cout << "max is " << max_a_b(a, b) << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}

int max_a_b(int a, int b){
    return a > b ? a : b;
}