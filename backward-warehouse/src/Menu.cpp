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
        << "3. Quit" << endl;
        cin >> userChoice;
        validateInput(userChoice, 3);

        switch (userChoice)
        {
        case 1 : deliveryMenu();
            break;
        case 2 : orderMenu();
            break;
        case 3 : quit = true;
            break;
        }  
    }
};

void Menu::validateInput(int userChoice, int menuLength)
{
    if(!cin || (userChoice > menuLength || userChoice < 1))
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "\nIncorrect input. Please choose a single digit corresponding to your desired menu item" << endl;
    }
}

//Menu to handle placing deliveries
void Menu::deliveryMenu()
{
    int widgetCount = 0;
    float widgetPrice = 0;

    cout << "Number of widgets? \n\n";
    cin >> widgetCount;
    cout << "Price per widget?\n\n";
    cin >> widgetPrice;

    warehouse.addDelivery(widgetCount, widgetPrice);
}

void Menu::orderMenu()
{
    int amountOrdered = 0;

    cout << "How many widgets would you like to order?\n\n";
    cin >> amountOrdered;

    warehouse.addOrder(amountOrdered);
}