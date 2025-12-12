#include "HomeController.h"
#include "../main/Main.h"
#include "../model/HomeModel.h"
#include "../view/HomeView.h"
#include "../data/RoleData.h"
#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;

void BaseController::useViewShow()
{
    HomeView::show();

    HomeModel::saveData();

    int select;
    cin >> select;

    switch (select)
    {
    // 退出游戏
    case 0:
    {
        exit(0);

        break;
    }

    // 人物
    case 1:
    {
        BaseController::isShow = false;
        Main::currentView = "role";

        break;
    }

    // 存档
    case 7:
    {
        HomeModel::saveData();

        break;
    }

    // 读档
    case 8:
    {
        HomeModel::loadData();

        break;
    }
    }
}