#include "../include/Delivery.h"
#include <iostream>

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

void Delivery::setShipData(Shipment shipment)
{
    shipData.push_back(shipment);
}

void Delivery::setQuantity(int qty)
{
    quantity = qty;
}

void Delivery::printShipData()
{
    for (int i = 0; i <= shipData.size() -1; ++i)
    {
        shipData.at(i).printDeliveryReport();
    }
}