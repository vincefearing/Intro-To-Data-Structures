#include "../include/ET.h"

// Node Definitions

// Node constructor

ET::Node::Node()
{
    left = nullptr;
    right = nullptr;
}

// Method to set the node data
void ET::Node::setData(char dataIn)
{
    data = dataIn;
}

// ET Definitions

void ET::newNode(char data)
{
    Node *temp = new Node;
    temp->setData(data);
    
}