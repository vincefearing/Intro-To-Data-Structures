#include "../include/Warehouse.h"
#include "../include/StackDS.h"
#include "../include/Order.h"
#include "../include/Delivery.h"

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
    int deliveryID = 0;
    int deliveryQty = 0;
    int orderID = 0;
    int originalQuantity = 0;
    int orderQty = 0;
    int qtyShipped = 0;
    int qtyRemaining = 0;
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
        while (deliveryQty != 0 && qtyShipped < orderQty)
        {
            qtyShipped ++;
            deliveryQty --;
            numStocked --;
            numShipped++;
        }
        cost = unitPrice * qtyShipped;
        total = salesPrice * qtyShipped;
        profit = total - cost;
        qtyRemaining = orderQty - qtyShipped;
        curShipment.loadShipment(deliveryID, orderID, qtyShipped, unitPrice, cost, total);

        

        if (qtyRemaining == 0 || deliveryQty == 0)
        {
            if (qtyRemaining !=0 && deliveryQty == 0 && deliveries.isEmpty() == false)
            {
                while (deliveries.isEmpty() == false)
                {
                    deliveryQty = curDelivery.getQuantity();
                    unitPrice = curDelivery.getPricePerUnit();
                    salesPrice = unitPrice + (unitPrice * 0.50);
                    while (deliveryQty != 0 && qtyShipped < orderQty)
                    {
                        qtyShipped ++;
                        deliveryQty --;
                        numStocked --;
                        numShipped++;
                    }
                    cost += unitPrice * qtyShipped;
                    total += salesPrice * qtyShipped;
                    profit += total - cost;
                }
                cout << "\nOrder Number: " << orderID << "\nQty Ordered: " << originalQuantity << "\nQty Shipped: " << qtyShipped << "\nOutstanding items: " << qtyRemaining << "\nCost: " << cost << "\nTotal Charged: " << total << "\nProfit: " << profit << endl;
            }
            cout << "\nOrder Number: " << orderID << "\nQty Ordered: " << originalQuantity << "\nQty Shipped: " << qtyShipped << "\nOutstanding items: " << qtyRemaining << "\nCost: " << cost << "\nTotal Charged: " << total << "\nProfit: " << profit << endl;
            curDelivery.setShipData(curShipment);
            if (qtyRemaining != 0)
            {
                curOrder.setOrdersRemaining(qtyRemaining);
                orders.push(curOrder);
            }
        }
        else
        {
            curOrder.setOrdersRemaining(qtyRemaining);
            orders.push(curOrder);
        }

        if (deliveryQty == 0)
        {
            curDelivery.printShipData();
        }
        else
        {
            curDelivery.setQuantity(deliveryQty);
            deliveries.push(curDelivery);
        }
    }
    

    /*while (curOrder.getAmountOrdered() != 0 && curDelivery.getQuantity() != 0)
    {
        curShipment.loadShipment(curDelivery, curOrder);

    }*/

}