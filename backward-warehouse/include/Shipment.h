#ifndef Shipment_h
#define Shipment_h
#include "Delivery.h"
#include "Order.h"
#include <iostream>
#include <string>

using namespace std;

class Shipment
{
    private:
    int deliveryID;
    int deliveryQty;
    int orderID;
    int orderQty;
    int qtyShipped;
    float unitPrice;
    float cost;
    float salesPrice;
    float profit;

    public:
    Shipment();
    void loadShipment(Delivery del, Order ord);
    void printOrderReport();
    void printDeliveryReport();
};

#endif