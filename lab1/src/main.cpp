// Lab 1 Fearing, Vincent T TH
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "../include/inventory.h"
#include "../include/functions.h"
#include "../include/items.h"
#include "../include/menu.h"

using namespace std;

int  main() 
{
    Inventory inventory;
    inventory.importData();
    Menu menu;

    menu.mainMenu(inventory);
    

    return 0;
}