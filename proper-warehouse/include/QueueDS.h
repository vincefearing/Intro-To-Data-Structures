/*
Queue data structure using a linked list and template for reusability.
NOTE - templates must be defined within header file (no .cpp file) 
*/
#ifndef QueueDS_h
#define QueueDS_h

#include <iostream>
#include <string>

using namespace std;

template <typename T>
class QueueDS
{
    private:
    class Node
    {
        public:
        T data;
        Node *next;
        Node();
        //Node(const Node &that);
        void setData(T inData);
    };
    Node *head;
    Node *tail;

    public:
    QueueDS();
    void push(T dataIn);
    T pop();
    T &front();
    bool isEmpty();
    void deleteStack();
    T peek();
    
    ~QueueDS();
};

//---DEFINITIONS---

//Node constructor
template <typename T>
QueueDS<T>::Node::Node()
{
    next = nullptr;
}

//Node copy constructor
/*template <typename T>
QueueDS<T>::Node::Node(const Node &that)
{
    next = new Node;
    *next = *that.next;
    data = that.data;
}*/

//Setting nodes data using any data type T
template <typename T>
void QueueDS<T>::Node::setData(T dataIn)
{
    data = dataIn;
}

//Stack Constructor
template <typename T>
QueueDS<T>::QueueDS()
{
    head = nullptr;
    tail = nullptr;
}

//Pushes new item on top of the stack
template <typename T>
void QueueDS<T>::push(T dataIn)
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
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        temp = nullptr;
    }
}

/*
Returns and deletes item off of the top of the stack
NOTE -- should always check if stack is empty before using pop
*/
template <typename T>
T QueueDS<T>::pop()
{
    Node *temp = head;
    T tempData = head->data;
    head = temp->next;
    delete temp;
    temp = nullptr;
    return tempData;
}

template <typename T>
void QueueDS<T>::deleteStack()
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
QueueDS<T>::~QueueDS()
{
    deleteStack();
    head = nullptr;
    tail = nullptr;
}

template <typename T>
bool QueueDS<T>::isEmpty()
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

template <typename T>
T &QueueDS<T>::front()
{
    return head->data;
}

template <typename T>
T QueueDS<T>::peek()
{
    return head->data;
}

#endif