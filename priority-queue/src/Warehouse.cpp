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
    float amountMarkUp;
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

    if ((inventory - orderQty) < 0)
    {
        cout << "\nOrder exceeded widgets on hand.\n"; 
        cout << "\nCurrent Stock: " << inventory << endl;
        return;
    }

    
    int userChoice = 0;
    bool quit = false;

    while (quit == false)
    {
        cout << "Shipping Options:\n\n"
        << "1. Standard\n"
        << "2. Rushed\n"
        << "3. Extreme\n";
        cin >> userChoice;

        if (userChoice < 0 || userChoice > 3)
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "\nIncorrect input. Please choose a single digit corresponding to your desired menu item" << endl;
            quit = false;
        }
        else if (!cin)
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "\nIncorrect input. Please choose a single digit corresponding to your desired menu item" << endl;
            quit = false;        }
        
        else
        {
            quit = true;
        }
        
    }

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
    amountMarkUp = cost * markUp;
    sales = (cost * markUp) + (cost * 0.5) + cost;
    profit = sales - cost;

    temp.loadOrder(orderNumber, priority, orderQty, pricePerUnit, markUp, cost, profit, percentMarkUp, amountMarkUp);
    totalProcessed ++;

    inventory -= orderQty;
    totalWarehouseCost += cost;
    totalCustomerCost += sales;
    totalProfit += profit;

    pQueue.enqueue(temp);
}

void Warehouse::printOrderTable(int choice)
{
    PriorityQueue tempQ;
    Order tempOrder;
    int a = 20;
    
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "\n";
    cout << right << setw(a) << "Order #" << right << setw(a) << "Shipping Option" << right << setw(a) << "Qty Ordered" << right << setw(a) << "Qty Shipped"<< right << setw(a) << "Percent Markup" << right << setw(a) << "Warehouse Cost" << right << setw(a) << "Total Markup" << right << setw(a) << "Customer Cost" << right << setw(a) << "Warehouse Profit" << endl;
    while (pQueue.isEmpty() == false)
    {
        tempOrder = pQueue.dequeue();
        tempOrder.printDataTable(choice);
        tempQ.enqueue(tempOrder);
    }
    while (tempQ.isEmpty() == false)
    {
        tempOrder = tempQ.dequeue();
        pQueue.enqueue(tempOrder);
    }
}

void Warehouse::printStock()
{
    cout << "\nWidgets left in stock: " << inventory;
}

void Warehouse::closeDay(int choice)
{
    int a = 30;
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "\nTOTALS FOR THE DAY\n" << endl;
    cout << left << setw(a) << "Orders Processed:" << right << setw(a) << totalProcessed << "\n" <<
    left << setw(a) << "Cost to Warehouse:" << 
    right << setw(a) << totalWarehouseCost << "\n" <<
    left << setw(a) << "Cost to Customers" << 
    right << setw(a) << totalCustomerCost << "\n" <<
    left << setw(a) << "Profit" <<
    right << setw(a) << totalProfit << endl;

    cout << left << setw(a) << "Inventory on hand:" << right << setw(a) << inventory << endl;

    cout << "\nORDERS PROCESSED\n" << endl;

    printOrderTable(choice);
}