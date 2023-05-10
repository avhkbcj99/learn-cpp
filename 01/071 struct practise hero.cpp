/** 
 * Created by author on 2023/5/10 16:57
*/
#include "iostream"

using namespace std;

struct Hero {
    string name;
    int age;
    string sex;
};

int main() {
    Hero h1 = {"张三", 28, "男"};
    Hero h2 = {"李四", 39, "男"};
    Hero h3 = {"王五", 10, "男"};
    Hero h4 = {"赵六", 21, "男"};
    Hero h5 = {"钱七", 42, "男"};

    Hero arrHero[5] = {h1, h2, h3, h4, h5};
    int len = sizeof(arrHero) / sizeof(arrHero[0]);
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 2; j++) {
            if (arrHero[j].age > arrHero[j + 1].age) {
                Hero h6 = arrHero[j + 1];
                arrHero[j + 1] = arrHero[j];
                arrHero[j] = h6;
            }
        }
    }

    for (int i = 0; i < len; i++) {
        cout << arrHero[i].name << "\t" << arrHero[i].age << "\t" << arrHero[i].sex << endl;
    }

    return 0;
}