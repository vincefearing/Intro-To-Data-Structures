#pragma once
#include <string>

using namespace std;

class Items {
    private:
    string ID;
    string name;
    string quantity;
    string price;
    
    public:
    //Getters and Setters
    string getID();
    void setID(string ID);
    string getName();
    void setName(string name);
    string getQuantity();
    void setQuantity(string quantity);
    string getPrice();
    void setPrice(string price);

    //constructor
    Items(string ID, string name, string quantity, string price);
};