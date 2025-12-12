#include "RoleController.h"
#include "../model/RoleModel.h"
#include "../view/RoleView.h"
#include "../main/Main.h"
#include "iostream"

using namespace std;

void RoleController::useViewShow()
{
    RoleView::needExp = RoleModel::upgradeExp();

    RoleView::show();

    int select;
    cin >> select;

    switch (select)
    {
    case 0:
    {
        RoleController::isShow = false;

        Main::currentView = "home";

        break;
    }
    }
}