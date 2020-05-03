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
    Delivery tempDelivery;
    Order tempOrder;

    public:
    void addDelivery(int amount, float price);
    //void addOrder();
    void processShipment();
};


#endif