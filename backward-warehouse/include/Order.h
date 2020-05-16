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
    int qtyShipped = 0;
    int ordersRemaining = 0;
    float costWareHoue = 0;
    float costCustomer = 0;
    float profit = 0;
    vector <Shipment> shipData;

    public:
    void setOrder(int orderNumber, int amount);
    void setOrder(int shipped, int remaining, float cost, float total, float prof);
    void setOrdersRemaining(int remaining);
    int getOrderNum() const;
    int getAmountOrdered() const;
    int getordersRemaining() const;
    void setShipData(Shipment shipment);
    void printShipData();
};

#endif