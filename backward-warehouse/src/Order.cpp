#include "../include/Order.h"

void Order::setOrder(int id, int amount, float price)
{
    ID = id;
    amountOrdered = amount;
    pricePerWidget = price + (price * 0.50);
}