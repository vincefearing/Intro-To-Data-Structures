#include "../include/Address.h"
#include "../include/AddressBook.h"
#include "../include/Menu.h"
#include "../include/Node.h"
#include "../include/Record.h"
#include <iostream>
#include <string>

int main() {

    AddressBook adBook;
    adBook.importData();
    Menu menu;
    menu.mainMenu(adBook);
    return 0;
}