#pragma once
#include "record.h"
#include <iostream>
#include <string>

using namespace std;

class Node
{
    private:
    Record record;
    Node *next;
};