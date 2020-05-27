#include "../include/Order.h"

Order::Order()
{
    orderNumber = 0;
    qtyShipped = 0;
    qtyOrdered = 0;
    percentMarkUp = 0;
    costWarehouse = 0;
    amountMarkedUp = 0;
    warehouseProfit = 0;
    priority = 0;
}

int Order::getPriority() const
{
    return priority;
}

int Order::getQtyOrdered() const
{
    return qtyOrdered;
}

void Order::setPriority(int importance)
{
    priority = importance;
}

int Order::getOrderNumber() const
{
    return orderNumber;
}

void Order::loadOrder(int orderNum, int importance, int qty, float price, float markUp, float costWare, float profit, int percent, float amountMark)
{
    orderNumber = orderNum;
    priority = importance;
    qtyOrdered = qty;
    pricePerUnit = price;
    percentMarkUp = percent;
    amountMarkedUp = amountMark;
    qtyShipped = qtyOrdered;
    costWarehouse = costWare;
    warehouseProfit = profit;
    costCustomer = costWarehouse + profit;
    
    if (priority == standard)
    {
        rushStatus = "standard";
    }
    else if (priority == rush)
    {
        rushStatus = "rushed";
    }
    else
    {
        rushStatus = "extreme";
    }
}

void Order::setTestData(int orderID, int importance)
{
    orderNumber = orderID;
    priority = importance;
}

void Order::printDataTable(int choice)
{
    int a = 20;
    cout << fixed << showpoint;
    cout << setprecision(2);
    if (choice == 2)
    {
        cout << right << setw(a) << orderNumber << right << setw(a) << rushStatus << right << setw(a) << qtyOrdered << right << setw(a) << qtyShipped << right << setw(a) << percentMarkUp << right << setw(a) << costWarehouse << right << setw(a) << amountMarkedUp << right << setw(a) << costCustomer << right << setw(a) << warehouseProfit << endl;
    }
    else
    {
        cout << right << setw(a) << orderNumber << right << setw(a) << rushStatus << right << setw(a) << qtyOrdered << right << setw(a) << "0" << right << setw(a) << percentMarkUp << right << setw(a) << costWarehouse << right << setw(a) << amountMarkedUp << right << setw(a) << costCustomer << right << setw(a) << warehouseProfit << endl;
    }
    

    
}