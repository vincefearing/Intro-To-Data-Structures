#ifndef Menu_h
#define Menu_h
#include <iostream>
#include <string>
#include "Warehouse.h"

using namespace std;

class Menu
{
    private:
    Warehouse warehouse; 
    public:
    void mainMenu();
    void validateInput(int userChoice, int menuLength);
    void deliveryMenu();
};

#endif