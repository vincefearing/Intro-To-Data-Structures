#include "../include/StackDS.h"

using namespace std;

template <typename U>
StackDS::Node<U>::Node(U dataIn)
{
    data = dataIn;
    next = nullptr;
};