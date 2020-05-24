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

ET::ET()
{
    root = nullptr;
}

//Creates an infix expression tree from a postfix expression
void ET::createTree(string postFixExp)
{
    StackDS <Node*> expStack;
    Node *t, *t1, *t2;

    for (int i = 0; i < postFixExp.size(); ++i)
    {
        if (isOperand(postFixExp.at(i)))
        {
            t = new (nothrow) Node;
            if (t == nullptr)
            {
                cout << "Node failed to allocate memory" << endl;
                return;
            }
            else
            {
                t->data = postFixExp.at(i);
                expStack.push(t);
            }
        }
        else
        {
            t = new (nothrow) Node;
            if (t == nullptr)
            {
                cout << "Node failed to allocate memory" << endl;
                return;
            }
            else
            {
                t1 = expStack.peek();
                expStack.pop();
                t2 = expStack.peek();
                expStack.pop();

                t->right = t1;
                t->left = t2;

                expStack.push(t);
            }
        }
    }
    t = expStack.peek();
    expStack.pop();
    root = t;
}