#include "../include/Menu.h"
#include <iostream>
#include <string>

using namespace std;

void Menu::mainMenu(AddressBook & addressBook)
{
    int userChoice = 0;
    bool quit = false;

    while (quit == false)
    {
        cout << "Please choose a number from the list below \n\n"
        << "1. Print Address Book \n"
        << "2. Search Address \n"
        << "3. Add Address \n"
        << "4. Delete Item \n"
        << "5. Export Address Book \n"
        << "6. Quit" << endl;
        cin >> userChoice;
        validateInput(userChoice, 6);

        switch (userChoice)
        {
        case 1 : addressBook.printData();
            break;
        case 2 : searchMenu(addressBook);
            break;
        case 3 : addMenu(addressBook);
            break;
        case 4 : removeMenu(addressBook);
            break;
        case 5 : addressBook.exportData();
            break;
        case 6 : quit = true;
        }  
    }
};

void Menu::addMenu(AddressBook & addressBook)
{
    string firstName;
	string lastName;
	string stNum;
	string stName;
	string city;
	string state;
	string zip;
	string phoneNum;

    cout << "Adding a new contact, what is the.. \n\n" << "First name? \n";
    cin >> firstName;
    cout << "\nLast name?\n";
    cin >> lastName;
    cout << "\nStreet number?\n";
    cin >> stNum;
    cout << "\nStreet name?\n";
    cin >> stName;
    cout << "\nCity?\n";
    cin >> city;
    cout << "\nState?\n";
    cin >> state;
    cout << "\nZip Code?\n";
    cin >> zip;
    cout << "\nPhone number?\n";
    cin >> phoneNum;
    cout << endl;

    addressBook.addContact(firstName, lastName, phoneNum, stNum, stName, city, state, zip);

    cout << "Contact created: " << endl; 
    addressBook.printLast();
};

void Menu::removeMenu(AddressBook & addressBook)
{
    string lookUp;
    cout << "Please enter the phone number or last name of the contact you would like to delete: " << endl;
    cin >> lookUp;
    addressBook.removeContact(lookUp);
};

void Menu::searchMenu(AddressBook & addressBook)
{
    string lookUp;

    cout << "Type in the number or last name of the persons address you are trying to find: " << endl;
    cin >> lookUp;
    addressBook.searchAddress(lookUp);
};

void Menu::validateInput(int userChoice, int menuLength)
{
    if(!cin || (userChoice > menuLength || userChoice < 1))
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Incorrect input. Please choose a single digit corresponding to your desired menu item" << endl;
    }
}