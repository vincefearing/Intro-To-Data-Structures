#ifndef StackDS_h
#define StackDS_h

#include <iostream>
#include <string>

using namespace std;

template <typename T>
class StackDS
{
    private:
    template <typename U>
    class Node
    {
        public:
        U data;
        Node *next;
        Node(U dataIn);
    };
    Node<T> *head;
};

#endif