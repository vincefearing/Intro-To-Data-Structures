#pragma once
#include <string>
#include <iostream>

using namespace std;

class Address {
    private:
    int strNum;
    string street;
    string city;
    string state;
    int zip;

    public:
    Address();
    Address(int streetNum, string streetName, string cityName, string stateName, int zipCode);
};