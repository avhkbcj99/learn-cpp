/** 
 * Created by author on 2023/5/12 18:17
*/
#include "iostream"

using namespace std;

// 访问权限
// 公共权限 public       成员 类内可以访问 类外可以访问
// 保护权限 protected    成员 类内可以访问 类外不可以访问
// 私有权限 private      成员 类内可以访问 类外不可以访问

// protected和private的区别
// 1. 子类中可以访问父类中protected成员变量，但是不能访问父类中的private成员变量

// struct和class的区别
// struct默认权限是公共的，class默认权限是私有的

class Person {
public:
    string m_name;
protected:
    string m_car;
private:
    string m_password;
public:
    void func() {
        cout << "姓名：" << m_name << " 车辆：" << m_car << " 密码：" << m_password << endl;
    }
protected:
    void setCar(const string& car) {
        this->m_car = car;
    }
    void driveCar() {
        cout << m_name << "开着" << m_car << "出去浪" << endl;
    }
private:
    void setPassword(const string& password) {
        this->m_password = password;
    }
};

int main(){
    Person father;
    // 公共属性，类外可以访问，还可以修改
    father.m_name = "张三";
    father.func();
    cout << "----------------------------------" << endl;
    father.m_name = "张sir";
    father.func();
    // father.m_car = "奔驰"; // 保护权限，类外不可以访问
    // father.m_password = "123456"; // 私有权限，类外不可以访问

    return 0;
}