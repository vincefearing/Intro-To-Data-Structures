#include "../include/StackDS.h"

using namespace std;

//Stack Constructor
template <typename T>
StackDS<T>::StackDS()
{
    head = nullptr;
}

//Node constructor
template <typename T>
StackDS<T>::Node::Node()
{
    next = nullptr;
}

//Setting nodes data using any data type T
template <typename T>
void StackDS<T>::Node::setData(T dataIn)
{
    data = dataIn;
}

//Pushes new item on top of the stack
template <typename T>
void StackDS<T>::push(T dataIn)
{
    Node *temp = new (nothrow) Node;
    if (temp == nullptr)
    {
        cout << "Node failed to allocate memory\n";
    }
    else
    {
        temp.setData(dataIn);

        if (head = nullptr)
        {
            head = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        temp = nullptr;
    }
}