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

--- Test Plan --- 

- Make sure memory is being allocated properly and deleted
- Check math for totals and costs
- Input orders and deliveries in various ways to check if values are being processed and stored properly
    - Input several deliveries first than orders
    - Input several orders first and than deliveries
    - Input one big order and several small deliveries
    - Input one big delivery and several small orders
- make sure output is clear and nice looking
- look for redundancies in code
- Test printing delivery and order stacks
- Make sure application meets all specifications laid out in assignment description

--- Output ---

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

Order Number:                         3
Qty ordered:                         11
Qty shipped this shipment:            5
Qty to be shipped:                    6
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

Order Number:                         3
Qty ordered:                         11
Qty shipped this shipment:            6
Qty to be shipped:                    0
Total cost to Warehouse:          13.80
Total cost to customer:           20.70
Profit this shipment:              6.90

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   2                   6                2.30               13.80               20.70

Order Number:                         2
Qty ordered:                          5
Qty shipped this shipment:            1
Qty to be shipped:                    4
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

1.63

Order Number:                         2
Qty ordered:                          5
Qty shipped this shipment:            4
Qty to be shipped:                    0
Total cost to Warehouse:           6.52
Total cost to customer:            9.78
Profit this shipment:              3.26

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   3                   4                1.63                6.52                9.78

Order Number:                         1
Qty ordered:                          6
Qty shipped this shipment:            6
Qty to be shipped:                    0
Total cost to Warehouse:           9.78
Total cost to customer:           14.67
Profit this shipment:              4.89

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   3                   6                1.63                9.78               14.67

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
1
Number of widgets?

5
Price per widget?

5

Order Number:                         4
Qty ordered:                          5
Qty shipped this shipment:            5
Qty to be shipped:                    0
Total cost to Warehouse:          25.00
Total cost to customer:           37.50
Profit this shipment:             12.50

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   4                   5                5.00               25.00               37.50

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
Total cost to Warehouse:          10.02
Total cost to customer:           15.03
Profit this shipment:              5.01

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   7                   6                1.67               10.02               15.03

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
Total cost to Warehouse:           8.98
Total cost to customer:           13.47
Profit this shipment:              4.49

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   7                   4                1.67                6.68               10.02
                   6                   1                2.30                2.30                3.45

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
Total cost to Warehouse:          51.30
Total cost to customer:           76.95
Profit this shipment:             25.65

Shipment details

           Delivery#         Qty Shipped      Warehouse Cost       Customer Cost       Customer Cost
                   6                   6                2.30               13.80               20.70
                   5                   5                7.50               37.50               56.25

Welcome!

1. Add delivery
2. Add order
3. Print delivery info
4. Print order info
5. Quit
*/