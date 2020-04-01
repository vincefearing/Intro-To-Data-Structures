#include "../include/AddressBook.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//Constructor
AddressBook::AddressBook()
{
    head = NULL;
    tail = NULL;
};

//method for creating a new node/contact
void AddressBook::addContact(string fName, string lName, string phoneNumber, string streetNum, string streetName, string cityName, string stateName, string zipCode)
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

void AddressBook::importData()
{
    inFile.open("/Volumes/Vindrive/College/Spring 2020/data_structures/labs/address-book/input.txt");

    //Testing if file opened properly
    if (!inFile)
    {
        cout << "Error: Problem opening the file" << endl;
    }

    while(!inFile.eof())
    {
        inFile >> firstName >> lastName >> stNum >> stName >> city >> state >> zip >> phoneNum;
        addContact(firstName, lastName, phoneNum, stNum, stName, city, state, zip);
        //cout << "Contact created" << endl;
    }
    
}

//delete contact/node
void AddressBook::printData()
{
    Node* current = new Node;
    current = head;
    while (current != NULL)
    {
        current->record.printRecord();
        current = current->next;
    }
};

void AddressBook::removeContact(string lookUp)
{
    Node *current = head;
    Node *temp;

    if(lookUp == head->record.getNumber())
    {
        temp = current;
        head = current->next;
    }
    else
    {
        while(current->next->record.getNumber() != lookUp)
        {
            current = current->next;
        }
        temp = current->next;
        current->next = current->next->next;

        //Pointing tail to correct position if end if deleted
        if(current->next == NULL)
        {
            tail = current;
        }
    }
    delete temp;
};

void AddressBook::printLast()
{
    tail->record.printRecord();
}