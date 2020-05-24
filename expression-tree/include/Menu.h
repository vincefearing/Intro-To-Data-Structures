#ifndef Menu_h
#define Menu_h
#include <iostream>
#include <string>
#include "ET.h"
#include "Utility.h"
#include <vector>
#include <fstream>

using namespace std;

class Menu
{
    private:
    ET expressionTree;
    vector <string> expressions;

    public:
    void mainMenu();
    void importExpressions();

};

#endif