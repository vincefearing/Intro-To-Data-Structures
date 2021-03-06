#pragma once
#include "inventory.h"
#include "items.h"

using namespace std;

class Menu {
    public:
    void mainMenu(Inventory &inventory);
    void sortMenu(Inventory &inventory);
    void searchMenu(Inventory &inventory);
    void validateInput(int userChoice, int menuLength);
};