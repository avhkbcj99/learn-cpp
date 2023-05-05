/** 
 * Created by author on 2023/5/5 18:19
*/
#include "iostream"

using namespace std;

int main() {
    int a;
    int b;
//    int c;

    cout << "Please input a: ";
    cin >> a;
    cout << "Please input b: ";
    cin >> b;

    int c = (a > b ? a : b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}