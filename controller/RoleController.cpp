#include "RoleController.h"
#include "../model/RoleModel.h"
#include "../view/RoleView.h"
#include "../main/Main.h"
#include <iostream>
#include <regex>

using namespace std;

void RoleController::useViewShow()
{
    RoleView::needExp = RoleModel::upgradeExp();

    RoleView::show();

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
    case 0:
    {
        RoleController::isShow = false;

        Main::currentView = "home";

        break;
    }

    case 1:
    {
        bool isUpgrade = RoleModel::isUpgrade();

        break;
    }

    case 999:
    {
        HomeModel::saveData("exp", "999999999");
        HomeModel::saveData("life", "99999");
        HomeModel::saveData("magic", "99999");
        HomeModel::saveData("attack", "99999");
        HomeModel::saveData("defense", "99999");
        HomeModel::saveData("speed", "99999");

        break;
    }
    }
}