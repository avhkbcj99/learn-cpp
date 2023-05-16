/** 
 * Created by author on 2023/5/15 18:19
*/

#include "iostream"

using namespace std;

class Person {
public:
    Person() {
        cout << "Person的构造函数调用" << endl;
    }

    ~Person() {
        cout << "Person的析构函数调用" << endl;
    }
};

int main(){
    Person p1;
//    p1.Person();
    return 0;
}