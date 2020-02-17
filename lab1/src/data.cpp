#include <iostream>
#include <string>
#include "../include/data.h"

using namespace std;

//Getters and Setters
string Data::getID() 
{
    return ID;
}
void Data::setID(string ID) 
{
    this->ID = ID;
}
string Data::getName()
{
    return name;
}
void Data::setName(string name) 
{
    this->name = name;
}
string Data::getQuantity()
{
    return quantity;
}
void Data::setQuantity(string quantity) 
{
    this->quantity = quantity;
}
string Data::getPrice()
{
    return price;
}
void Data::setPrice(string price) 
{
    this->price = price;
}

Data::Data (string ID, string name, string quantity, string price) 
{
    this-> ID = ID;
    this-> name = name;
    this-> quantity = quantity;
    this-> price = price;
}