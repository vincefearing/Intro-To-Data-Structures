#ifndef PriorityQueue_h
#define PriorityQueue_h

#include "Order.h"
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class PriorityQueue
{
    private:
    int capacity;
    int heapSize;
    Order *heapArray;
    
    public:
    PriorityQueue();
    void enqueue(Order newOrder);
    int left(int i);
    int right(int i);
    int parent(int i);
    void swap(Order *x, Order *y);
    void reHeapDown(int i, int bottom);
    void reHeapUp(int i, int bottom);
    Order dequeue();
};

#endif