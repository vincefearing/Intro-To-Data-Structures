#include <iostream>
#include <string>
#include "../include/items.h"

using namespace std;

//Getters
string Items::getID() const
{
    return ID;
}
string Items::getName() const
{
    return name;
}
double Items::getQuantity() const
{
    return quantity;
}
double Items::getPrice() const
{
    return price;
}

//Setters
void Items::setID(string id) 
{
    id = ID;
}
void Items::setName(string newName) 
{
    newName = name;
}
void Items::setQuantity(double newQuantity) 
{
    newQuantity = quantity;
}
void Items::setPrice(double newPrice) 
{
    newPrice = price;
}

Items::Items (string id, string newName, double newQuantity, double newPrice) 
{
    ID = id;
    name = newName;
    quantity = newQuantity;
    price = newPrice;
}

Items::Items(){};