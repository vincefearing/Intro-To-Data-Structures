#pragma once
#include "Record.h"
#include <iostream>
#include <string>

using namespace std;

class Node
{
    public:
    Record record;
    Node *next;
};