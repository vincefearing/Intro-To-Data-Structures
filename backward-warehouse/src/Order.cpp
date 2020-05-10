#include "../include/Order.h"

using namespace std;

void Order::setOrder(int id, int amount)
{
    ID = id;
    amountOrdered = amount;
}

int Order::getAmountOrdered() const
{
    return amountOrdered;
}

int Order::getAmountShipped() const
{
    return amountShipped;
}