#ifndef ROLE_DATA_H
#define ROLE_DATA_H

#include <iostream>
#include <string>
#include <filesystem>

namespace RoleData
{
    static const std::string path = "role.jy";

    extern std::string name;

    extern int life;
    extern int magic;
    extern int attack;
    extern int defense;
    extern int speed;
    extern int miss;
    extern int cruel;
    extern int suck;
}

#endif