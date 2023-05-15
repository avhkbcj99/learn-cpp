/** 
 * Created by author on 2023/5/12 17:56
*/
#include "iostream"

using namespace std;

class Student {
public:
    string s_Name;
    int s_Age;
    int s_Number;
    double s_Score;

    void setStudentInfo(string name, int age, int number, double score) {
        this->s_Name = name;
        this->s_Age = age;
        this->s_Number = number;
        this->s_Score = score;
    }

    void getStudentInfo() const {
        cout << "姓名：" << s_Name << "，年龄：" << s_Age << "，学号：" << s_Number << "，分数：" << s_Score << endl;
    }

    void setScore1(double score) {
        s_Score = score;
    }

//    void setScore2(double s_Score) {
////        如果在C++类中的成员函数的形参和类成员属性同名，会导致形参覆盖了成员属性，
////        从而在函数中无法直接访问该成员属性，这可能会导致程序逻辑错误。
//        s_Score = s_Score;
//    }
};

int main() {
    Student s1 = {};
    s1.setStudentInfo("张三", 18, 1001, 99.5);
    s1.getStudentInfo();
    cout << "------------------" << endl;
    s1.setScore1(100);
    s1.getStudentInfo();
    s1.setStudentInfo("张三", 18, 1001, 99.5);

//    不会修改成员属性
//    s1.setScore2(90);
//    s1.getStudentInfo();
    return 0;
}