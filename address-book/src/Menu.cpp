#include "../include/Menu.h"
#include <iostream>
#include <string>

using namespace std;

void Menu::mainMenu(AddressBook & addressBook)
{
    int userChoice = 0;
    bool quit = false;

    while (quit == false)
    {
        cout << "Please choose a number from the list below \n\n"
        << "1. Print Items \n"
        << "2. Delete Item \n"
        << "3. Quit" << endl;
        cin >> userChoice;
        
        switch (userChoice)
        {
        case 1 : addressBook.printData();
            break;
        case 2 : addressBook.removeContact();
            break;
        case 3 : quit = true;
        }  
    }
};