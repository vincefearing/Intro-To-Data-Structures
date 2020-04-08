#pragma once
#include "Node.h"
#include "Record.h"
#include <string>
#include <fstream>

using namespace std;

class AddressBook
{
	private:
	Node* head;
	Node* tail;

	public:
	AddressBook();
	~AddressBook();
	void addContact(string fName, string lName, string phoneNumber, string streetNum, string streetName, string cityName, string stateName, string zipCode);
	void removeContact(string lookUp);
	void searchAddress(string lookUp);
	void importData();
	void exportData();
	void printData();
	void printLast();
	void deleteList();
	void makeUpperCase(string & s);

};