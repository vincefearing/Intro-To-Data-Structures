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
    qtyShipped += shipped;
    ordersRemaining = remaining;
    costWareHoue += cost;
    costCustomer += total;
    profit += prof;

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

//Prints information when shipment is processed
void Order::printShipData()
{
    cout << fixed << showpoint;
    cout << setprecision(2);
    int a = 20;

    cout << "\nShipment details\n" << endl;
    cout << right << setw(a) << "Delivery#" << right << setw(a) << "Qty Shipped" << right << setw(a) << "Warehouse Cost" << right << setw(a) << "Customer Cost" << right << setw(a) << "Customer Cost" << endl;

    for (int i = 0; i <= shipData.size() -1; ++i)
    {
        shipData.at(i).printDeliveryReport();
    }
}

//Prints what is currently on hand in the order stack
void Order::printOrderInfo()
{
    int a = 30;
    int b = 10;
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << setw(a) << left << "\nOrder Number: " << right << setw(b) << orderNum << left << setw(a) << "\nQty ordered: " << right << setw(b) << amountOrdered << left << setw(a) << "\nQty shipped this shipment: " << right << setw(b) << setw(b) << qtyShipped << left << setw(a) << "\nQty to be shipped: " << right << setw(b) << ordersRemaining << left << setw(a) << "\nTotal cost to Warehouse: " << right << setw(b) << costWareHoue << left << setw(a) << "\nTotal cost to customer: " << right << setw(b) << costCustomer << left << setw(a) << "\nProfit this shipment: " << right << setw(b) << profit << endl;
}

//Utility function to reset values after order has been filled for current shipment and there is more to be filled later
void Order::resetOrder()
{
    qtyShipped = 0;
    costWareHoue = 0;
    costCustomer = 0;
    profit = 0;

    shipData.clear();
}