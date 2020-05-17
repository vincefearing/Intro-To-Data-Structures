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
    int a = 30;
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << right << setw(a) << deliveryID << right << setw(a) << qtyShipped << right << setw(a) << unitPrice << right << setw(a) << cost << right << setw(a) << total;
}