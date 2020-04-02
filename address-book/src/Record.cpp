#include "../include/Record.h"
#include <iostream>
#include <string>

using namespace std;

void Record::setRecord(string fName, string lName, string phoneNumber, string streetNum, string streetName, string cityName, string stateName, string zipCode)
{
    firstName = fName;
    lastName = lName;
    phoneNum = phoneNumber;
    address.setAddress(streetNum, streetName, cityName, stateName, zipCode);
}

void Record::printRecord()
{
    cout << firstName << " " << lastName << " "; address.printAddress(); cout << " " << phoneNum << endl;
}

string Record::getNumber()
{
    return phoneNum;
}

string Record::getLastName()
{
    return lastName;
}