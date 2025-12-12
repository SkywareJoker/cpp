#include "HomeController.h"
#include "../main/Main.h"
#include "../model/HomeModel.h"
#include "../view/HomeView.h"
#include "../data/RoleData.h"
#include <iostream>
#include <fstream>
#include <filesystem>
#include <regex>

using namespace std;

void BaseController::useViewShow()
{
    HomeView::show();

    HomeModel::saveData();

    string select;
    getline(cin, select);

    regex numRegex("^-?\\d+(\\.\\d+)?$");
    if (!regex_match(select, numRegex))
    {
        return;
    }

    int result = stoi(select);
    switch (result)
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