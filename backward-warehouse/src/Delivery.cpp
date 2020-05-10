#include "../include/Delivery.h"

void Delivery::setDelivery(int amount, float price)
{
    quantity = amount;
    pricePerUnit = price;
}

int Delivery::getQuantity() const
{
    return quantity;
}

float Delivery::getPricePerUnit() const
{
    return pricePerUnit;
}

int Delivery::getID()
{
    return ID;
}