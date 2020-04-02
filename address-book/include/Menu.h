#pragma once
#include <iostream>
#include <string>
#include "AddressBook.h"

using namespace std;

class Menu
{
    public:
    void mainMenu(AddressBook & addressBook);
    void addMenu(AddressBook & addressBook);
    void removeMenu(AddressBook & addressBook);
    void searchMenu(AddressBook & addressBook);
};