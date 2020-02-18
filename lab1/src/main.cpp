// Lab 1 Fearing, Vincent T TH
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "../include/data.h"
#include "../include/functions.h"

using namespace std;

int  main() 
{
    vector <Data> list;
    ifstream inFile;
    string trash;
    string ID;
    string name;
    string quantity;
    string price;
    int userChoice = 0;
    bool quit = false;

    inFile.open("/Volumes/Vindrive/College/Spring 2020/data_structures/labs/lab1/data.txt");
    if (!inFile) 
    {
        cout << "Problem opening file" << endl;
    }

    //Importing data from file
    while(!inFile.eof() && list.size() < 15) 
    {
        inFile >> ID >> name >> quantity >> price;
        Data fill(ID, name, quantity, price);
        list.push_back(fill);
    }

    //Letting user know if list of data is too large and which items were not included
    if (list.size() > 14)
    {
        cout << endl;
        cout << "WARNING: File was too large only the first 15 items were imported" << endl;
    }

    inFile.close();

    //Menu that allows user to search for specific item or print sorted/unsorted list of all items
    while(quit != true) 
    {
        cout << endl;
        cout << "Welcome! Please choose a number from the options below." << endl << endl;
        cout << "1. Print All" << endl;
        cout << "2. Sort" << endl;
        cout << "3. Search" << endl;
        cout << "4. Exit" << endl;
        cin >> userChoice;

        switch(userChoice)
        {
            case 1 :
        }
    }
}