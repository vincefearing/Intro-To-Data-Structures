#ifndef ET_h
#define ET_h
#include <iostream>
#include "Utility.h"
#include <string>

using namespace std;

class ET
{
    private:
    class Node
    {
        public:
        char data;
        Node *left;
        Node *right;
        Node();
        void setData(char inData);
    };
    Node *root;

    public:
    void createTree(string expression);
    ET();
    void inOrder();
    void inOrder(Node * root);
    void postOrder();
    void postOrder(Node * root);
    void preOrder();
    void preOrder(Node * root);
};

#endif