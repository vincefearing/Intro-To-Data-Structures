// Lab 1 Fearing, Vincent T TH
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "data.h"

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
    int i = 0;

    inFile.open("/Volumes/Vindrive/College/Spring 2020/Intro To Data Structures/labs/lab1/data.txt");
    if (!inFile) {
        cout << "Problem opening file" << endl;
    }

    while(!inFile.eof()) 
    {
        inFile >> ID >> name >> quantity >> price;
        Data fill(ID, name, quantity, price);
        list.push_back(fill);
        cout << fill.getID() << endl;
    }

    inFile.close();
    
}

//did not reach the end of file && did not reach end of array