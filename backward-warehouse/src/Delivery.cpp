#include "../include/Delivery.h"

void Delivery::setDelivery(int amount, float price)
{
    quantity = amount;
    pricePerUnit = price;
}

int Delivery::getQuantity()
{
    return quantity;
}

float Delivery::getPricePerUnit()
{
    return pricePerUnit;
}

int Delivery::getID()
{
    return ID;
}