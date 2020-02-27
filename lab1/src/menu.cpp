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
        cin.ignore(100, '\n');
        cout << "Incorrect input. Please choose a single digit corresponding to your desired menu item" << endl;
    }
}

void Menu::mainMenu(Inventory &inventory) {
    int userChoice = 0;
    bool quit = false;

    //Menu that allows user to search for specific item or print sorted/unsorted list of all items
    while(!quit) 
    {
        cout << "\nWelcome! Please choose a number from the options below. \n\n" <<
        "1. Print inventory \n" << 
        "2. Sort inventory \n" <<
        "3. Search for item \n" <<
        "4. Print Report \n" <<
        "5. Exit \n" << endl;
        cin >> userChoice;

        //error checking menu choice
        validateInput(userChoice, 5);

        switch(userChoice)
        {
            case 1 : inventory.printUnsorted(); //Print unsorted
                break;
            case 2 : inventory.sortItems();/*while(!quit) //Sort options
            {
            cout << "\nSort by: \n" <<
            "1. ID \n" <<
            "2. Name \n" <<
            "3. Quantity \n" <<
            "4. Price \n" <<
            "5. Main Menu \n" << endl;
            cin >> userChoice;

            //Error checking menu choice
            validateInput(userChoice, 5);
            inventory.sortItems(userChoice);
            inventory.printItems();
            if (userChoice == 5)
            {
                quit = true;
            }
            }
            quit = false; //Resetting main menu condition after exiting sub menu*/
                break;
            case 3 : while (!quit) //Search option
            {
                cout << "\n1. Search \n" <<
                "2. Main menu\n" << endl;
                cin >> userChoice;
                validateInput(userChoice, 2);
                switch(userChoice)
                {
                    case 1 : inventory.searchItems();
                        break;
                    case 2 : quit = true;
                }
            }
            quit = false;
                break;
            case 4 : inventory.printReport();
                break; 
            case 5 : quit = true;
        }
    }
};