#pragma once
#include <string>

using namespace std;

class Items {
    private:
    string ID;
    string name;
    string quantity;
    double price;
    
    public:
    //Getters and Setters
    string getID();
    void setID(string ID);
    string getName();
    void setName(string name);
    string getQuantity();
    void setQuantity(string quantity);
    double getPrice();
    void setPrice(double price);

    //constructor
    Items(string ID, string name, string quantity, double price);
};