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
    int phoneNum;
    Address address;

    public:
    Record();
    void setRecord(string fName, string lName, int phoneNumber, int streetNum, string streetName, string cityName, string stateName, int zipCode);
};