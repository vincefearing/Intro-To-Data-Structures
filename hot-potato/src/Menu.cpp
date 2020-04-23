#include "../include/Menu.h"

void Menu::importNames(int amount)
{
    string name;
    int place = 1;
    ifstream inFile;

    inFile.open("/Volumes/Vindrive/college/spring-2020/data_structures/labs/hot-potato/input.txt");
    if(!inFile)
    {
        cout << "Sorry problem opening the file" << endl;
    }
    for (int i = 0; i < amount; ++i)
    {
        inFile >> name;
        cout << place << " " << name << endl;
        people.append(name, place);
        place++;
    }
}

void Menu::startMenu()
{
    int userChoice = 0;
    bool quit = false;

    while (quit == false)
    {
        cout << "\nWelcome to hot potato!\n\n"
        << "1. Start game\n"
        << "2. Quit" << endl;
        cin >> userChoice;
        validateInput(userChoice, 2);

        switch (userChoice)
        {
        case 1 : play();
            break;
        case 2 : quit = true;
            break;
        }  
    }
}

void Menu::validateInput(int userChoice, int menuLength)
{
    if(!cin || (userChoice > menuLength || userChoice < 1))
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "\nIncorrect input. Please choose a single digit corresponding to your desired menu item" << endl;
    }
}

void Menu::play()
{
    int playerCount = 0;
    int passes = 0;

        
        cout << "\nHow many players? Pick a number 1 - 10\n";
        cin >> playerCount;
        if (playerCount < 1)
        {
            cout << "\nMinumum of 1 player required!" << endl;
            return;
        }

        cout << "\nHow many passes? Pick a number 0 - 20\n";
        cin >> passes;
        if (passes < 0)
        {
            cout << "\nNumber of passes have to be greater than 0! Please try again." << endl;
            return;
        }

        importNames(playerCount);
        people.gameLoop(passes, playerCount);
        people.~CircLinkedList();
}