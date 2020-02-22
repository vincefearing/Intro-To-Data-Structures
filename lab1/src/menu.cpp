#include <iostream>
#include <string>
#include "../include/menu.h"
#include "../include/items.h"
#include "../include/inventory.h"

using namespace std;

void Menu::validateFile(int userChoice) {
    if(!cin || (userChoice > 5 || userChoice < 1))
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
        cout << endl;
        cout << "Welcome! Please choose a number from the options below." << endl << endl;
        cout << "1. Print inventory" << endl;
        cout << "2. Sort inventory" << endl;
        cout << "3. Search for item" << endl;
        cout << "4. Print Report" << endl;
        cout << "5. Exit" << endl << endl;
        cin >> userChoice;

        //error checking menu choice
        validateFile(userChoice);

        switch(userChoice)
        {
            case 1 : inventory.printItems();
                break;
            case 2 : while(quit == false)
            {
                cout << "Sort by: " << endl;
                cout << "1. ID" << endl;
                cout << "2. Name" << endl;
                cout << "3. Quantity" << endl;
                cout << "4. Price" << endl;
                cout << "5. Main Menu" << endl;
                cin >> userChoice;

                //error checking menu choice
                validateFile(userChoice);

                switch(userChoice)
                {
                    case 1 : inventory.sortItems(userChoice);
                        break;
                    case 2 : inventory.sortItems(userChoice);
                        break;
                    case 3 : inventory.sortItems(userChoice);
                        break;
                    case 4 : inventory.sortItems(userChoice);
                        break;
                    case 5 : quit = true;
                        break;
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