/*
Stack data structure using a linked list and template for reusability.
NOTE - templates must be defined within header file (no .cpp file) 
*/
#ifndef StackDS_h
#define StackDS_h
#include <iostream>

#include <iostream>
#include <string>

using namespace std;

template <typename T>
class StackDS
{
    private:
    class Node
    {
        public:
        T data;
        Node *next;
        Node();
        void setData(T inData);
    };
    Node *head;

    public:
    StackDS();
    void push(T dataIn);
    T pop();
    bool isEmpty();
    void deleteStack();
    ~StackDS();
};

//---DEFINITIONS---

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

//Stack Constructor
template <typename T>
StackDS<T>::StackDS()
{
    head = nullptr;
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
        temp->setData(dataIn);

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

/*
Returns and deletes item off of the top of the stack
NOTE -- should always check if stack is empty before using pop
*/
template <typename T>
T StackDS<T>::pop()
{
    Node *temp = head;
    T tempData = head->data;
    head = temp->next;
    delete temp;
    temp = nullptr;
    return tempData;
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

template <typename T>
bool StackDS<T>::isEmpty()
{
    if (head == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

#endif