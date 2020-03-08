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
    string getID() const;
    string getName() const;
    double getQuantity() const;
    double getPrice() const;
    void setID(string id);
    void setName(string newName);
    void setQuantity(double newQuantity);
    void setPrice(double newPrice);
    //void 

    //constructor
    Items(string id, string newName, double newQuantity, double newPrice);
    Items();
};