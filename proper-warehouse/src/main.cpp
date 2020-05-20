#include <iostream>
#include "../include/QueueDS.h"
#include "../include/Delivery.h"
#include "../include/Menu.h"
#include "../include/Order.h"
#include "../include/Shipment.h"
#include "../include/Warehouse.h"
#include <vector>

using namespace std;

int main() {
    Menu menu;
    menu.mainMenu();
}


/*
Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
2
How many widgets would you like to order?

6

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
2
How many widgets would you like to order?

5

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
2
How many widgets would you like to order?

11

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
1
Number of widgets?

5
Price per widget?

7.50

Order Number:                         1
Qty ordered:                          6
Qty shipped this shipment:            5
Qty to be shipped:                    1
Total cost to Warehouse:          37.50
Total cost to customer:           56.25
Profit this shipment:             18.75

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   1                   5                7.50               37.50               56.25

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
1
Number of widgets?

7
Price per widget?

2.30

Order Number:                         1
Qty ordered:                          6
Qty shipped this shipment:            1
Qty to be shipped:                    0
Total cost to Warehouse:           2.30
Total cost to customer:            3.45
Profit this shipment:              1.15

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   2                   1                2.30                2.30                3.45

Order Number:                         2
Qty ordered:                          5
Qty shipped this shipment:            5
Qty to be shipped:                    0
Total cost to Warehouse:          11.50
Total cost to customer:           17.25
Profit this shipment:              5.75

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   2                   5                2.30               11.50               17.25

Order Number:                         3
Qty ordered:                         11
Qty shipped this shipment:            1
Qty to be shipped:                   10
Total cost to Warehouse:           2.30
Total cost to customer:            3.45
Profit this shipment:              1.15

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   2                   1                2.30                2.30                3.45

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
1
Number of widgets?

10
Price per widget?

1.67

Order Number:                         3
Qty ordered:                         11
Qty shipped this shipment:           10
Qty to be shipped:                    0
Total cost to Warehouse:          16.70
Total cost to customer:           25.05
Profit this shipment:              8.35

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   3                  10                1.67               16.70               25.05

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
3

Delivery#           Amount                             Price

No deliveries in stock

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
4

              Order#      Amount Ordered       Qty Remaining

No current orders.

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
1
Number of widgets?

5
Price per widget?

7.50

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
1
Number of widgets?

7
Price per widget?

2.30

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
1
Number of widgets?

1
Price per widget?

10

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
3

Delivery#           Amount                             Price
4                   5                                   7.50
5                   7                                   2.30
6                   1                                  10.00

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
2
How many widgets would you like to order?

13

Order Number:                         4
Qty ordered:                         13
Qty shipped this shipment:           13
Qty to be shipped:                    0
Total cost to Warehouse:          63.60
Total cost to customer:           95.40
Profit this shipment:             31.80

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   4                   5                7.50               37.50               56.25
                   5                   7                2.30               16.10               24.15
                   6                   1               10.00               10.00               15.00

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
1
Number of widgets?

5
Price per widget?

7.50

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
1
Number of widgets?

7
Price per widget?

2.30

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
1
Number of widgets?

10
Price per widget?

1.67

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
2
How many widgets would you like to order?

6

Order Number:                         5
Qty ordered:                          6
Qty shipped this shipment:            6
Qty to be shipped:                    0
Total cost to Warehouse:          39.80
Total cost to customer:           59.70
Profit this shipment:             19.90

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   7                   5                7.50               37.50               56.25
                   8                   1                2.30                2.30                3.45

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
2
How many widgets would you like to order?

5

Order Number:                         6
Qty ordered:                          5
Qty shipped this shipment:            5
Qty to be shipped:                    0
Total cost to Warehouse:          11.50
Total cost to customer:           17.25
Profit this shipment:              5.75

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   8                   5                2.30               11.50               17.25

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
2
How many widgets would you like to order?

11

Order Number:                         7
Qty ordered:                         11
Qty shipped this shipment:           11
Qty to be shipped:                    0
Total cost to Warehouse:          19.00
Total cost to customer:           28.50
Profit this shipment:              9.50

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   8                   1                2.30                2.30                3.45
                   9                  10                1.67               16.70               25.05

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
*/