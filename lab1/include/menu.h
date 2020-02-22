#pragma once
#include "inventory.h"
#include "items.h"

using namespace std;

class Menu {
    public:
    void mainMenu(Inventory &inventory);
    void validateFile(int userChoice);
    //void sortMenu();
    //void searchMenu();
};