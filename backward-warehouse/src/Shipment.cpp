#include "../include/Shipment.h"

Shipment::Shipment()
{
    deliveryID = 0;
    orderID = 0;
    qtyShipped = 0;
    unitPrice = 0;
    cost = 0;
    total = 0;
}

void Shipment::loadShipment(int delId, int ordID, int quantShipped, float price, float houseCost, float custTotal)
{
   deliveryID = delId;
   orderID = ordID;
   qtyShipped = quantShipped;
   unitPrice = price;
   cost = houseCost;
   total = custTotal;
}

void Shipment:: printDeliveryReport()
{
    cout << "Delivery #: " << deliveryID << "\nQty Shipped: " << qtyShipped << "\nUnit Price: " << unitPrice << "\nCost: " << cost << "\nTotal: " << total;
}

