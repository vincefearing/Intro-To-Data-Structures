#ifndef Order_h
#define Order_h
#include <iostream>
#include <string>
#include "Utility.h"
#include <iomanip>

using namespace std;

class Order
{
    private:
    int orderNumber;
    string rushStatus;
    int priority;
    int qtyShipped;
    int qtyOrdered;
    int percentMarkUp;
    float costWarehouse;
    float amountMarkedUp;
    float warehouseProfit;
    int pricePerUnit;

    public:
    Order();
    int getPriority() const;
    int getQtyOrdered() const;
    int getOrderNumber() const;
    void setTestData(int orderID, int importance);
    void setPriority(int importance);
    void loadOrder(int orderNum, int importance, int qty, float price, float markUp, float costWare, float profit, int percent);
    void printDataTable();
};

#endif