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

//importing data from file
void Inventory::importData() 
{
    fstream inFile;
    ofstream errorFile;
    string ID;
    string name;
    int quantity;
    double price;
    
    errorFile.open("/Volumes/Vindrive/College/Spring 2020/data_structures/labs/lab1/errors.txt", ofstream::out);
    inFile.open("/Volumes/Vindrive/College/Spring 2020/data_structures/labs/lab1/data.txt");
    if (!inFile) 
    {
        cout << "Problem opening file" << endl;
        exit(1);
    }

    //transfering data from file to item list
    while(!inFile.eof()) 
    {
        inFile >> ID >> name >> quantity >> price;
        //converting name to all lowercase
        transform(name.begin(), name.end(), name.begin(), ::tolower);
        if(quantity < 0 || price < 0)
        {
            cout << "\nNegative value error found in record: " << ID << endl;
            errorFile << "Negative value error in record: " << setw(20) << left << ID << setw(20) << name << setw(20) << right << quantity << setw(20) << right << price << endl;
        }
        else
        {
            Items temp(ID, name, quantity, price);
            list.push_back(temp);
        }
    }

    //Closing file
    inFile.close();
    errorFile.close();

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
        //listPtrs[i]->show();
    }
};

//Sort items by name, ID, stock, and price
void Inventory::sortItems(int userChoice) 
{
    bool sorted = false;
    bool swap = false;

    while (!sorted) 
    {
        sorted = true;
        for(int i = 0; i < list.size()-1; ++i)
        {
            swap = false;
            switch(userChoice)
            {
                case 1 : swap = listPtrs[i]->getID() > listPtrs[i+1]->getID();
                    break;
                case 2 : swap = listPtrs[i]->getName() > listPtrs[i+1]->getName();
                    break;
                case 3 : swap = listPtrs[i]->getQuantity() > listPtrs[i+1]->getQuantity();
                    break;
                case 4 : swap = listPtrs[i]->getPrice() > listPtrs[i+1]->getPrice();
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
};

//Function letting user search by ID or Name
void Inventory::searchItems()
{
    string searchFor;
    cout << "Search: ";
    cin >> searchFor;
    cin.clear();
    cin.ignore(1000, '\n');
    transform(searchFor.begin(), searchFor.end(), searchFor.begin(), ::tolower);
    cout << "\n";
    bool itemFound = false;
    for(int i = 0; i < list.size() && !itemFound; ++i)
    {
        if(searchFor == listPtrs[i]->getName() || searchFor == listPtrs[i]->getID())
        {
            cout << setw(19) << left << "ID" << setw(20) << left << " Name" << setw(21) << right << " Quantity" << setw(20) << right << " Price" << endl;
            cout << setw(20) << left << listPtrs[i]->getID() << setw(20) <<  listPtrs[i]->getName() << setw(20) << right << listPtrs[i]->getQuantity() << setw(20) << right << listPtrs[i]->getPrice() << endl;

            itemFound = true;
        }
    }
    if(!itemFound) {
        cout << "\nSorry item not found!" << endl;
    }
};

//Prints unique items and totals
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