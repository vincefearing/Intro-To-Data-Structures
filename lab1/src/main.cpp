// Lab 1 Fearing, Vincent T TH
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "../include/inventory.h"
#include "../include/functions.h"

using namespace std;

int  main() 
{
    vector <Inventory> list;
    ifstream inFile;
    string trash;
    string ID;
    string name;
    string quantity;
    string price;
    int count = 0;
    int userChoice = 0;
    bool quit = false;

    //Opening file
    inFile.open("/Volumes/Vindrive/College/Spring 2020/data_structures/labs/lab1/data.txt");
    if (!inFile) 
    {
        cout << "Problem opening file" << endl;
    }

    //Importing data from file
    while(!inFile.eof() && list.size() < 15) 
    {
        inFile >> ID >> name >> quantity >> price;
        Inventory fill(ID, name, quantity, price);
        list.push_back(fill);
    }

    //Closing file
    inFile.close();

    //Letting user know if list of data is too large and which items were not included
    if (list.size() > 14)
    {
        cout << endl;
        cout << "WARNING: File was too large only 15 items were imported" << endl;
    }

    //Menu that allows user to search for specific item or print sorted/unsorted list of all items
    while(quit == false) 
    {
        cout << endl;
        cout << "Welcome! Please choose a number from the options below." << endl << endl;
        cout << "1. Print Report" << endl;
        cout << "2. Sort Report" << endl;
        cout << "3. Search" << endl;
        cout << "4. Exit" << endl << endl;
        cin >> userChoice;

        //error checking menu choice
        if(!cin && userChoice < 5) // !!SHOULD BE A FUNCTION!!
        {
            cin.clear();
            cin.ignore();
            cout << "Incorrect input. Please choose a single digit corresponding to your desired menu item" << endl;
        }

        switch(userChoice)
        {
            case 1 : printReport(list);
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

                switch(userChoice)
                {
                    case 1 : //sort(userChoice);
                        break;
                    case 2 : //sort(userChoice);
                        break;
                    case 3 : //sort(userChoice);
                        break;
                    case 4 : //sort(userChoice);
                        break;
                    case 5 : quit = true;
                        break;
                }    
            }
            quit = false; //resetting main menu condition after exiting sub menu
                break;
            case 3 : //searchInventory(item, list);
                break;
            case 4 : quit = true;
                break; 
        }
    }

    cout << "The program exited the menu loop" << endl;
    return 0;
}