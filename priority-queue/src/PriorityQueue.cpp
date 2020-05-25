#include "../include/PriorityQueue.h"

PriorityQueue::PriorityQueue()
{
    heapSize = 0;
    capacity = 50;
    heapArray[capacity];
}

//returns index of left child
int PriorityQueue::left(int i)
{
    int leftChild = (2*i) + 1;
    return leftChild;
}

//returns index of right child
int PriorityQueue::right(int i)
{
    int rightChild = (2*i) + 2;
    return rightChild;
}

//returns index of parent
int PriorityQueue::parent(int i)
{
    int pIndex = floor((i-1)/2);
    return pIndex;
}

void PriorityQueue::swap(Order *x, Order *y)
{
    Order *temp = x;
    x = y;
    y = temp;
}

void PriorityQueue::insert(Order newOrder)
{
    if (heapSize == capacity)
    {
        cout << "Overflow has occured, you've reached the max capacity of queue" << endl;
    }

    heapSize ++;
    int i = heapSize - 1;
    heapArray[i] = newOrder;

    while (i != 0 && parent(heapArray[i].getPriority()) > heapArray[i].getPriority())
    {
        swap(&heapArray[i], &heapArray[parent(i)]);
        i = parent(i);
    }
}

Order PriorityQueue::popMin()
{
    Order root = heapArray[0];
    heapArray[0] = heapArray[heapSize-1];
    heapSize --;
    heapify(0);
    return root;
}

void PriorityQueue::heapify(int i)
{
    int leftChild = left(i);
    int rightChild = right(i);
    int smallest = i;

    if(leftChild < heapSize && heapArray[leftChild].getPriority() < heapArray[i].getPriority())
    {
        smallest = leftChild;
    }
    else if (rightChild < heapSize && heapArray[rightChild].getPriority() < heapArray[smallest].getPriority())
    {
        smallest = rightChild;
    }

    if (smallest != i)
    {
        swap(&heapArray[i], &heapArray[smallest]);
        heapify(smallest);
    }
    

}