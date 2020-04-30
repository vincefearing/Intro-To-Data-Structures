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
        Node(T dataIn);
    };
    Node<T> *head;
};

#endif