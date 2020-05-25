#include "../include/Menu.h"



void Menu::mainMenu()
{
    int userChoice = 0;
    bool quit = false;

    while (quit == false)
    {
        cout << "\nWelcome!\n\n"
        << "1. Add order\n"
        << "2. Close out\n"
        << "3. Print inventory\n"
        << "4. Print outstanding orders\n"
        << "5. Quit" << endl;
        cin >> userChoice;
        validateInput(userChoice, 5);

        switch (userChoice)
        {
        case 1 : warehouse.addOrder();
            break;
        case 2 : //warehouse.processOrders();
            break;
        case 3 : //warehouse.printInventory();
            break;
        case 4 : //warehouse.printOrders();
            break;    
        case 5 : quit = true;
            break;
        }  
    }
};