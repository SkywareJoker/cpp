#include "Main.h"
#include "../data/RoleData.h"
#include "../controller/BaseController.h"
#include "../controller/HomeController.h"
#include "../controller/RoleController.h"
#include <map>
#include <string>
#include <memory>
#include <cstdio>
#include <iostream>
#include <filesystem>

using namespace std;

string Main::currentView = "home";

map<string, unique_ptr<BaseController>> controllerMap;

int main()
{
    system("chcp 65001");
    _wsystem(L"title 文字修仙");
    system("mode con cols=52 lines=20");

    // 删除掉之前的数据
    std::filesystem::remove(RoleData::path);

    controllerMap["home"] = make_unique<HomeController>();
    controllerMap["home"]->isShow = true;

    controllerMap["role"] = make_unique<RoleController>();

    while (true)
    {
        // 设置场景了
        if (!controllerMap[Main::currentView]->isShow)
        {
            controllerMap[Main::currentView]->isShow = true;
        }

        // 判断显示哪一个show页面
        map<string, unique_ptr<BaseController>>::iterator it;
        for (it = controllerMap.begin(); it != controllerMap.end(); it++)
        {
            BaseController *bcPtr = it->second.get();
            if (bcPtr->isShow)
            {
                // 判断是不是对应的场景 如果不是取消掉isShow
                bcPtr->useViewShow();
            }
        }
    }

    return 0;
}