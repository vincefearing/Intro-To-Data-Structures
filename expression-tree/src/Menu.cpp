#include "../include/Menu.h"

void Menu::mainMenu()
{
    int userChoice = 0;
    bool quit = false;
    importExpressions();

    while (quit == false)
    {
        cout << "\n"
        << "1. Load Next Expression\n"
        << "2. Display Preorder\n"
        << "3. Display Postorder\n"
        << "4. Display Inorder\n"
        << "5. Quit" << endl;
        cin >> userChoice;
        validateInput(userChoice, 5);

        switch (userChoice)
        {
        case 1 : loadExpression();
            break;
        case 2 : expressionTree.preOrder();
            break;
        case 3 : expressionTree.postOrder();
            break;
        case 4 : expressionTree.inOrder();
            break;    
        case 5 : quit = true;
            break;
        }  
    }
};

void Menu::importExpressions()
{
    ifstream inFile;
    string temp;

    inFile.open("/Volumes/Vindrive/college/spring-2020/data_structures/labs/expression-tree/input.txt");
    if(!inFile)
    {
        cout << "Error: Problem opening file!" << endl;
    }

    while (!inFile.eof())
    {
        inFile >> temp;
        expressions.push(temp);
    }

    inFile.clear();
}

void Menu::loadExpression()
{
    if (expressionTree.isEmpty() == false)
    {
        expressionTree.deleteTree();
        expressions.pop();
    }
    string temp = expressions.front();
    string postFix = infixToPostfix(temp);
    expressionTree.createTree(postFix);
    cout << "\nExpression Loaded: " << temp << endl;
}