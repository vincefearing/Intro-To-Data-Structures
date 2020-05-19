#include <iostream>
#include "../include/StackDS.h"
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

No current orders.

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
1
Number of widgets?

-6

Error: Delivery amount can't be less than 1.

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
1
Number of widgets?

0

Error: Delivery amount can't be less than 1.

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
1
Number of widgets?

3
Price per widget?

-5

Error: Price cannot be zero or less.

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
1
Number of widgets?

3
Price per widget?

0

Error: Price cannot be zero or less.

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
1
Number of widgets?

3
Price per widget?

1

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
1
Number of widgets?

4
Price per widget?

2

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

3

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
2
How many widgets would you like to order?

-9

Error: Order number can't be less than 1

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
2
How many widgets would you like to order?

0

Error: Order number can't be less than 1

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
2
How many widgets would you like to order?

3

Order Number:                         1
Qty to be ordered:                    3
Qty shipped this shipment:            3
Qty to be shipped:                    0
Total cost to Warehouse:           9.00
Total cost to customer:           13.50
Profit this shipment:              4.50

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   3                   3                3.00                9.00               13.50

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
2
How many widgets would you like to order?

7

Order Number:                         2
Qty to be ordered:                    7
Qty shipped this shipment:            7
Qty to be shipped:                    0
Total cost to Warehouse:          15.00
Total cost to customer:           22.50
Profit this shipment:              7.50

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   3                   2                3.00                6.00                9.00
                   2                   4                2.00                8.00               12.00
                   1                   1                1.00                1.00                1.50

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
2
How many widgets would you like to order?

3

Order Number:                         3
Qty to be ordered:                    3
Qty shipped this shipment:            2
Qty to be shipped:                    1
Total cost to Warehouse:           2.00
Total cost to customer:            3.00
Profit this shipment:              1.00

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   1                   2                1.00                2.00                3.00

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

Order Number:                         3
Qty to be ordered:                    3
Qty shipped this shipment:            2
Qty to be shipped:                    1
Total cost to Warehouse:           2.00
Total cost to customer:            3.00
Profit this shipment:              1.00

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
4

Order Number:                         4
Qty to be ordered:                    5
Qty shipped this shipment:            0
Qty to be shipped:                    5
Total cost to Warehouse:           0.00
Total cost to customer:            0.00
Profit this shipment:              0.00

Order Number:                         3
Qty to be ordered:                    3
Qty shipped this shipment:            2
Qty to be shipped:                    1
Total cost to Warehouse:           2.00
Total cost to customer:            3.00
Profit this shipment:              1.00

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
1
Number of widgets?

6
Price per widget?

2

Order Number:                         4
Qty to be ordered:                    5
Qty shipped this shipment:            5
Qty to be shipped:                    0
Total cost to Warehouse:          10.00
Total cost to customer:           15.00
Profit this shipment:              5.00

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   4                   5                2.00               10.00               15.00

Order Number:                         3
Qty to be ordered:                    3
Qty shipped this shipment:            3
Qty to be shipped:                    0
Total cost to Warehouse:           4.00
Total cost to customer:            6.00
Profit this shipment:              2.00

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   1                   2                1.00                2.00                3.00
                   4                   1                2.00                2.00                3.00

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

No current orders.

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
2
How many widgets would you like to order?

4

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

6

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

Order Number:                         7
Qty to be ordered:                    6
Qty shipped this shipment:            0
Qty to be shipped:                    6
Total cost to Warehouse:           0.00
Total cost to customer:            0.00
Profit this shipment:              0.00

Order Number:                         6
Qty to be ordered:                    5
Qty shipped this shipment:            0
Qty to be shipped:                    5
Total cost to Warehouse:           0.00
Total cost to customer:            0.00
Profit this shipment:              0.00

Order Number:                         5
Qty to be ordered:                    4
Qty shipped this shipment:            0
Qty to be shipped:                    4
Total cost to Warehouse:           0.00
Total cost to customer:            0.00
Profit this shipment:              0.00

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
1
Number of widgets?

15
Price per widget?

4

Order Number:                         7
Qty to be ordered:                    6
Qty shipped this shipment:            6
Qty to be shipped:                    0
Total cost to Warehouse:          24.00
Total cost to customer:           36.00
Profit this shipment:             12.00

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   5                   6                4.00               24.00               36.00

Order Number:                         6
Qty to be ordered:                    5
Qty shipped this shipment:            5
Qty to be shipped:                    0
Total cost to Warehouse:          20.00
Total cost to customer:           30.00
Profit this shipment:             10.00

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   5                   5                4.00               20.00               30.00

Order Number:                         5
Qty to be ordered:                    4
Qty shipped this shipment:            4
Qty to be shipped:                    0
Total cost to Warehouse:          16.00
Total cost to customer:           24.00
Profit this shipment:              8.00

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   5                   4                4.00               16.00               24.00

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

No current orders.

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
*/