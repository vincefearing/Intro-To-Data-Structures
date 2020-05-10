#include "../include/Shipment.h"

Shipment::Shipment()
{
    int deliveryID = 0;
    int deliveryQty = 0;
    int orderID = 0;
    int orderQty = 0;
    int qtyShipped = 0;
    float unitPrice = 0;
    float cost = 0;
    float salesPrice = 0;
    float profit = 0;

}

void Shipment::loadShipment(Delivery del, Order ord)
{
    deliveryID = del.getDeliveryNum();
    deliveryQty = del.getQuantity();
    orderID = ord.getOrderNum();
    orderQty = ord.getAmountOrdered();
    unitPrice = del.getPricePerUnit();
    salesPrice = unitPrice + (unitPrice * 0.50);
    while (deliveryQty != 0 && qtyShipped <= orderQty)
    {
        qtyShipped ++;
        deliveryQty --;
    }
    cost = unitPrice * qtyShipped;
    profit = salesPrice * qtyShipped;
}

void Shipment::printOrderReport()
{
    
}

