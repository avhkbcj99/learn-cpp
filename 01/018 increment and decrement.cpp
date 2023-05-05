/** 
 * Created by author on 2023/5/5 17:26
*/
#include "iostream"
using namespace std;

int main(){
    int a = 10;
    int b = 10;
    int c = 10;
    int d = 10;

    int e;
    int f;
    int g;
    int h;

    e = a++;
    f = ++b;
    g = c--;
    h = --d;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    cout << "e is a++ = " << e << endl;
    cout << "f is ++b = " << f << endl;
    cout << "g is c-- = " << g << endl;
    cout << "h is --d = " << h << endl;

    return 0;
}