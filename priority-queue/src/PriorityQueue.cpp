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
    }

    heapSize ++;
    int i = heapSize - 1;
    heapArray[i] = newOrder;
    reHeapUp(0, heapSize -1);

    /*while (i != 0 && heapArray[parent(i)].getPriority() > heapArray[i].getPriority())
    {
        swap(&heapArray[i], &heapArray[parent(i)]);
        i = parent(i);
    }*/

}

Order PriorityQueue::dequeue()
{
    Order root = heapArray[0];
    heapArray[0] = heapArray[heapSize-1];
    heapSize --;
    reHeapDown(0, heapSize - 1);
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

void PriorityQueue::reHeapDown(int i, int bottom)
{
    int leftChild = left(i);
    int rightChild = right(i);
    int smallestChild = i;

    if (leftChild <= bottom)
    {
        if (leftChild == bottom)
        {
            smallestChild = leftChild;
        }
        else
        {
            if (heapArray[leftChild].getPriority() > heapArray[rightChild].getPriority() /*&& heapArray[leftChild].getOrderNumber() >= heapArray[rightChild].getOrderNumber()*/)
            {
                smallestChild = rightChild;
            }
            else
            {
                smallestChild = leftChild;
            }
        }
    }
    if (heapArray[i].getPriority() > heapArray[smallestChild].getPriority() /*&& heapArray[i].getOrderNumber() > heapArray[smallestChild].getOrderNumber()*/)
    {
        swap(&heapArray[i], &heapArray[smallestChild]);
        reHeapDown(smallestChild, bottom);
    }

    /*if(leftChild < heapSize && heapArray[leftChild].getPriority() < heapArray[i].getPriority())
    {
        smallestChild = leftChild;
    }
    else if (rightChild < heapSize && heapArray[rightChild].getPriority() < heapArray[smallestChild].getPriority())
    {
        smallestChild = rightChild;
    }

    if (smallestChild != i)
    {
        swap(&heapArray[i], &heapArray[smallestChild]);
        reHeapDown(smallestChild, bottom);
    }*/
    

}