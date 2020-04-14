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
    makeUpperCase(fName);
    makeUpperCase(lName);
    makeUpperCase(streetName);
    makeUpperCase(cityName);
    makeUpperCase(stateName);
    Node* temp = new (nothrow) Node;
    if(temp == nullptr)
    {
        cout << "Node Failed to allocate memory\n";
    }
    else
    {
            
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

    inFile.open("/Volumes/Vindrive/college/spring-2020/data_structures/labs/address-book/input.txt");

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
    
    inFile.close();
}

//Printing address book
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

//Deleting a node/contact
void AddressBook::removeContact(string lookUp)
{
    Node *current = head;
    Node *temp = nullptr;


    //If head is node to be deleted
    if(current != nullptr && (current->record.getNumber() == lookUp || current->record.getLastName() == lookUp))
    {
        head = current->next;
        cout << "\nRecord being deleted: \n";
        current->record.printRecord();
        delete current;
        cout << "\nNew head: \n";
        head->record.printRecord();
        return;
    }

    while (current != nullptr && (current->record.getLastName() != lookUp && current->record.getNumber() != lookUp))
    {
        temp = current;
        current = current->next;
    }

    if(current == nullptr)
    {
        cout << "\nRecord not found, and was not deleted" << endl;
        return;
    }
    //Creating new tail if old one was deleted
    if(current->next == nullptr)
    {
        tail = temp;
    }
    temp->next = current->next;
    cout << "\nRecord being deleted: \n";
    current->record.printRecord();
    delete current;
};

//function to print last item added to the list
void AddressBook::printLast()
{
    tail->record.printRecord();
}

//Searching for a contact by last name or number
void AddressBook::searchAddress(string lookUp)
{
    Node *current = head;
    bool found = false;
    int count = 1;

    while(current != nullptr && !found)
    {
        if (current->record.getLastName() == lookUp || current->record.getNumber() == lookUp)
        {
            cout << "\nRecord Found: " << endl;
            current->record.printRecord();
            found = true;
        } 
        current = current->next;
    }
    if (!found)
    {
        cout << "\nSorry record was not found!" << endl;
    }
}

//Delete function for destructor
void AddressBook::deleteList()
{
    Node *current = head;
    Node *temp;

    while(current != nullptr)
    {
        temp = current->next;
        cout << "\nDeleting: ";
        current->record.printRecord();
        delete current;
        current = temp;
    }
    head = nullptr;
    tail = nullptr;
}

//destructor
AddressBook::~AddressBook()
{
    cout << "\nDestructor called" << endl;
    deleteList();
};

//Export data to text file
void AddressBook::exportData()
{
    Node *current = head;
    ofstream outFile;

    outFile.open("/Volumes/Vindrive/college/spring-2020/data_structures/labs/address-book/output.txt", ofstream::out);
    if (!outFile)
    {
        cout << "\nERROR: Problem opening file \n";
    }
    else
    {
        cout << "\nExporting data to file" << endl;
    }
    

    while(current != nullptr)
    {
        outFile << current->record.getFullRecord() << endl;
        current = current->next;
    }

    outFile.close();
};