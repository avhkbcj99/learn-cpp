/** 
 * Created by author on 2023/5/11 08:31
*/
#include "iostream"

#define MAX 4
using namespace std;


struct UserInfo {
    string name;
    int age;
    string phone;
};

struct UserAddress {
    struct UserInfo userInfo[MAX];
    int count = 0;
};

void showMenu() {
    cout << "1. 添加联系人" << endl;
    cout << "2. 显示联系人" << endl;
    cout << "3. 删除联系人" << endl;
    cout << "4. 查找联系人" << endl;
    cout << "5. 修改联系人" << endl;
    cout << "6. 清空联系人" << endl;
    cout << "0. 退出通讯录" << endl;
    cout << "请选择功能：" << endl;
}

void showUserAddress(UserAddress *userAddress) {
    if (userAddress->count == 0) {
        cout << "通讯录为空" << endl;
        return;
    }
    for (int i = 0; i < userAddress->count; i++) {
        cout << "姓名：" << userAddress->userInfo[i].name << " 年龄：" << userAddress->userInfo[i].age << " 电话："
             << userAddress->userInfo[i].phone << endl;
    }
}

void addUser(UserAddress *arr) {
    int count = arr->count;
    cout << "count = " << count << endl;
    if (count == MAX) {
        cout << "通讯录已满，无法添加" << endl;
        return;
    }
    cout << "请输入姓名：" << endl;
    cin >> arr->userInfo[count].name;
    cout << "请输入年龄：" << endl;
    cin >> arr->userInfo[count].age;
    cout << "请输入电话：" << endl;
    cin >> arr->userInfo[count].phone;
    arr->count++;
    cout << "添加成功" << endl;
}

int getUserIndex(UserAddress *arr) {
    int index = -1;

    if (arr->count == 0) {
        cout << "通讯录为空" << endl;
        return index;
    }
    cout << "请输入联系人姓名：" << endl;
    string name;
    cin >> name;
    for (int i = 0; i < arr->count; i++) {
        if (arr->userInfo[i].name == name) {
            index = i;
            break;
        }
    }
    return index;
}

void findUser(UserAddress *arr) {
    int index = getUserIndex(arr);
    if (index == -1) {
        cout << "查无此人" << endl;
        return;
    }
    cout << "姓名：" << arr->userInfo[index].name << " 年龄：" << arr->userInfo[index].age << " 电话："
         << arr->userInfo[index].phone << endl;
}

void delUser(UserAddress *arr) {
    int index = getUserIndex(arr);
    if (index == -1) {
        cout << "查无此人" << endl;
        return;
    }

    for (int i = index; i < arr->count; i++) {
        if (i == MAX) {
            arr->userInfo[i].name = "";
            arr->userInfo[i].age = 0;
            arr->userInfo[i].phone = "";
            break;
        }
        arr->userInfo[i] = arr->userInfo[i + 1];
    }
    arr->count--;
}

void updateUser(UserAddress *arr) {
    int index = getUserIndex(arr);
    if (index == -1) {
        cout << "查无此人" << endl;
        return;
    }
    cout << "请输入姓名：" << endl;
    cin >> arr->userInfo[index].name;
    cout << "请输入年龄：" << endl;
    cin >> arr->userInfo[index].age;
    cout << "请输入电话：" << endl;
    cin >> arr->userInfo[index].phone;
    cout << "修改成功" << endl;
}

void flushUser(UserAddress *arr) {
    UserAddress userAddressArray;
    *arr = userAddressArray;
}

int main() {
    UserAddress userAddressArray;
    while (true) {
        showMenu();
        int select = 0;
        cin >> select;
        switch (select) {
            case 1:
                addUser(&userAddressArray);
                break;
            case 2:
                showUserAddress(&userAddressArray);
                break;
            case 3:
                delUser(&userAddressArray);
                break;
            case 4:
                findUser(&userAddressArray);
                break;
            case 5:
                updateUser(&userAddressArray);
                break;
            case 6:
                flushUser(&userAddressArray);
                break;
            case 0:
                cout << "欢迎再次使用" << endl;
                return 0;
            default:
                cout << "输入有误，请重新输入" << endl;
                break;
        }
    }
    return 0;
}