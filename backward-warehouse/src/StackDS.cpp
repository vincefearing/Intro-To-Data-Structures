#include "../include/StackDS.h"

using namespace std;

template <typename T>
StackDS<T>::Node::Node(T dataIn)
{
    data = dataIn;
    next = nullptr;
};