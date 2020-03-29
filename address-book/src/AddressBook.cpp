#include "../include/AddressBook.h"
#include <iostream>
#include <string>

using namespace std;

//Constructor
AddressBook::AddressBook()
{
    head = NULL;
    tail = NULL;
};

void AddressBook::addContact(string fName, string lName, int phoneNumber, int streetNum, string streetName, string cityName, string stateName, int zipCode)
{
    Node* temp = new Node;
    temp->record.setRecord(fName, lName, phoneNumber, streetNum, streetName, cityName, stateName, zipCode);
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        tail = temp;
        temp = NULL;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
    
}