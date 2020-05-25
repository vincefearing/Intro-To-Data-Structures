#ifndef Menu_h
#define Menu_h

#include <iostream>
#include <string>
#include "Order.h"
#include "PriorityQueue.h"
#include "Warehouse.h"

using namespace std;

class Menu
{
    private:
    Warehouse warehouse;
    public:
    void mainMenu();

};

#endif