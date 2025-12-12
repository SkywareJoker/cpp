#include "RoleView.h"
#include "../model/HomeModel.h"
#include <cstdio>
#include <iomanip>
#include <iostream>

using namespace std;

void RoleView::show() {
    system("cls");

    cout << "——————————人物属性——————————" << endl;
    cout << "姓名：" << HomeModel::readData("name") << endl;
    cout << "生命：" << HomeModel::readData("life") << endl;
    cout << "法力：" << HomeModel::readData("magic") << endl;
    cout << "攻击：" << HomeModel::readData("attack") << endl;
    cout << "防御：" << HomeModel::readData("defense") << endl;
    cout << "速度：" << HomeModel::readData("speed") << endl;
    cout << "闪避：" << HomeModel::readData("miss") << endl;
    cout << "暴击：" << HomeModel::readData("cruel") << endl;
    cout << "吸血：" << HomeModel::readData("suck") << endl << endl;
    cout << "0：关闭 | 1：升级(经验 0/100)" << endl << endl << "请输入你的选择：";
}