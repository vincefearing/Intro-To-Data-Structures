#include "../include/functions.h"
#include "../include/data.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

void print(vector <Data> list) {
    for (int i = 0; i < list.size(); ++i) {
        cout << "ID: " << list.at(i).getID() << endl;
        cout << "Item Name: " << list.at(i).getName() << endl;
        cout << "Quantity: " << list.at(i).getQuantity() << endl;
        cout << "Price: $" << list.at(i).getPrice() << endl << endl;
    }
}
