#include "../include/Menu.h"

//Application user interface
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
        case 1 : deliveryMenu();
            break;
        case 2 : orderMenu();
            break;
        case 3 : warehouse.printDeliveryInfo();
            break;
        case 4 : warehouse.printOrderStack();
            break;    
        case 5 : quit = true;
            break;
        }  
    }
};

//This validates menu input
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

    cout << "Number of widgets?\n\n";
    cin >> widgetCount;
    if (widgetCount <= 0)
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "\nError: Delivery amount can't be less than 1.\n";
        return; 
    }
    cout << "Price per widget?\n\n";
    cin >> widgetPrice;
    if (widgetPrice <= 0)
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "\nError: Price cannot be zero or less.\n";
        return; 
    }

    warehouse.addDelivery(widgetCount, widgetPrice);
}

//Submenu to handle placing orders
void Menu::orderMenu()
{
    int amountOrdered = 0;

    cout << "How many widgets would you like to order?\n\n";
    cin >> amountOrdered;
    if (amountOrdered <= 0)
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "\nError: Order number can't be less than 1" << endl;
        return; 
    }

    warehouse.addOrder(amountOrdered);
}