#include "../include/PriorityQueue.h"

PriorityQueue::PriorityQueue()
{
    heapSize = 0;
    capacity = 50;
    heapArray = new Order[50];
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
    Order temp = *x;
    *x = *y;
    *y = temp;
}

void PriorityQueue::enqueue(Order newOrder)
{
    if (heapSize == capacity)
    {
        cout << "Overflow has occured, you've reached the max capacity of queue" << endl;
        return;
    }

    heapSize ++;
    int i = heapSize - 1;
    heapArray[i] = newOrder;
    reHeapUp(0, heapSize -1);

}

Order PriorityQueue::dequeue()
{
    Order root = heapArray[0];
    heapArray[0] = heapArray[heapSize-1];
    heapSize --;
    reHeapDown(0, heapSize);
    return root;
}

void PriorityQueue::reHeapUp(int i, int bottom)
{
    int p;
    if (bottom > i)
    {
        p = parent(bottom);
        if (heapArray[p].getPriority() > heapArray[bottom].getPriority())
        {
            swap(&heapArray[p], &heapArray[bottom]);
            reHeapUp(i, p);
        }
    }
}

void PriorityQueue::reHeapDown(int root, int bottom)
{
    int leftChild = left(root);
    int rightChild = right(root);
    int smallestChild = leftChild;
    if (leftChild <= bottom)
    {
        if (leftChild == bottom)
        {
            smallestChild = leftChild;
        }
        else
        {
            if (heapArray[leftChild].getPriority() == heapArray[rightChild].getPriority())
            {
                if (heapArray[leftChild].getOrderNumber() < heapArray[rightChild].getOrderNumber())
                {
                    smallestChild = leftChild;
                }
                else
                {
                    smallestChild = rightChild;
                }
            }
            else
            {
                if (heapArray[leftChild].getPriority() <= heapArray[rightChild].getPriority())
                {
                    smallestChild = leftChild;
                }
                else if (heapArray[rightChild].getPriority() <= heapArray[leftChild].getPriority())
                {
                    smallestChild = rightChild;
                }
            }
        }
        swap(&heapArray[root], &heapArray[smallestChild]);
        reHeapDown(smallestChild, bottom);
        /*if (heapArray[root].getPriority() >= heapArray[smallestChild].getPriority())
        {
            if (heapSize > 2)
            {
                swap(&heapArray[root], &heapArray[smallestChild]);
                reHeapDown(smallestChild, bottom);
            }
        }*/   
    }
}

void PriorityQueue::printQueue()
{
    for (int i = 0; i < heapSize; ++i)
    {
        cout << heapArray[i].getOrderNumber() << endl;
    }
}

bool PriorityQueue::isEmpty()
{
    if (heapSize == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}