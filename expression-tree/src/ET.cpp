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
    Node *t1, *t2;

    for (int i = 0; i < postFixExp.size(); ++i)
    {
        if (isOperand(postFixExp.at(i)))
        {
            root = new (nothrow) Node;
            if (root == nullptr)
            {
                cout << "Node failed to allocate memory" << endl;
                return;
            }
            else
            {
                root->data = postFixExp.at(i);
                expStack.push(root);
            }
        }
        else
        {
            root = new (nothrow) Node;
            if (root == nullptr)
            {
                cout << "Node failed to allocate memory" << endl;
                return;
            }
            else
            {
                root->data = postFixExp.at(i);
                t1 = expStack.peek();
                expStack.pop();
                t2 = expStack.peek();
                expStack.pop();

                root->right = t1;
                root->left = t2;

                expStack.push(root);
            }
        }
    }
    root = expStack.peek();
    expStack.pop();
}

void ET::inOrder(Node * root)
{
    if(root != nullptr)
    {
        cout << "(";
        inOrder(root->left);
        cout << root->data;
        inOrder(root->right);
        cout << ")";
    }
}

void ET::inOrder()
{
    inOrder(root);
}

void ET::postOrder()
{
    postOrder(root);
}

void ET::postOrder(Node * root)
{
    if (root != nullptr)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << "\t";
    }
}

void ET::preOrder()
{
    preOrder(root);
}

void ET::preOrder(Node * root)
{
    if (root != nullptr)
    {
        cout << root->data << "\t";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void ET::deleteTree()
{
    deleteTree(root);
}

void ET::deleteTree(Node * root)
{
    if (root != nullptr)
    {
        deleteTree(root->left);
        deleteTree(root->right);
        delete root;
        //cout << "DELETING NODE" << endl;
    }
    
}

ET::~ET()
{
    deleteTree();
    root = nullptr;
}

bool ET::isEmpty()
{
    if (root == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}