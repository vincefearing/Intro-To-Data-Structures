#pragma once
#include "Node.h"
#include <string>

using namespace std;

class AddressBook
{
    private:
    Node* head;
    Node* tail;

    public:
    AddressBook();
    void append();
};