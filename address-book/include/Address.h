#ifndef Address_h
#define Address_h
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
    string getStrNum() const;
    string getStreet() const;
    string getCity() const;
    string getState() const;
    string getZip() const;
};

#endif