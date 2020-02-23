#include <iostream>
#include <string>
#include "../include/items.h"

using namespace std;

//Getters and Setters
string Items::getID() 
{
    return ID;
}
void Items::setID(string ID) 
{
    this->ID = ID;
}
string Items::getName()
{
    return name;
}
void Items::setName(string name) 
{
    this->name = name;
}
double Items::getQuantity()
{
    return quantity;
}
void Items::setQuantity(double quantity) 
{
    this->quantity = quantity;
}
double Items::getPrice()
{
    return price;
}
void Items::setPrice(double price) 
{
    this->price = price;
}

Items::Items (string ID, string name, double quantity, double price) 
{
    this-> ID = ID;
    this-> name = name;
    this-> quantity = quantity;
    this-> price = price;
}