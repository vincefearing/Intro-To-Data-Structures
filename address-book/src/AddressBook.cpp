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

void AddressBook::printData()
{
    Node* current = new Node;
    current = head;
    while (current != NULL)
    {
        current->record.printRecord();
        current = current->next;
    }
}