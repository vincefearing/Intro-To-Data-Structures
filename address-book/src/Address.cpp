#include "../include/Address.h"
#include <iostream>
#include <string>

using namespace std;

Address::Address(){};

Address::Address(int streetNum, string streetName, string cityName, string stateName, int zipCode)
{
    strNum = streetNum;
    street = streetName;
    city = cityName;
    state = stateName;
    zip = zipCode;
};