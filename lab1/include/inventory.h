#pragma once
#include <string>

using namespace std;

class Inventory 
{
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
    Inventory(string ID, string name, string quantity, string price);
};