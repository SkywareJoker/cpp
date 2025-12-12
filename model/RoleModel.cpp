#include "RoleModel.h"

int RoleModel::upgradeExp()
{
    return (std::stoi(HomeModel::readData("grade")) + 1) * 100 * 2;
}