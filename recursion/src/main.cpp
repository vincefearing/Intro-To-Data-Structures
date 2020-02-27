// Vincent Fearing
// Lab #2
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

float powerOf(float base, int power);
int sumOfSquaresUp(int terms);

int main() 
{
    //float base = -4;
    //int power = 3;
    int terms = 5;

    cout << sumOfSquaresUp(terms) << endl;
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
    const int base = terms;
    int i = 2;
    if (terms < 1)
    {
        return terms;
    } else if (terms <= base) 
    {
        cout << " + (" << i << " * " << i << ")";
        ++i;
        result *= terms;
        return  result += sumOfSquaresUp(terms - 1);
    }
}