#ifndef Menu_h
#define Menu_h

#include <iostream>
#include <fstream>
#include <string>
#include "CircLinkedList.h"

using namespace std;

class Menu
{
    private:
    CircLinkedList people;

    public:
    void importNames(int amount);
    void startMenu();
    void validateInput(int userChoice, int menuLength);
    void play();
};

#endif