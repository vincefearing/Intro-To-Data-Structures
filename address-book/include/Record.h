#pragma once
#include <iostream>
#include <string>
#include "Address.h"

using namespace std;

class Record 
{
    private:
    string firstName;
    string lastName;
    string phoneNum;
    Address address;

    public:
    Record();
    void setRecord(string fName, string lName, string phoneNumber, string streetNum, string streetName, string cityName, string stateName, string zipCode);
};