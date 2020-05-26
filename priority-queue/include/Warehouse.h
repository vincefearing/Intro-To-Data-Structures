#ifndef Warehouse_h
#define Warehouse_h

#include <iostream>
#include <string>
#include <Order.h>
#include "PriorityQueue.h"
#include "Utility.h"
#include <iomanip>

using namespace std;

class Warehouse
{
    private:
    PriorityQueue pQueue;
    int inventory;
    int ordersProcessed;
    int orderNumber;
    float pricePerUnit;
    float totalWarehouseCost;
    float totalCustomerCost;
    float totalProfit;
    int totalProcessed;

    public:
    Warehouse();
    void addOrder();
    void processOrders();
    void printOrderTable();
    void printStock();
    void closeDay();
};

#endif