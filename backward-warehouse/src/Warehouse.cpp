#include "../include/Warehouse.h"
#include "../include/StackDS.h"
#include "../include/Order.h"
#include "../include/Delivery.h"

using namespace std;

void Warehouse::addDelivery(int amount, float price)
{
    curDelivery.setDelivery(amount, price, deliveryNum);
    deliveries.push(curDelivery);
    processShipment();
    deliveryNum ++;
}

void Warehouse::processShipment()
{

    if (orders.isEmpty() == false)
    {
        curOrder = orders.pop();
    }
    if (deliveries.isEmpty() == false)
    {
        curDelivery = deliveries.pop();
    }

    while (curOrder.getAmountOrdered() != 0 && curDelivery.getQuantity() != 0)
    {

    }

}