#pragma once
#include <string>

using namespace std;

class Items {
    private:
    string ID;
    string name;
    double quantity;
    double price;
    
    public:
    //Getters and Setters
    string getID();
    void setID(string ID);
    string getName();
    void setName(string name);
    double getQuantity();
    void setQuantity(double quantity);
    double getPrice();
    void setPrice(double price);

    //constructor
    Items(string ID, string name, double quantity, double price);
};