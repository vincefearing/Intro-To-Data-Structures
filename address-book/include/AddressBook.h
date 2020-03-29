#pragma once
#include "Node.h"
#include "Record.h"
#include <string>

using namespace std;

class AddressBook
{
    private:
    Node* head;
    Node* tail;

    public:
    AddressBook();
    void addContact(string fName, string lName, int phoneNumber, int streetNum, string streetName, string cityName, string stateName, int zipCode);
    //void removeContact();
    //searchAddress();
    void importData();
    //exportData

};