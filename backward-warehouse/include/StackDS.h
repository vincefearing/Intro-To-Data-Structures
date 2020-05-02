//Stack data structure using a linked list and template for reusability.
#ifndef StackDS_h
#define StackDS_h

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
    void deleteStack();
    ~StackDS();
};

#endif