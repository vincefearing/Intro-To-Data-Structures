#include "../include/Warehouse.h"

void Warehouse::addDelivery(int amount, float price)
{
    tempDelivery.setDelivery(amount, price);
    deliveries.push(tempDelivery);
    processShipment();

}

void Warehouse::processShipment()
{
    while(orders.isEmpty() == false && deliveries.isEmpty() == false)
    {
        tempOrder = orders.pop();
        tempDelivery = deliveries.pop();
        
    }
}