#include "RoleController.h"
#include "../view/RoleView.h"
#include "../main/Main.h"
#include "iostream"

using namespace std;

void RoleController::useViewShow()
{
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