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
    Order heapArray[];
    
    public:
    void insert(Order newOrder);
    int left(int i);
    int right(int i);
    int parent(int i);
    void swap(Order *x, Order *y);
    void heapify(int i);
    Order popMin();
};

#endif