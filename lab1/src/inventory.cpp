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
        cout << "ID: " << listPtrs[i]->getID() << endl;
        cout << "Item Name: " << listPtrs[i]->getName() << endl;
        cout << "Quantity: " << listPtrs[i]->getQuantity() << endl;
        cout << "Price: $" << listPtrs[i]->getPrice() << endl << endl;
    }
}

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
};