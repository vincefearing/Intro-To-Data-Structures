#ifndef Warehouse_h
#define Warehouse_h
#include "StackDS.h"
#include "Delivery.h"
#include "Order.h"

class Warehouse
{
    private:
    StackDS <Order> orders;
    StackDS <Delivery> deliveries;
    int numShipped = 0;
    Delivery curDelivery;
    Order curOrder;
    int orderNum = 1;
    int deliveryNum = 1;
    Shipment curShipment;

    public:
    void addDelivery(int amount, float price);
    //void addOrder();
    void processShipment();
};


#endif