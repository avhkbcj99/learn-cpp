/** 
 * Created by author on 2023/5/5 09:36
*/
#include "iostream"
using namespace std;

int main(){
    // 1. char只能存放一个字符，超过一个字符就会报错
    // 2. char只能使用单引号，不能使用双引号
    // 3. char类型变量实际存储的是该字符对应的ASCII码
    char ch1 = 'a';
    char ch2 = 'A';
    cout << "ch1 is " << ch1 << ", type is " << typeid(ch1).name() << endl;
    cout << "ch2 is " << ch2 << ", type is " << typeid(ch2).name() << endl;
    cout << int(ch1) << endl;
    cout << int(ch2) << endl;

    string str = "hello world";
    cout << "str is " << str << ", type is " << typeid(str).name() << endl;
    // str is hello world, type is NSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE

    cout << "hello world" << endl;
    return 0;
}