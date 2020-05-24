#ifndef Menu_h
#define Menu_h
#include <iostream>
#include <string>
#include "ET.h"
#include "Utility.h"
#include <vector>
#include <fstream>
#include <queue>

using namespace std;

class Menu
{
    private:
    ET expressionTree;
    queue <string> expressions;

    public:
    void mainMenu();
    void importExpressions();
    void loadExpression();

};

#endif