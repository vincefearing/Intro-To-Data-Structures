#include "../include/Delivery.h"

void Delivery::setDelivery(int amount, float price, int deliveryNumber)
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

int Delivery::getDeliveryNum()
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