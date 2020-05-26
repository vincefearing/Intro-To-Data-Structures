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

void Order::loadOrder(int orderNum, int importance, int qty, float price, float markUp, float costWare, float profit, int percent)
{
    orderNumber = orderNum;
    priority = importance;
    qtyOrdered = qty;
    pricePerUnit = price;
    percentMarkUp = percent;
    amountMarkedUp = costWare * markUp;
    qtyShipped = qtyOrdered;
    costWarehouse = costWare;
    warehouseProfit = profit;
    
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