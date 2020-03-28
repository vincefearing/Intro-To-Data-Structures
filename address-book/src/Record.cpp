#include "../include/Record.h"
#include <iostream>
#include <string>

using namespace std;

Record::Record(){};

Record::Record(string fName, string lName, int phoneNumber, int streetNum, string streetName, string cityName, string stateName, int zipCode)
{
    firstName = fName;
    lastName = lName;
    phoneNum = phoneNumber;
    address.setAddress(streetNum, streetName, cityName, stateName, zipCode);
}