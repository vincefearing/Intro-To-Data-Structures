// Vincent Fearing
// Lab #2
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

float powerOf(float base, int power); //raises given number to the given power
int sumOfSquaresUp(int terms); // returns the sum of squares in ascending order
int sumOfSquaresDown(int terms); // returns the sum of squares in descending order
void menu();

int main() 
{
    
    return 0;
}

float powerOf(float base, int power) 
{   
    float result = base;
    if (power == 1) 
    {
        return result;
    } else if (power == 0)
    {
        return result = 1;
    } else if (power > 1)
    {
        return result *= powerOf(base, power - 1);
    } else if (power < 0)
    {
        power = abs(power);
        result *= powerOf(base, power - 1);
        return 1 / result;
    }
}

int sumOfSquaresUp(int terms)
{
    int result = terms;
    if (terms == 1)
    {
        cout << "1";
        return 1;
    } else 
    {
        result *= terms;
        result += sumOfSquaresUp(terms - 1);
        cout << " + (" << terms << " * " << terms << ")";
        return result;
    }
}

int sumOfSquaresDown(int terms)
{
    int result;
    if (terms == 1)
    {
        cout << "1";
        return 1;
    } else if (terms > 1)
    {
        cout << "(" << terms << " * " << terms << ") + ";
        result = sumOfSquaresDown(terms - 1);
        return (terms * terms) + result;
    }
}

void menu()
{
    int userChoice;
        
}

