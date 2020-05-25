#include <iostream>
#include "../include/PriorityQueue.h"
#include "../include/Order.h"

int main() {
    PriorityQueue pQueue;
    Order order1;
    Order order2;
    Order order3;
    Order order4;
    Order order5;
    
    order1.setTestData(1, 3);
    order2.setTestData(2, 2);
    order3.setTestData(3, 2);
    order4.setTestData(4, 5);
    order5.setTestData(5, 1);

    pQueue.enqueue(order1);
    pQueue.enqueue(order2);
    pQueue.enqueue(order3);
    pQueue.enqueue(order4);
    pQueue.enqueue(order5);

    for (int i = 0; i < 5; ++i)
    {
        cout << pQueue.dequeue().getPriority() << endl;
    }
}