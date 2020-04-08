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
    string formNum = phoneNum;
    formNum.insert(0, "(");
    formNum.insert(4, ")");
    formNum.insert(5, " ");
    formNum.insert(9, " ");
    cout << firstName << " " << lastName << "   "; 
    address.printAddress(); 
    cout << "   " << formNum << endl;
}

string Record::getNumber() const
{
    return phoneNum;
}

string Record::getLastName() const
{
    return lastName;
}

string Record::getFullAddress()
{
    string fullAddress;
    string formNum = phoneNum;
    formNum.insert(0, "(");
    formNum.insert(4, ")");
    formNum.insert(5, " ");
    formNum.insert(9, " ");
    fullAddress = firstName + " " + lastName + "    " + address.getStrNum() + " " + address.getStreet() + " " + address.getCity() + ", " + address.getState() + address.getZip() + "    " + formNum;

    return fullAddress;
}