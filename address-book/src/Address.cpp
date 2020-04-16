#include "../include/Address.h"
#include <iostream>
#include <string>

using namespace std;

void Address::setAddress(string streetNum, string streetName, string cityName, string stateName, string zipCode)
{
    strNum = streetNum;
    street = streetName;
    city = cityName;
    state = stateName;
    zip = zipCode;
}

void Address::printAddress()
{
    cout << strNum << " " << street << " " << city << ", " << state << "  " << zip;
}

string Address::getStrNum() const
{
    return strNum;
}
string Address::getStreet() const
{
    return street;
}
string Address::getCity() const
{
    return city;
}
string Address::getState() const
{
    return state;
}
string Address::getZip() const
{
    return zip;
}