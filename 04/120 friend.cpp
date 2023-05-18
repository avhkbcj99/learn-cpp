/** 
 * Created by author on 2023/5/18 14:49
*/

#include "iostream"

using namespace std;

class Building;

class GoodGay {
public:
    GoodGay();

    ~GoodGay();

    void visit1() const;

    void visit2() const;

    Building *building;
};

class Building {
    // GoodGay类是Building类的好朋友，可以访问Building类中的私有成员
    friend class GoodGay;

public:
    Building();

public:
    string m_SittingRoom;

private:
    string m_BedRoom;
};


Building::Building() {
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}


GoodGay::GoodGay() {
    building = new Building;
}

GoodGay::~GoodGay() {
    if (building != nullptr){
        delete building;
        building = nullptr;}
}

void GoodGay::visit1() const {
    cout << "visit1函数正在访问：" << building->m_SittingRoom << endl;
    cout << "visit1函数正在访问：" << building->m_BedRoom << endl;
}

void GoodGay::visit2() const {
    cout << "visit2函数正在访问：" << building->m_SittingRoom << endl;
    cout << "visit2函数正在访问：" << building->m_BedRoom << endl;
}

int main() {
    GoodGay gg;
    gg.visit1();
    gg.visit2();
    return 0;
}