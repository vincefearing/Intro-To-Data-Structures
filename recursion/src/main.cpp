#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

float powerOf(float base, int power);

int main() 
{
    float base = 4;
    int power = -2;

    cout << powerOf(base, power) << endl;
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