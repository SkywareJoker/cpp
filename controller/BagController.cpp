#include "BagController.h"
#include "../main/Main.h"
#include <iostream>
#include <string>
#include <regex>

using namespace std;

void BagController::useViewShow()
{
    BagView::show();

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
        BagController::isShow = false;

        Main::currentView = "home";

        break;
    }
    }
}