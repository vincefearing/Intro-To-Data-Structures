#include "../include/Game.h"

void Game::importNames()
{
    string name;
    int place = 1;
    ifstream inFile;

    inFile.open("/Volumes/Vindrive/college/spring-2020/data_structures/labs/hot-potato/input.txt");
    if(!inFile)
    {
        cout << "Sorry problem opening the file" << endl;
    }

    while (!inFile.eof())
    {
        inFile >> name;
        cout << "\nAdding " << name << " at place " << place << endl;
        people.append(name, place);
        place++;
    }
}

void Game::menu()
{
    int userChoice = 0;
    bool quit = false;

    while (quit == false)
    {
        cout << "\nPlease choose a number from the list below \n\n"
        << "1. Import list of people\n"
        << "2. Delete person \n"
        << "3. Print List \n"
        << "4. Reverse Print List \n"
        << "5. Quit" << endl;
        cin >> userChoice;
        validateInput(userChoice, 5);

        switch (userChoice)
        {
        case 1 : importNames();
            break;
        case 2 : deleteItem();
            break;
        case 3 : people.printList();
            break;
        case 4 : people.reversePrintList();
            break;
        case 5 : quit = true;
            break;
        }  
    }
}

void Game::deleteItem()
{
    int position = 0;
    cout << "\nPosition to delete" << endl;
    cin >> position;
    cout << "Position searched: " << position << endl;
    people.removeItem(position);
}

void Game::validateInput(int userChoice, int menuLength)
{
    if(!cin || (userChoice > menuLength || userChoice < 1))
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "\nIncorrect input. Please choose a single digit corresponding to your desired menu item" << endl;
    }
}