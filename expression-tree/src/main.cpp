#include <iostream>
#include <string>
#include "../include/StackDS.h"
#include "../include/Utility.h"

using namespace std;

int main() {
    string s = "3*5/7";
    string newStr = infixToPostfix(s);

    cout << "Old String: " << s << endl;
    cout << "New String: " << newStr << endl;
}