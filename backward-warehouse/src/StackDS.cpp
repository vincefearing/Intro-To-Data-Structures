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

        if (head == nullptr)
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

//Returns and deletes item off of the top of the stack
template <typename T>
T StackDS<T>::pop()
{
    Node *temp = head;
    T tempData = head->data;
    if (head == nullptr)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    head = temp->next;
    delete temp;
    temp = nullptr;

}

template <typename T>
void StackDS<T>::deleteStack()
{
    Node *temp = head;

    if (head == nullptr)
    {
        return;
    }

    while (temp != nullptr)
    {
        head = temp->next;
        cout << "Deleting Node" << endl;
        delete temp;
        temp = head;
    }

    temp = nullptr;
}

template <typename T>
StackDS<T>::~StackDS()
{
    deleteStack();
    head = nullptr;
}