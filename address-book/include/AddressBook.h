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
	ifstream inFile;
	string firstName;
	string lastName;
	string stNum;
	string stName;
	string city;
	string state;
	string zip;
	string phoneNum;

	public:
	AddressBook();
	void addContact(string fName, string lName, string phoneNumber, string streetNum, string streetName, string cityName, string stateName, string zipCode);
	void removeContact();
	//searchAddress();
	void importData();
	//exportData
	void printData();

};