#pragma once
#include <string>
#include "items.h"

using namespace std;

class Inventory 
{
    private:
    vector <Items> list;

    public:
    void importData();
    void printInventory();
    //void sortInventory();
};