/** 
 * Created by author on 2023/5/10 08:46
*/
#include "iostream"
using namespace std;

struct Student{
    string name;
    int age;
    int score;
};

int main(){
    // 1. 创建学生结构体变量
    struct Student s1;
    // 2. 给s1属性赋值
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;
    // 3. 通过指针指向结构体变量
    struct Student *p1 = &s1;
    // 4. 通过指针访问结构体变量中的数据
    cout << "姓名：" << (*p1).name << " 年龄：" << (*p1).age << " 分数：" << (*p1).score << endl;

    // 通过指针访问结构体变量中的数据的第二种方式
    cout << "姓名：" << p1->name << " 年龄：" << p1->age << " 分数：" << p1->score << endl;

    cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;

    struct Student p2 = s1;
    cout << "姓名：" << p2.name << " 年龄：" << p2.age << " 分数：" << p2.score << endl;

    p2.name = "李四";
    cout << "姓名：" << p2.name << " 年龄：" << p2.age << " 分数：" << p2.score << endl;

    struct Student s3 = {"王五", 20, 90};
    cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数：" << s3.score << endl;
    return 0;
}