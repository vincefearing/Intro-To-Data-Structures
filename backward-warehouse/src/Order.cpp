#include "../include/Order.h"

void Order::setOrder(int id, int amount)
{
    ID = id;
    amountOrdered = amount;
}

int Order::getAmountOrdered()
{
    return amountOrdered;
}

int Order::getAmountShipped()
{
    return amountShipped;
}