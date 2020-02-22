#include <iostream>
#include <string>
#include "../include/inventory.h"

using namespace std;

//Getters and Setters
string Inventory::getID() 
{
    return ID;
}
void Inventory::setID(string ID) 
{
    this->ID = ID;
}
string Inventory::getName()
{
    return name;
}
void Inventory::setName(string name) 
{
    this->name = name;
}
string Inventory::getQuantity()
{
    return quantity;
}
void Inventory::setQuantity(string quantity) 
{
    this->quantity = quantity;
}
string Inventory::getPrice()
{
    return price;
}
void Inventory::setPrice(string price) 
{
    this->price = price;
}

Inventory::Inventory (string ID, string name, string quantity, string price) 
{
    this-> ID = ID;
    this-> name = name;
    this-> quantity = quantity;
    this-> price = price;
}