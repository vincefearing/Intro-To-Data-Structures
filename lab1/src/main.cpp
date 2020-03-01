// Lab 1 Fearing, Vincent T
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "../include/inventory.h"
#include "../include/items.h"
#include "../include/menu.h"

using namespace std;

int  main() 
{
    Inventory inventory;
    Menu menu;

    inventory.importData();
    menu.mainMenu(inventory);

    return 0;
}