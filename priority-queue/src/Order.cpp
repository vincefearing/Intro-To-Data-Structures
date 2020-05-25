#include "../include/Order.h"

Order::Order()
{
    orderNumber = 0;
    qtyShipped = 0;
    qtyOrdered = 0;
    percentMarkUp = 0;
    costWarehouse = 0;
    amountMarkUp = 0;
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

void Order::setQtyOrdered(int qty)
{
    qtyOrdered = qty;
}

int Order::getOrderNumber() const
{
    return orderNumber;
}

void Order::setTestData(int orderID, int importance)
{
    orderNumber = orderID;
    priority = importance;
}