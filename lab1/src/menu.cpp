#include <iostream>
#include <string>
#include "../include/menu.h"
#include "../include/items.h"
#include "../include/inventory.h"

using namespace std;

void Menu::validateInput(int userChoice, int menuLength) {
    if(!cin || (userChoice > menuLength || userChoice < 1))
    {
        cin.clear();
        cin.ignore();
        cout << "Incorrect input. Please choose a single digit corresponding to your desired menu item" << endl;
    }
}

void Menu::mainMenu(Inventory &inventory) {
    int userChoice = 0;
    bool quit = false;

    //Menu that allows user to search for specific item or print sorted/unsorted list of all items
    while(quit == false) 
    {
        cout << "\n Welcome! Please choose a number from the options below. \n\n" <<
        "1. Print inventory \n" << 
        "2. Sort inventory \n" <<
        "3. Search for item \n" <<
        "4. Print Report \n" <<
        "5. Exit \n\n";
        cin >> userChoice;

        //error checking menu choice
        validateInput(userChoice, 5);

        switch(userChoice)
        {
            case 1 : inventory.printItems();
                break;
            case 2 : while(quit == false)
            {
                cout << "\n Sort by: \n" <<
                "1. ID \n" <<
                "2. Name \n" <<
                "3. Quantity \n" <<
                "4. Price \n" <<
                "5. Main Menu \n";
                cin >> userChoice;

                //error checking menu choice
                validateInput(userChoice, 5);
                inventory.sortItems(userChoice);
                inventory.printItems();
                if (userChoice == 5)
                {
                    quit = true;
                }
            }
            quit = false; //resetting main menu condition after exiting sub menu
                break;
            case 3 : //searchInventory(item, list);
                break;
            case 4 : //printReport
                break; 
            case 5 : quit = true;
        }
    }

    cout << "The program exited the menu loop" << endl;
};