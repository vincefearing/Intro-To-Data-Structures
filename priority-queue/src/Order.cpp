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

int Order::getPriority()
{
    return priority;
}