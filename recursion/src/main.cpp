// Vincent Fearing
// Lab #2 T
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

float powerOf(float base, int power); //raises given number to the given power
void powerMenu(); //Menu for power function
int sumOfSquaresUp(int terms); // returns the sum of squares in ascending order
void squareUpMenu(); //Menu for square ascending function
int sumOfSquaresDown(int terms); // returns the sum of squares in descending order
void squareDownMenu();//Menu for Square descending function
void menu(); //user menu

int main() 
{
    menu();
    return 0;
}

float powerOf(float base, int power) 
{   

    float result = base;
    if (base == 0 && power < 0)
    {
        cout << "Undefined, can't divide by ";
        return 0;
    }
    else if (power == 1) 
    {
        return result;
    } 
    else if (power == 0)
    {
        return result = 1;
    } 
    else if (power > 1)
    {
        return result *= powerOf(base, power - 1);
    } 
    else if (power < 0)
    {
        power = abs(power);
        result *= powerOf(base, power - 1);
        return 1 / result;
    }
}

void powerMenu()
{
    bool quit = false;
    float base = 0;
    int power = 0;
    while(!quit)
    {
        cout << "\nPlease enter a base number: ";
        cin >> base;
        if(!cin)
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Incorrect input. Please choose any real number." << endl;
        }
        cout << "\nPlease enter a power: ";
        cin >> power;
        if(!cin)
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Incorrect input. Please choose any real number" << endl;
        }
        cout << "\n" << "Result: " << base << " ^ " << power << " = " << powerOf(base, power) << "\n" << endl;
        quit = true;
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

void squareUpMenu()
{
    int solution = 0;
    float base = 0;

    cout << "\nPlease enter a number above 0: ";
    cin >> base;
    if(!cin || base < 1)
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Input must be positive!" << endl;
    } else if (base > 1)
    {
        solution = sumOfSquaresUp(base);
        cout << " = " << solution << "\n" << endl;
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

void squareDownMenu()
{
    int solution = 0;
    float base = 0;
    cout << "\nPlease enter a positve number: ";
    cin >> base;
    if(!cin || base < 1)
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Input must be positive!" << endl;
    } else if (base > 1)
    {
        solution = sumOfSquaresDown(base);
        cout << " = " << solution << "\n" << endl;
    }
}

void menu()
{
    int userChoice;
    bool quit = false;
    int solution = 0;
    float base = 0;
    float power = 0;

    while(!quit)
    {
        cout << "Please choose option from menu below \n\n" << "1. Raise To Power\n" << "2. Sum Of Squares Ascending\n" << "3. Sum Of Squares Descending\n" << "4. Quit\n" << endl;
        cin >> userChoice;
        if(!cin || (userChoice < 1 || userChoice > 4))
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Incorrect input. Please choose a single digit corresponding to your desired menu item" << endl;
        }
        
        switch(userChoice)
        {
            case 1 : powerMenu();
                break;
            case 2 : squareUpMenu();
                break;
            case 3 : squareDownMenu();
                break;
            case 4 : quit = true;
        }

    }

}

/*
1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

1

Please enter a base number: 3

Please enter a power: 3

Result: 3 ^ 3 = 27

Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

1

Please enter a base number: 2

Please enter a power: -3

Result: 2 ^ -3 = 0.125

Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

1

Please enter a base number: 4

Please enter a power: 1

Result: 4 ^ 1 = 4

Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

1

Please enter a base number: 0

Please enter a power: 4

Result: 0 ^ 4 = 0

Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

1

Please enter a base number: 0 

Please enter a power: -4

Result: 0 ^ -4 = Undefined, can't divide by 0

Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

2

Please enter a number above 0: 4
1 + (2 * 2) + (3 * 3) + (4 * 4) = 30

Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

3

Please enter a positve number: 6
(6 * 6) + (5 * 5) + (4 * 4) + (3 * 3) + (2 * 2) + 1 = 91

Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit
*/