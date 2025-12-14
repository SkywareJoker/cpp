#ifndef BAG_MODEL_H
#define BAG_MODEL_H

#include <iostream>
#include <string>
#include <map>

namespace BagModel
{
    extern std::map<int, std::string> record;
    
    extern std::string readBagCell(int cell);
}

#endif