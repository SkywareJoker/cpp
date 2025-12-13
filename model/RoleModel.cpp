#include "RoleModel.h"
#include "HomeModel.h"
#include <iostream>

using namespace std;

int RoleModel::upgradeExp()
{
    return (std::stoi(HomeModel::readData("grade")) + 1) * 100 * 2;
}

bool RoleModel::isUpgrade()
{
    bool result = false;

    int exp = stoi(HomeModel::readData("exp"));
    int need = RoleModel::upgradeExp();

    if (exp >= need)
    {
        exp -= need;
        HomeModel::saveData("exp", to_string(exp));

        int grade = stoi(HomeModel::readData("grade")) + 1;
        HomeModel::saveData("grade", to_string(grade));

        // 属性提升 life magic attack defense speed
        // 提升生命值
        int life = stoi(HomeModel::readData("life")) + 100;
        HomeModel::saveData("life", to_string(life));

        // 提升魔力值
        int magic = stoi(HomeModel::readData("magic")) + 10;
        HomeModel::saveData("magic", to_string(magic));

        // 提升攻击力
        int attack = stoi(HomeModel::readData("attack")) + 5;
        HomeModel::saveData("attack", to_string(attack));

        // 提升防御力
        int defense = stoi(HomeModel::readData("defense")) + 3;
        HomeModel::saveData("defense", to_string(defense));

        // 提升速度
        int speed = stoi(HomeModel::readData("speed")) + 2;
        HomeModel::saveData("speed", to_string(speed));

        result = true;
    }

    return result;
}