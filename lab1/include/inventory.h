#pragma once
#include <string>
#include <vector>
#include "items.h"

using namespace std;

class Inventory 
{
    private:
    vector <Items> list;
    vector <Items*> listPtrs;

    public:
    void printUnsorted();
    void importData();
    void printItems();
    void sortItems(int userChoice);
    void searchItems();
    void printReport();
};