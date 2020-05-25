#include "../include/Warehouse.h"

Warehouse::Warehouse()
{
    inventory = 100;
    pricePerUnit = 6.50;
    ordersProcessed = 0;
    totalWarehouseCost = 0;
    totalCustomerCost = 0;
    totalProfit = 0;
    orderNumber = 0;
    totalProcessed = 0;
}

void Warehouse::addOrder()
{
    int orderQty;
    int priority;
    float markUp;
    float cost;
    float sales;
    float profit;
    int percentMarkUp;
    Order temp;

    cout << "How many widgets would you like to order?" << endl;
    cin >> orderQty;
    if (!cin || orderQty <= 0)
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "\nIncorrect input. Order must be a number greater than or equal to 1" << endl;
        return;
    }

    int userChoice = 0;
    bool quit = false;

    cout << "Shipping Options:\n\n"
    << "1. Standard\n"
    << "2. Rushed\n"
    << "3. Extreme\n";
    cin >> userChoice;
    validateInput(userChoice, 3);

    switch (userChoice)
    {
    case 1 : priority = standard;
        break;
    case 2 : priority = rush;
        break;
    case 3 : priority = extreme;
        break;
    }

    if (priority == standard)
    {
        markUp = 0.10;
    }
    else if (priority == rush)
    {
        markUp = 0.20;
    }
    else
    {
        markUp = 0.50;
    }
    
    orderNumber ++;
    percentMarkUp = markUp * 100;
    cost = pricePerUnit * orderQty;
    sales = (cost * markUp) + cost;
    profit = sales - cost;

    temp.loadOrder(orderNumber, priority, orderQty, pricePerUnit, markUp, cost, profit, percentMarkUp);

    inventory -= orderQty;
    totalProcessed += orderQty;
    totalWarehouseCost += cost;
    totalCustomerCost += sales;
    totalProfit += profit;

}