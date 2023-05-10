/** 
 * Created by author on 2023/5/10 16:11
*/
#include "iostream"
using namespace std;

struct Student{
    string name;
    int age;
    int score;
};

void printStudent1(struct Student *s){
    cout << "姓名：" << s->name << " 年龄：" << s->age << " 分数：" << s->score << endl;
    (*s).name = "李四";
}

void printStudent2(struct Student s){
    cout << "姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;
    s.name = "李四";
}

void printStudent3(struct Student *s){
    cout << "姓名：" << s->name << " 年龄：" << s->age << " 分数：" << s->score << endl;
    s->name = "孙七";
}

void printStudent4(const struct Student *s){
    cout << "姓名：" << s->name << " 年龄：" << s->age << " 分数：" << s->score << endl;
//    s->name = "孙七";  // error: assignment of member ‘Student::name’ in read-only object
}


int main(){
    struct Student s1 = {"张三", 18, 100};
    struct Student s2 = {"王五", 20, 90};
    struct Student s3 = {"赵六", 22, 80};
    struct Student s4 = {"钱八", 24, 70};
    struct Student s5 = {"周九", 24, 70};

    const Student *p1 = &s5;
    p1 = &s4;
//    p1->name = "周九";  // error: assignment of read-only location ‘p1->Student::name’

    Student *const p2 = &s5;
    p2->name = "周九九";
//    p2 = &s4;  // error: assignment of read-only variable ‘p2’

    printStudent1(&s1);
    cout << "after printStudent1 " << endl;
    cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;
    cout << "**************************" << endl;
    printStudent2(s2);
    cout << "after printStudent2 " << endl;
    cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;
    cout << "**************************" << endl;
    printStudent3(&s3);
    cout << "after printStudent3 " << endl;
    cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数：" << s3.score << endl;
    cout << "**************************" << endl;
    printStudent4(&s4);
    cout << "after printStudent4 " << endl;
    cout << "姓名：" << s4.name << " 年龄：" << s4.age << " 分数：" << s4.score << endl;
    return 0;
}
