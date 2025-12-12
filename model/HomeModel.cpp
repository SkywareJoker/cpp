#include "HomeModel.h"
#include "../main/json.hpp"
#include "../data/RoleData.h"
#include <string>
#include <fstream>
#include <iostream>
#include <filesystem>

using namespace std;
using json = nlohmann::json;

void writeData(ofstream &output, json j)
{
    output;
    output.open(RoleData::path);
    output << j;
    output.close();
}

void writeOnlyData(string key, json &j, int oldRoleData)
{
    j[key] = to_string(stoi(j[key].get<string>()) + oldRoleData);
}

string readAllData()
{
    string read;

    ifstream inFile(RoleData::path);
    string line;
    while (getline(inFile, line))
    {
        read += line;
    }
    inFile.close();

    return read;
}

string HomeModel::readData(string key)
{
    json j = json::parse(readAllData());

    return j[key];
}

void HomeModel::saveData()
{
    ofstream outFile;

    // 判断之前是否有数据
    if (!filesystem::exists(RoleData::path))
    {
        outFile.open(RoleData::path, ios::out);

        outFile << "{\"name\": \"无名氏\", \"life\": \"100\", \"magic\": \"0\", \"attack\": \"10\", \"defense\": \"5\", \"speed\": \"3\", \"miss\": \"0\", \"cruel\": \"0\", \"suck\": \"0\", \"grade\": \"0\", \"exp\": \"0\"}";
        outFile.close();

        return;
    }
    else
    {
        json j = json::parse(readAllData());

        writeOnlyData("life", j, RoleData::life);
        writeOnlyData("magic", j, RoleData::magic);
        writeOnlyData("attack", j, RoleData::attack);
        writeOnlyData("defense", j, RoleData::defense);
        writeOnlyData("speed", j, RoleData::speed);
        writeOnlyData("miss", j, RoleData::miss);
        writeOnlyData("cruel", j, RoleData::cruel);
        writeOnlyData("suck", j, RoleData::suck);

        writeData(outFile, j);
    }
}

void HomeModel::saveData(string key, string data)
{
    json j = json::parse(readAllData());
    j[key] = data;

    ofstream output;
    writeData(output, j);
}

void HomeModel::loadData()
{
}