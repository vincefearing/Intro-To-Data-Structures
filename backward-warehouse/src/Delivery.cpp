#include "../include/Delivery.h"
#include <iostream>

// Load function
void Delivery::setDelivery(int amount, float price, int deliveryNumber)
{
    quantity = amount;
    pricePerUnit = price;
    deliveryNum = deliveryNumber;
}

int Delivery::getQuantity() const
{
    return quantity;
}

float Delivery::getPricePerUnit() const
{
    return pricePerUnit;
}

int Delivery::getDeliveryNum() const
{
    return deliveryNum;
}

void Delivery::setQuantity(int qty)
{
    quantity = qty;
}