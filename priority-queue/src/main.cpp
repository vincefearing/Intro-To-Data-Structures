#include <iostream>
#include "../include/PriorityQueue.h"
#include "../include/Order.h"
#include "../include/Utility.h"

int main() {
    PriorityQueue pQueue;
    Order order1;
    Order order2;
    Order order3;
    Order order4;
    Order order5;
    Order order6;
    Order order7;
    Order order8;
    
    order1.setTestData(1, standard);
    order2.setTestData(2, standard);
    order3.setTestData(3, rush);
    order4.setTestData(4, extreme);
    order5.setTestData(5, extreme);
    order6.setTestData(6, rush);
    order7.setTestData(7, extreme);
    order8.setTestData(8, rush);

    pQueue.enqueue(order1);
    pQueue.enqueue(order2);
    pQueue.enqueue(order3);
    pQueue.enqueue(order4);
    pQueue.enqueue(order5);
    pQueue.enqueue(order6);
    pQueue.enqueue(order7);
    pQueue.enqueue(order8);

    cout << "Tree before pop:" << endl;
    pQueue.printQueue();
    cout << "\nTree after pop:" << endl;
    for (int i = 0; i < 8; ++i)
    {
        cout << pQueue.dequeue().getOrderNumber() << endl;
    }
}