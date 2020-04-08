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
    cout << strNum << " " << street << " " << city << ", " << state << " " << zip;
}

string Address::getStrNum()
{
    return strNum;
}
string Address::getStreet()
{
    return street;
}
string Address::getCity()
{
    return city;
}
string Address::getState()
{
    return state;
}
string Address::getZip()
{
    return zip;
}