#include "../include/menu.h"

void Menu::mainMenu()
{
    int userChoice = 0;
    bool quit = false;

    while (quit == false)
    {
        cout << "\nWelcome!\n\n"
        << "1. Add delivery\n"
        << "2. Add order\n"
        << "3. Quit" << endl;
        cin >> userChoice;
        validateInput(userChoice, 2);

        switch (userChoice)
        {
        case 1 : ;
            break;
        case 2 : //addOrder
            break;
        case 3 : quit = true;
            break;
        }  
    }
};

void Menu::validateInput(int userChoice, int menuLength)
{
    if(!cin || (userChoice > menuLength || userChoice < 1))
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "\nIncorrect input. Please choose a single digit corresponding to your desired menu item" << endl;
    }
}