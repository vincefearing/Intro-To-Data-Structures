#pragma once
#include <string>
#include <iostream>

using namespace std;

class Address 
{
    private:
    string strNum;
    string street;
    string city;
    string state;
    string zip;

    public:
    void setAddress(string streetNum, string streetName, string cityName, string stateName, string zipCode);
    void printAddress();
};