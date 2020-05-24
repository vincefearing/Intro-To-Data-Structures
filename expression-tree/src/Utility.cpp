#include "../include/Utility.h"

int prec(char c)
{
    if (c == '+' || c == '-')
    {
        return 1;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

bool isOperand(char c)
{
    if (isalpha(c) == true || isdigit(c) == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isOperator(char c)
{
    if (c == '*' || c == '/' || c == '+' || c == '-')
    {
        return true;
    }
    else
    {
        return false;
    }
}

string infixToPostfix(string exp)
{
    StackDS <char> expStack;
    string newStr;

    for (int i = 0; i < exp.length(); ++i)
    {
        if (isOperand(exp.at(i)) == true)
        {
            newStr += exp.at(i);
        }
        else
        {
            while (expStack.isEmpty() == false && prec(exp.at(i)) <= prec(expStack.peek()))
            {
                char c = expStack.peek();
                expStack.pop();
                newStr += c;
            }
            expStack.push(exp.at(i));
        }
    }
    while (expStack.isEmpty() == false)
    {
        char c = expStack.peek();
        expStack.pop();
        newStr += c;
    }
    return newStr;
}

void validateInput(int userChoice, int menuLength)
{
    if(!cin || (userChoice > menuLength || userChoice < 1))
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "\nIncorrect input. Please choose a single digit corresponding to your desired menu item" << endl;
    }
}