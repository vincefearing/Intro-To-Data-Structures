#include "../include/Address.h"
#include <iostream>
#include <string>

using namespace std;

void Address::setAddress(int streetNum, string streetName, string cityName, string stateName, int zipCode)
{
    strNum = streetNum;
    street = streetName;
    city = cityName;
    state = stateName;
    zip = zipCode;
}