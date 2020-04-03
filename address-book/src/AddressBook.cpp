#include "../include/AddressBook.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//Constructor
AddressBook::AddressBook()
{
    head = nullptr; //nullptr
    tail = nullptr;
};

//method for creating a new node/contact
void AddressBook::addContact(string fName, string lName, string phoneNumber, string streetNum, string streetName, string cityName, string stateName, string zipCode)
{
    Node* temp = new Node;
    temp->record.setRecord(fName, lName, phoneNumber, streetNum, streetName, cityName, stateName, zipCode);
    temp->next = nullptr;

    if (head == nullptr)
    {
        head = temp;
        tail = temp;
        temp = nullptr;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

void AddressBook::importData()
{
    ifstream inFile;
	string firstName;
	string lastName;
	string stNum;
	string stName;
	string city;
	string state;
	string zip;
	string phoneNum;

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
    //Node* current = new Node;
    Node *current = head;
    //current = head;
    while (current != nullptr)
    {
        current->record.printRecord();
        current = current->next;
    }
};

void AddressBook::removeContact(string lookUp)
{
    Node *current = head;
    Node *temp;
    bool found = false;


    //If head is node to be deleted
    if(current != nullptr && current->record.getNumber() == lookUp)
    {
        head = current->next;
        delete current;
    }

    while (current != nullptr && (current->record.getLastName() != lookUp && current->record.getNumber() != lookUp))
    {
        temp = current;
        current = current->next;
    }

    if(current == nullptr)
    {
        cout << "Record not found, and was not deleted" << endl;
        return;
    }
    //Creating new tail if old one was deleted
    if(current->next == nullptr)
    {
        tail = temp;
        cout << "New Tail: ";
        tail->record.printRecord();
    }
    temp->next = current->next;
    cout << "Record being deleted: ";
    current->record.printRecord();
    delete current;
};

void AddressBook::printLast()
{
    tail->record.printRecord();
}

void AddressBook::searchAddress(string lookUp)
{
    Node *current = head;
    bool found = false;
    int count = 1;

    while(current != nullptr && !found)
    {
        if (current->record.getLastName() == lookUp || current->record.getNumber() == lookUp)
        {
            cout << "Record Found: " << endl;
            current->record.printRecord();
            found = true;
        } 
        current = current->next;
        cout << count << endl;
        count ++;
    }
    if (!found)
    {
        cout << "Sorry record was not found!" << endl;
    }
}

void AddressBook::deleteList()
{
    Node *current = head;
    Node *temp;

    while(current->next != nullptr)
    {
        
    }
}

AddressBook::~AddressBook()
{

};