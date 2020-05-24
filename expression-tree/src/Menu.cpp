#include "../include/Menu.h"

void Menu::mainMenu()
{
    int userChoice = 0;
    bool quit = false;

    while (quit == false)
    {
        cout << "\nWelcome!\n\n"
        << "1. Add delivery\n"
        << "2. Add order\n"
        << "3. Print delivery info\n"
        << "4. Print order info\n"
        << "5. Quit" << endl;
        cin >> userChoice;
        validateInput(userChoice, 5);

        switch (userChoice)
        {
        case 1 : expressionTree.createTree();
            break;
        case 2 : 
            break;
        case 3 : 
            break;
        case 4 : 
            break;    
        case 5 : quit = true;
            break;
        }  
    }
};

void Menu::importExpressions()
{
    ifstream inFile;

    inFile.open("/Volumes/Vindrive/college/spring-2020/data_structures/labs/expression-tree/input.txt");
}