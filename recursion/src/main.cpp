#include <iostream>
#include <string>
#include <vector>

using namespace std;

int powerOf(int base, int power);

int main() 
{
    int base = -5;
    int power = -5;

    cout << powerOf(base, power) << endl;
    return 0;
}

int powerOf(int base, int power) 
{   
    double result = base;
    if (power == 1) 
    {
        return result;
    } else
    {
        return result *= powerOf(base, power-1);
    }
    
    
    
    
}