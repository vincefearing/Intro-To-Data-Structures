#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "../include/inventory.h"
#include "../include/items.h"

using namespace std;

void Inventory::importData() 
{
    fstream inFile;
    string ID;
    string name;
    string quantity;
    double price;
    
    inFile.open("/Volumes/Vindrive/College/Spring 2020/data_structures/labs/lab1/data.txt");
    if (!inFile) 
    {
        cout << "Problem openning file" << endl;
    }
    //transfering data from file to item list
    while(!inFile.eof() && list.size() < 15) 
    {
        inFile >> ID >> name >> quantity >> price;
        Items fill(ID, name, quantity, price);
        list.push_back(fill);
    }

    //Closing file
    inFile.close();

    //Letting user know if list of data is too large and which items were not included
    if (list.size() > 14)
    {
        cout << endl;
        cout << "WARNING: File was too large only the first 15 items were imported" << endl;
    }

    //pointing to item list
    for (int i = 0; i < list.size(); ++i)
    {
        listPtrs.push_back(&list.at(i));
    }
}

void Inventory::printItems()
{
    for (int i = 0; i < list.size(); ++i) 
    {
        cout << "ID: " << list.at(i).getID() << endl;
        cout << "Item Name: " << list.at(i).getName() << endl;
        cout << "Quantity: " << list.at(i).getQuantity() << endl;
        cout << "Price: $" << list.at(i).getPrice() << endl << endl;
    }
}

void Inventory::sortItems(int userChoice) 
{
    for(int i = 0; i < list.size(); ++i)
    {
        switch(userChoice)
        {
            case 1 : 
        }
    }
};