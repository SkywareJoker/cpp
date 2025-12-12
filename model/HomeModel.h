#ifndef HOME_MODEL_H
#define HOME_MODEL_H

#include <iostream>
#include <string>

namespace HomeModel
{
    extern void saveData();
    
    extern void saveData(std::string key, std::string data);

    extern std::string readData(std::string key);

    extern void loadData();
}

#endif