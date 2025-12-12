#include "HomeView.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void HomeView::show()
{
     system("chcp 65001");
     _wsystem(L"title 文字修仙");
     system("mode con cols=52 lines=20");

     system("cls");

     cout << "—————————— 天域修仙传 ——————————" << endl
          << endl;
     cout << setw(32) << "1、人物" << endl;
     cout << setw(32) << "2、背包" << endl;
     cout << setw(32) << "3、商店" << endl;
     cout << setw(32) << "4、装备" << endl;
     cout << setw(32) << "5、技能" << endl
          << endl;
     cout << setw(32) << "6、战斗" << endl;
     cout << setw(32) << "7、存档" << endl;
     cout << setw(32) << "8、回档" << endl;
     cout << setw(32) << "0、退出" << endl
          << endl;
     cout << "请输入你的选择：";
}