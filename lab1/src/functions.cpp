#include "../include/functions.h"
#include "../include/data.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

//A function that sorts and prints list of items unsorted or by ID, name, quantity or price
void printReport(vector <Data> list) {
    //Printing items unsorted
    for (int i = 0; i < list.size(); ++i) {
        cout << "ID: " << list.at(i).getID() << endl;
        cout << "Item Name: " << list.at(i).getName() << endl;
        cout << "Quantity: " << list.at(i).getQuantity() << endl;
        cout << "Price: $" << list.at(i).getPrice() << endl << endl;
    }
}
