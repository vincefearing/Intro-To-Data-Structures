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
void menu(); //user menu

int main() 
{
    menu();
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
            case 1 : while(!quit)
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
                cout << "\n" << powerOf(base, power) << "\n" << endl;
                quit = true;
            }
            quit = false; // resetting exit condition
                break;
            case 2 : cout << "\nPlease enter a positve number: ";
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
                break;
            case 3 : cout << "\nPlease enter a positve number: ";
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
                break;
            case 4 : quit = true;
        }

    }

}
//Test Data
/*
Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

1

Please enter a base number: 4

Please enter a power: 4

256

Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

1

Please enter a base number: 4

Please enter a power: 0

1

Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

1

Please enter a base number: 4

Please enter a power: 1

4

Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

1

Please enter a base number: -4

Please enter a power: -5

-0.000976562

Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

1

Please enter a base number: 0

Please enter a power: 2

0

Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

1 

Please enter a base number: 8

Please enter a power: 32

7.92282e+28

Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

5
Incorrect input. Please choose a single digit corresponding to your desired menu item
Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

2

Please enter a positve number: -5
Input must be positive!
Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

2

Please enter a positve number: 5
(5 * 5) + (4 * 4) + (3 * 3) + (2 * 2) + 1 = 55

Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

2

Please enter a positve number: 50
(50 * 50) + (49 * 49) + (48 * 48) + (47 * 47) + (46 * 46) + (45 * 45) + (44 * 44) + (43 * 43) + (42 * 42) + (41 * 41) + (40 * 40) + (39 * 39) + (38 * 38) + (37 * 37) + (36 * 36) + (35 * 35) + (34 * 34) + (33 * 33) + (32 * 32) + (31 * 31) + (30 * 30) + (29 * 29) + (28 * 28) + (27 * 27) + (26 * 26) + (25 * 25) + (24 * 24) + (23 * 23) + (22 * 22) + (21 * 21) + (20 * 20) + (19 * 19) + (18 * 18) + (17 * 17) + (16 * 16) + (15 * 15) + (14 * 14) + (13 * 13) + (12 * 12) + (11 * 11) + (10 * 10) + (9 * 9) + (8 * 8) + (7 * 7) + (6 * 6) + (5 * 5) + (4 * 4) + (3 * 3) + (2 * 2) + 1 = 42925

Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

3

Please enter a positve number: 5
1 + (2 * 2) + (3 * 3) + (4 * 4) + (5 * 5) = 55

Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

3

Please enter a positve number: -10
Input must be positive!
Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

3

Please enter a positve number: 30
1 + (2 * 2) + (3 * 3) + (4 * 4) + (5 * 5) + (6 * 6) + (7 * 7) + (8 * 8) + (9 * 9) + (10 * 10) + (11 * 11) + (12 * 12) + (13 * 13) + (14 * 14) + (15 * 15) + (16 * 16) + (17 * 17) + (18 * 18) + (19 * 19) + (20 * 20) + (21 * 21) + (22 * 22) + (23 * 23) + (24 * 24) + (25 * 25) + (26 * 26) + (27 * 27) + (28 * 28) + (29 * 29) + (30 * 30) = 9455

Please choose option from menu below 

1. Raise To Power
2. Sum Of Squares Ascending
3. Sum Of Squares Descending
4. Quit

4

Terminal will be reused by tasks, pres
*/