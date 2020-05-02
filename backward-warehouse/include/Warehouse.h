#ifndef Warehouse_h
#define Warehouse_h
#include "StackDS.h"
#include "Delivery.h"
#include "Order.h"

class Warehouse
{
    private:
    StackDS <Order> Orders;
    StackDS <Delivery> Deliveries;
    int numShipped = 0;
    Delivery tempDelivery;
    Order tempOrder;

    public:
    void addDelivery(int amount, float price);
    //void addOrder();
    //void processShipment();
};


#endif