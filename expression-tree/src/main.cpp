#include <iostream>
#include <string>
#include "../include/StackDS.h"
#include "../include/Utility.h"
#include "../include/ET.h"

using namespace std;

int main() {
    string s = "3+5/7";
    string postFix = infixToPostfix(s);
    ET expTree;
    expTree.createTree(postFix);
    expTree.preOrder();
}