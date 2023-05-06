/** 
 * Created by author on 2023/5/6 10:16
*/
#include "iostream"

using namespace std;

int main() {
    int num;
    int guess = 90;
    while (true) {
        cout << "please input a number: " << endl;
        cin >> num;
        if (num > guess) {
            cout << "too big" << endl;
        } else if (num < guess) {
            cout << "too small" << endl;
        } else {
            cout << "bingo" << endl;
            break;
        }
    };
    do {
        num++;
        cout << num << endl;
    } while (num < 90);

    // 水仙花数
    int a = 100;

    while (a < 1000) {

        int ge = a % 10;
//        cout << "ge = " << ge << endl;

        int shi = a / 10 % 10;
//        cout << "shi = " << shi << endl;

        int bai = a / 100;
//        cout << "bai = " << bai << endl;

        if (ge * ge * ge + shi * shi * shi + bai * bai * bai == a)
            cout << "水仙花数是 " << a << endl;
        a++;
    }

    cout << 234 % 100 / 10 << endl;
    return 0;
}