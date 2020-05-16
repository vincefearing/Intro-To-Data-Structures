#ifndef Order_h
#define Order_h
#include "Shipment.h"
#include <vector>
#include <iostream>

using namespace std;

class Order
{
    private:
    int orderNum = 0;
    int amountOrdered = 0;
    int ordersRemaining = 0;
    vector <Shipment> shipData;

    public:
    void setOrder(int orderNumber, int amount);
    void setOrdersRemaining(int remaining);
    int getOrderNum() const;
    int getAmountOrdered() const;
    int getordersRemaining() const;
    void setShipData(Shipment shipment);
    void printShipData();
};

#endif