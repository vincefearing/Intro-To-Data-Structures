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

    inFile.open("/Volumes/Vindrive/College/Spring 2020/data_structures/labs/lab1/data.txt");
    if (!inFile) {
        cout << "Problem opening file" << endl;
    }

    while(!inFile.eof()) 
    {
        inFile >> ID >> name >> quantity >> price;
        Data fill(ID, name, quantity, price);
        list.push_back(fill);
    }

    inFile.close();

    print(list);
    
}