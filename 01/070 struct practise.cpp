/** 
 * Created by author on 2023/5/10 16:45
*/
#include "iostream"

using namespace std;

struct Student {
    string name;
    int age;
    int score;
};

struct Teacher {
    string name;
    int age;
    struct Student stu[5];
};

void printTeacherAndStudent(Teacher arr[], int len){
    for (int i = 0; i < len; i++) {
        cout << "老师姓名：" << arr[i].name << " 年龄：" << arr[i].age << endl;
        int len_stu = sizeof(arr[i].stu) / sizeof(arr[i].stu[0]);
        for (int j = 0; j < len_stu; j++) {
            cout << "学生姓名：" << arr[i].stu[j].name << " 年龄：" << arr[i].stu[j].age << " 分数：" << arr[i].stu[j].score << endl;
        }
    }
}


int main() {
    Teacher arr[3];

    Teacher t1 = {
            "老王", 50,
            {{"张三", 18, 100},
             {"李四", 19, 90},
             {"王五", 20, 80},
             {"赵六", 21, 70},
             {"钱七", 22, 60}
            }
    };
    Teacher t2 = {
            "老李", 60,
            {{"张三", 18, 100},
             {"李四", 19, 90},
             {"王五", 20, 80},
             {"赵六", 21, 70},
             {"钱七", 22, 60}
            }
    };
    Teacher t3 = {
            "老张", 70,
            {{"张三", 18, 100},
             {"李四", 19, 90},
             {"王五", 20, 80},
             {"赵六", 21, 70},
             {"钱七", 22, 60}
            }
    };

    arr[0] = t1;
    arr[1] = t2;
    arr[2] = t3;

    printTeacherAndStudent(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}