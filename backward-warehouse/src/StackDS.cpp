#include "../include/StackDS.h"

using namespace std;

template <typename U>
StackDS::Node<U>::Node(U dataIn) //goal: try and figure out how templates work for nested loops
{
    data = dataIn;
    next = nullptr;
};