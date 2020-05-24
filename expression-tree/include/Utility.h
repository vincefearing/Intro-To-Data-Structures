#ifndef Utility_h
#define Utility_h

#include <string>
#include <iostream>
#include "StackDS.h"

using namespace std;

//Helper function to check the priority/precedence of operators
int prec(char c);
string infixToPostfix(string exp);
bool isOperand(char c);
bool isOperator(char c);

#endif