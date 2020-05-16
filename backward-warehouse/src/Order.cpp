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

void Order::setOrder(int shipped, int remaining, float cost, float total, float prof)
{
    qtyShipped = shipped;
    ordersRemaining = remaining;
    costWareHoue += cost;
    costCustomer += total;
    profit = prof;

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

void Order::setShipData(Shipment shipment)
{
    shipData.push_back(shipment);
}

void Order::printShipData()
{
    cout << "\nDeliveries associated with order: " << endl;

    for (int i = 0; i <= shipData.size() -1; ++i)
    {
        shipData.at(i).printDeliveryReport();
    }
}