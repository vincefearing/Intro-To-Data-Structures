#include "../include/Warehouse.h"
#include "../include/StackDS.h"
#include "../include/Order.h"
#include "../include/Delivery.h"
#include <iomanip>

using namespace std;

void Warehouse::addDelivery(int amount, float price)
{
    Delivery curDelivery;
    curDelivery.setDelivery(amount, price, deliveryNum);
    numStocked += curDelivery.getQuantity();
    deliveries.push(curDelivery);
    deliveryNum ++;
    if (orders.isEmpty() == false)
    {
        processShipment();
    }
}

void Warehouse::addOrder(int amount)
{
    Order curOrder;
    curOrder.setOrder(orderNum, amount);
    orderNum++;
    orders.push(curOrder);
    if (deliveries.isEmpty() == false)
    {
        processShipment();
    }
}

void Warehouse::processShipment()
{
    Delivery curDelivery;
    Order curOrder;
    Shipment curShipment;
    int deliveryID = 0;
    int deliveryQty = 0;
    int orderID = 0;
    int originalQuantity = 0;
    int orderQty = 0;
    int qtyShipped = 0;
    int qtyRemaining = 0;
    int totalShipped = 0;
    float unitPrice = 0;
    float cost = 0;
    float salesPrice = 0;
    float profit = 0;
    float total = 0;

    while (deliveries.isEmpty() == false && orders.isEmpty() == false)
    {
        curOrder = orders.pop();
        curDelivery = deliveries.pop();
        deliveryID = curDelivery.getDeliveryNum();
        deliveryQty = curDelivery.getQuantity();
        orderID = curOrder.getOrderNum();
        originalQuantity = curOrder.getAmountOrdered();
        orderQty = curOrder.getordersRemaining();
        unitPrice = curDelivery.getPricePerUnit();
        salesPrice = unitPrice + (unitPrice * 0.50);
        qtyRemaining = curOrder.getordersRemaining();
        while (deliveryQty != 0 && qtyShipped < orderQty)
        {
            qtyShipped ++;
            deliveryQty --;
            numStocked --;
            numShipped++;
            qtyRemaining --;
        }
        totalShipped = qtyShipped;
        cost = unitPrice * qtyShipped;
        total = salesPrice * qtyShipped;
        profit = total - cost;
        qtyRemaining = orderQty - qtyShipped;
        curShipment.loadShipment(deliveryID, orderID, qtyShipped, unitPrice, cost, total);
        curOrder.setShipData(curShipment);
        curOrder.setOrder(qtyShipped, qtyRemaining, cost, total, profit);

        if (qtyRemaining !=0 && deliveryQty == 0 && deliveries.isEmpty() == false)
        {
            while (deliveries.isEmpty() == false)
            {
                curDelivery = deliveries.pop();
                deliveryQty = curDelivery.getQuantity();
                qtyShipped = 0;
                unitPrice = curDelivery.getPricePerUnit();
                deliveryID = curDelivery.getDeliveryNum();
                salesPrice = unitPrice + (unitPrice * 0.50);
                while (deliveryQty != 0 && qtyRemaining != 0 /*qtyShipped < orderQty*/)
                {
                    qtyShipped ++;
                    deliveryQty --;
                    numStocked --;
                    numShipped++;
                    qtyRemaining --;
                }
                totalShipped += qtyShipped;
                cost += unitPrice * qtyShipped;
                total += salesPrice * qtyShipped;
                profit += total - cost;
                curShipment.loadShipment(deliveryID, orderID, qtyShipped, unitPrice, cost, total);
                curOrder.setShipData(curShipment);
                curOrder.setOrder(qtyShipped, qtyRemaining, cost, total, profit);
            }
            
            curOrder.printOrderInfo();
            curOrder.printShipData();

            if (qtyRemaining != 0)
            {
                orders.push(curOrder);
            }
        }
        else
        {
            curOrder.printOrderInfo();
            curOrder.printShipData();
            if (qtyRemaining != 0)
            {
                orders.push(curOrder);
            }
        }

        if (deliveryQty != 0)
        {
            curDelivery.setQuantity(deliveryQty);
            deliveries.push(curDelivery);
        }
    }
}

void Warehouse::printDeliveryInfo()
{
    Delivery curDelivery;
    int a = 20;
    int b = 6;
    
    /*cout << fixed << showpoint;
    cout << setprecision(2);*/
    cout << left << setw(a) << "\nDelivery#" << left << setw(a) << "Amount" << setw(a) << "Price" << endl;

    while (deliveries.isEmpty() == false)
    {
        curDelivery = deliveries.pop();
        cout << left << setw(a) << curDelivery.getDeliveryNum() << left << setw(a) << curDelivery.getQuantity() << fixed << showpoint << setprecision(2) << setw(a) << curDelivery.getPricePerUnit() << endl;
        tempDeliveries.push(curDelivery);
    }

    while (tempDeliveries.isEmpty() == false)
    {
        curDelivery = tempDeliveries.pop();
        deliveries.push(curDelivery);
    }
}

void Warehouse::printOrderInfo()
{
    Order curOrder;
    
    while (orders.isEmpty() == false)
    {
        curOrder = orders.pop();
        curOrder.printOrderInfo();
        tempOrders.push(curOrder);
    }

    while (tempOrders.isEmpty() == false)
    {
        curOrder = tempOrders.pop();
        orders.push(curOrder);
    }
}