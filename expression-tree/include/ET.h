#ifndef ET_h
#define ET_h
#include <iostream>

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

    public:
    void newNode(char data);
};

#endif