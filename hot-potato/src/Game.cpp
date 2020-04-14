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