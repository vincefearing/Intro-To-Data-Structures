#ifndef Order_h
#define Order_h
#include <iostream>
#include <string>

using namespace std;

class Order
{
    private:
    int orderNumber;
    string rushStatus;
    int priority;
    int qtyShipped;
    int qtyOrdered;
    float percentMarkUp;
    float costWarehouse;
    float amountMarkUp;
    float warehouseProfit;

    public:
    Order();
    int getPriority();
};

#endif