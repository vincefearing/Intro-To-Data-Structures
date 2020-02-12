#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Data {
    string ID;
    string name;
    string quantity;
    string price;
};

int  main() {
    vector <Data> list;
    ifstream inFile;
    string trash;
    inFile.open("/Volumes/Vindrive/College/Spring 2020/Intro To Data Structures/lab1/data.txt");
    if (!inFile) {
        cout << "Problem opening file";
    }

    while(!inFile.eof()) {
        inFile >> list
    }
}