#include "../include/Order.h"

using namespace std;

void Order::setOrder(int orderNumber, int amount)
{
    orderNum = orderNumber;
    amountOrdered = amount;
    ordersRemaining = amountOrdered;
    
}

void Order::setOrdersRemaining(int remaining)
{
    ordersRemaining = remaining;
}

int Order::getAmountOrdered() const
{
    return amountOrdered;
}

int Order::getordersRemaining() const
{
    return ordersRemaining;
}

int Order::getOrderNum() const
{
    return orderNum;
}