#ifndef Warehouse_h
#define Warehouse_h
#include "QueueDS.h"
#include "Delivery.h"
#include "Order.h"
#include "Shipment.h"
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

class Warehouse
{
    private:
    QueueDS <Order> orders;
    QueueDS <Delivery> deliveries;
    QueueDS <Order> tempOrders;
    QueueDS <Delivery> tempDeliveries;
    int numShipped = 0;
    int numStocked = 0;
    int orderNum = 1;
    int deliveryNum = 1;

    public:
    void addDelivery(int amount, float price);
    void addOrder(int amount);
    void processShipment();
    void printDeliveryInfo();
    void printOrderInfo();
    void printOrderStack();
};


#endif