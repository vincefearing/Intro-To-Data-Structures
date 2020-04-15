#ifndef Game_h
#define Game_h

#include <iostream>
#include <fstream>
#include <string>
#include "CircLinkedList.h"

using namespace std;

class Game
{
    private:
    CircLinkedList people;

    public:
    void importNames();
    void menu();
    void deleteItem();
    void validateInput(int userChoice, int menuLength);
};

#endif