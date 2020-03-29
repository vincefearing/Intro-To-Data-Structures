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