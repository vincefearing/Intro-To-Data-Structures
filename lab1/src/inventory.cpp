#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cctype>
#include "../include/inventory.h"
#include "../include/items.h"
#include <iomanip>
#include "../include/menu.h"

using namespace std;

void Inventory::importData() 
{
    fstream inFile;
    string ID;
    string name;
    int quantity;
    double price;
    
    inFile.open("/Volumes/Vindrive/College/Spring 2020/data_structures/labs/lab1/data.txt");
    if (!inFile) 
    {
        cout << "Problem openning file" << endl;
    }
    //transfering data from file to item list
    while(!inFile.eof()) 
    {
        inFile >> ID >> name >> quantity >> price;
        //converting name to all lowercase
        transform(name.begin(), name.end(), name.begin(), ::tolower);
        Items fill(ID, name, quantity, price);
        list.push_back(fill);
    }

    //Closing file
    inFile.close();

    //pointing to item list
    for (int i = 0; i < list.size(); ++i)
    {
        listPtrs.push_back(&list.at(i));
    }
};

//Print raw data
void Inventory::printUnsorted() 
{
    cout << "Unsorted Inventory\n" << setw(19) << left << "ID" << setw(20) << left << " Name" << setw(21) << right << " Quantity" << setw(20) << right << " Price" << endl;
    for(int i = 0; i < list.size(); ++i)
    {
        cout << setw(20) << left << list[i].getID() << setw(20) <<  list[i].getName() << setw(20) << right << list[i].getQuantity() << setw(20) << right << list[i].getPrice() << endl;
    }
};

//prints sorted list of pointers
void Inventory::printItems()
{
    cout << "Inventory\n" << setw(19) << left << "ID" << setw(20) << left << " Name" << setw(21) << right << " Quantity" << setw(20) << right << " Price" << endl;
    for(int i = 0; i < list.size(); ++i)
    {
        cout << setw(20) << left << listPtrs[i]->getID() << setw(20) <<  listPtrs[i]->getName() << setw(20) << right << listPtrs[i]->getQuantity() << setw(20) << right << listPtrs[i]->getPrice() << endl;
    }
};

//Sort items by name, ID, stock, and price
void Inventory::sortItems() 
{
    bool sorted = false;
    bool swap = false;
    bool quit = false;
    int userChoice = 0;
    while(!quit) //Sort options
    {
        cout << "\nSort by: \n" <<
        "1. ID \n" <<
        "2. Name \n" <<
        "3. Quantity \n" <<
        "4. Price \n" <<
        "5. Main Menu \n" << endl;
        cin >> userChoice;

        //Error checking menu choice
        if(!cin || userChoice > 5)
        {
            cout << "Input Error. Please choose from the options below" << endl;
        }
        while (!sorted) 
        {
            sorted = true;
            for(int i = 0; i < list.size()-1; ++i)
            {
                swap = false;
                switch(userChoice)
                {
                    case 1 : if(listPtrs[i]->getID() > listPtrs[i+1]->getID())
                    {
                        swap = true;
                    } 
                        break;
                    case 2 : if(listPtrs[i]->getName() > listPtrs[i+1]->getName())
                    {
                        swap = true;
                    }
                        break;
                    case 3 : if(listPtrs[i]->getQuantity() > listPtrs[i+1]->getQuantity())
                    {
                        swap = true;
                    }
                        break;
                    case 4 : if(listPtrs[i]->getPrice() > listPtrs[i+1]->getPrice())
                    {
                        swap = true;
                    }
                        break;
                }
                if(swap)
                {
                    Items *swap = listPtrs[i+1];
                        listPtrs[i+1] = listPtrs[i];
                        listPtrs[i] = swap;
                        sorted = false;
                }
            }
        } 
        printItems();
        if (userChoice == 5)
        {
            quit = true;
        }
    }
        quit = false; //Resetting main menu condition after exiting sub menu



    
};

//Function letting user search by ID or Name
void Inventory::searchItems()
{
    string searchFor;
    cout << "Search: ";
    cin >> searchFor;
    transform(searchFor.begin(), searchFor.end(), searchFor.begin(), ::tolower);
    cout << "\n";
    bool itemFound = false;
    for(int i = 0; i < list.size() && !itemFound; ++i)
    {
        if(searchFor == list[i].getName() || searchFor == list[i].getID())
        {
            cout << "\nItem: " << list[i].getName() <<
            "\nID: " << list[i].getID() <<
            "\nStock: " << list[i].getQuantity() <<
            "\nPrice: $" << list[i].getPrice() << endl;
            itemFound = true;
        }
    }
    if(!itemFound) {
        cout << "\nSorry item not found!" << endl;
    }
};

void Inventory::printReport()
{
    double total = 0;
    int uniqueCount = 0;
    double itemCount = 0;
    for(int i = 0; i < list.size(); ++i)
    {
        total += list[i].getPrice() * list[i].getQuantity();
        ++uniqueCount;
        itemCount += list[i].getQuantity();
    }
    cout << "\nInventory Report: \n\n" <<
    "Unique Items: " << uniqueCount <<
    "\nTotal worth of " << itemCount << " items in stock: " << total << endl;
}