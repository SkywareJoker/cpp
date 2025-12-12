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
    }
}