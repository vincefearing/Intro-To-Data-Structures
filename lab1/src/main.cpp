// Lab 1 Fearing, Vincent T TH
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "../include/inventory.h"
#include "../include/items.h"
#include "../include/menu.h"

using namespace std;

int  main() 
{
    Inventory inventory;
    inventory.importData();
    Menu menu;

    menu.mainMenu(inventory);
    

    return 0;
}

//TEST DATA
/*
Welcome! Please choose a number from the options below. 

1. Print inventory 
2. Sort inventory 
3. Search for item 
4. Print Report 
5. Exit 

1

ID: 997196478
Name: nintendoswitch
Quantity: 25
Price: $299.99

ID: 825638737
Name: 500gssd
Quantity: 50
Price: $166.49

ID: 509834012
Name: 274ktv
Quantity: 13
Price: $799.99

ID: 123072957
Name: hdmicable
Quantity: 70
Price: $22.64

ID: 873687376
Name: displayport10
Quantity: 50
Price: $50

ID: 348109382
Name: kvmswitch
Quantity: 40
Price: $450

ID: 348013908
Name: playstation
Quantity: 100
Price: $360.5

ID: 843109873
Name: xboxone
Quantity: 55
Price: $435.9

ID: 320987324
Name: supermariobros
Quantity: 30
Price: $59.99

ID: 348120983
Name: pokemonred
Quantity: 90
Price: $55

ID: 348109835
Name: pokemonblue
Quantity: 12
Price: $55

ID: 348212387
Name: pokemonyellow
Quantity: 11
Price: $59.95

ID: 824987452
Name: 2.1soundbar
Quantity: 15
Price: $259.99

ID: 374329087
Name: bluetoothkeyboard
Quantity: 2
Price: $40.55

ID: 609818973
Name: wirelessmouse
Quantity: 284
Price: $60.3

ID: 124809737
Name: onetomanyitems
Quantity: 341
Price: $500

Welcome! Please choose a number from the options below. 

1. Print inventory 
2. Sort inventory 
3. Search for item 
4. Print Report 
5. Exit 

6
Incorrect input. Please choose a single digit corresponding to your desired menu item

Welcome! Please choose a number from the options below. 

1. Print inventory 
2. Sort inventory 
3. Search for item 
4. Print Report 
5. Exit 

2

 Sort by: 
1. ID 
2. Name 
3. Quantity 
4. Price 
5. Main Menu 

1
ID: 123072957
Item Name: hdmicable
Quantity: 70
Price: $22.64

ID: 124809737
Item Name: onetomanyitems
Quantity: 341
Price: $500

ID: 320987324
Item Name: supermariobros
Quantity: 30
Price: $59.99

ID: 348013908
Item Name: playstation
Quantity: 100
Price: $360.5

ID: 348109382
Item Name: kvmswitch
Quantity: 40
Price: $450

ID: 348109835
Item Name: pokemonblue
Quantity: 12
Price: $55

ID: 348120983
Item Name: pokemonred
Quantity: 90
Price: $55

ID: 348212387
Item Name: pokemonyellow
Quantity: 11
Price: $59.95

ID: 374329087
Item Name: bluetoothkeyboard
Quantity: 2
Price: $40.55

ID: 509834012
Item Name: 274ktv
Quantity: 13
Price: $799.99

ID: 609818973
Item Name: wirelessmouse
Quantity: 284
Price: $60.3

ID: 824987452
Item Name: 2.1soundbar
Quantity: 15
Price: $259.99

ID: 825638737
Item Name: 500gssd
Quantity: 50
Price: $166.49

ID: 843109873
Item Name: xboxone
Quantity: 55
Price: $435.9

ID: 873687376
Item Name: displayport10
Quantity: 50
Price: $50

ID: 997196478
Item Name: nintendoswitch
Quantity: 25
Price: $299.99


 Sort by: 
1. ID 
2. Name 
3. Quantity 
4. Price 
5. Main Menu 

2
ID: 824987452
Item Name: 2.1soundbar
Quantity: 15
Price: $259.99

ID: 509834012
Item Name: 274ktv
Quantity: 13
Price: $799.99

ID: 825638737
Item Name: 500gssd
Quantity: 50
Price: $166.49

ID: 374329087
Item Name: bluetoothkeyboard
Quantity: 2
Price: $40.55

ID: 873687376
Item Name: displayport10
Quantity: 50
Price: $50

ID: 123072957
Item Name: hdmicable
Quantity: 70
Price: $22.64

ID: 348109382
Item Name: kvmswitch
Quantity: 40
Price: $450

ID: 997196478
Item Name: nintendoswitch
Quantity: 25
Price: $299.99

ID: 124809737
Item Name: onetomanyitems
Quantity: 341
Price: $500

ID: 348013908
Item Name: playstation
Quantity: 100
Price: $360.5

ID: 348109835
Item Name: pokemonblue
Quantity: 12
Price: $55

ID: 348120983
Item Name: pokemonred
Quantity: 90
Price: $55

ID: 348212387
Item Name: pokemonyellow
Quantity: 11
Price: $59.95

ID: 320987324
Item Name: supermariobros
Quantity: 30
Price: $59.99

ID: 609818973
Item Name: wirelessmouse
Quantity: 284
Price: $60.3

ID: 843109873
Item Name: xboxone
Quantity: 55
Price: $435.9


 Sort by: 
1. ID 
2. Name 
3. Quantity 
4. Price 
5. Main Menu 

3
ID: 374329087
Item Name: bluetoothkeyboard
Quantity: 2
Price: $40.55

ID: 348212387
Item Name: pokemonyellow
Quantity: 11
Price: $59.95

ID: 348109835
Item Name: pokemonblue
Quantity: 12
Price: $55

ID: 509834012
Item Name: 274ktv
Quantity: 13
Price: $799.99

ID: 824987452
Item Name: 2.1soundbar
Quantity: 15
Price: $259.99

ID: 997196478
Item Name: nintendoswitch
Quantity: 25
Price: $299.99

ID: 320987324
Item Name: supermariobros
Quantity: 30
Price: $59.99

ID: 348109382
Item Name: kvmswitch
Quantity: 40
Price: $450

ID: 825638737
Item Name: 500gssd
Quantity: 50
Price: $166.49

ID: 873687376
Item Name: displayport10
Quantity: 50
Price: $50

ID: 843109873
Item Name: xboxone
Quantity: 55
Price: $435.9

ID: 123072957
Item Name: hdmicable
Quantity: 70
Price: $22.64

ID: 348120983
Item Name: pokemonred
Quantity: 90
Price: $55

ID: 348013908
Item Name: playstation
Quantity: 100
Price: $360.5

ID: 609818973
Item Name: wirelessmouse
Quantity: 284
Price: $60.3

ID: 124809737
Item Name: onetomanyitems
Quantity: 341
Price: $500


 Sort by: 
1. ID 
2. Name 
3. Quantity 
4. Price 
5. Main Menu 

4
ID: 123072957
Item Name: hdmicable
Quantity: 70
Price: $22.64

ID: 374329087
Item Name: bluetoothkeyboard
Quantity: 2
Price: $40.55

ID: 873687376
Item Name: displayport10
Quantity: 50
Price: $50

ID: 348109835
Item Name: pokemonblue
Quantity: 12
Price: $55

ID: 348120983
Item Name: pokemonred
Quantity: 90
Price: $55

ID: 348212387
Item Name: pokemonyellow
Quantity: 11
Price: $59.95

ID: 320987324
Item Name: supermariobros
Quantity: 30
Price: $59.99

ID: 609818973
Item Name: wirelessmouse
Quantity: 284
Price: $60.3

ID: 825638737
Item Name: 500gssd
Quantity: 50
Price: $166.49

ID: 824987452
Item Name: 2.1soundbar
Quantity: 15
Price: $259.99

ID: 997196478
Item Name: nintendoswitch
Quantity: 25
Price: $299.99

ID: 348013908
Item Name: playstation
Quantity: 100
Price: $360.5

ID: 843109873
Item Name: xboxone
Quantity: 55
Price: $435.9

ID: 348109382
Item Name: kvmswitch
Quantity: 40
Price: $450

ID: 124809737
Item Name: onetomanyitems
Quantity: 341
Price: $500

ID: 509834012
Item Name: 274ktv
Quantity: 13
Price: $799.99


 Sort by: 
1. ID 
2. Name 
3. Quantity 
4. Price 
5. Main Menu 

6
Incorrect input. Please choose a single digit corresponding to your desired menu item
ID: 123072957
Item Name: hdmicable
Quantity: 70
Price: $22.64

ID: 374329087
Item Name: bluetoothkeyboard
Quantity: 2
Price: $40.55

ID: 873687376
Item Name: displayport10
Quantity: 50
Price: $50

ID: 348109835
Item Name: pokemonblue
Quantity: 12
Price: $55

ID: 348120983
Item Name: pokemonred
Quantity: 90
Price: $55

ID: 348212387
Item Name: pokemonyellow
Quantity: 11
Price: $59.95

ID: 320987324
Item Name: supermariobros
Quantity: 30
Price: $59.99

ID: 609818973
Item Name: wirelessmouse
Quantity: 284
Price: $60.3

ID: 825638737
Item Name: 500gssd
Quantity: 50
Price: $166.49

ID: 824987452
Item Name: 2.1soundbar
Quantity: 15
Price: $259.99

ID: 997196478
Item Name: nintendoswitch
Quantity: 25
Price: $299.99

ID: 348013908
Item Name: playstation
Quantity: 100
Price: $360.5

ID: 843109873
Item Name: xboxone
Quantity: 55
Price: $435.9

ID: 348109382
Item Name: kvmswitch
Quantity: 40
Price: $450

ID: 124809737
Item Name: onetomanyitems
Quantity: 341
Price: $500

ID: 509834012
Item Name: 274ktv
Quantity: 13
Price: $799.99


 Sort by: 
1. ID 
2. Name 
3. Quantity 
4. Price 
5. Main Menu 

7
Incorrect input. Please choose a single digit corresponding to your desired menu item
ID: 123072957
Item Name: hdmicable
Quantity: 70
Price: $22.64

ID: 374329087
Item Name: bluetoothkeyboard
Quantity: 2
Price: $40.55

ID: 873687376
Item Name: displayport10
Quantity: 50
Price: $50

ID: 348109835
Item Name: pokemonblue
Quantity: 12
Price: $55

ID: 348120983
Item Name: pokemonred
Quantity: 90
Price: $55

ID: 348212387
Item Name: pokemonyellow
Quantity: 11
Price: $59.95

ID: 320987324
Item Name: supermariobros
Quantity: 30
Price: $59.99

ID: 609818973
Item Name: wirelessmouse
Quantity: 284
Price: $60.3

ID: 825638737
Item Name: 500gssd
Quantity: 50
Price: $166.49

ID: 824987452
Item Name: 2.1soundbar
Quantity: 15
Price: $259.99

ID: 997196478
Item Name: nintendoswitch
Quantity: 25
Price: $299.99

ID: 348013908
Item Name: playstation
Quantity: 100
Price: $360.5

ID: 843109873
Item Name: xboxone
Quantity: 55
Price: $435.9

ID: 348109382
Item Name: kvmswitch
Quantity: 40
Price: $450

ID: 124809737
Item Name: onetomanyitems
Quantity: 341
Price: $500

ID: 509834012
Item Name: 274ktv
Quantity: 13
Price: $799.99


 Sort by: 
1. ID 
2. Name 
3. Quantity 
4. Price 
5. Main Menu 

sldjkf
Incorrect input. Please choose a single digit corresponding to your desired menu item
ID: 123072957
Item Name: hdmicable
Quantity: 70
Price: $22.64

ID: 374329087
Item Name: bluetoothkeyboard
Quantity: 2
Price: $40.55

ID: 873687376
Item Name: displayport10
Quantity: 50
Price: $50

ID: 348109835
Item Name: pokemonblue
Quantity: 12
Price: $55

ID: 348120983
Item Name: pokemonred
Quantity: 90
Price: $55

ID: 348212387
Item Name: pokemonyellow
Quantity: 11
Price: $59.95

ID: 320987324
Item Name: supermariobros
Quantity: 30
Price: $59.99

ID: 609818973
Item Name: wirelessmouse
Quantity: 284
Price: $60.3

ID: 825638737
Item Name: 500gssd
Quantity: 50
Price: $166.49

ID: 824987452
Item Name: 2.1soundbar
Quantity: 15
Price: $259.99

ID: 997196478
Item Name: nintendoswitch
Quantity: 25
Price: $299.99

ID: 348013908
Item Name: playstation
Quantity: 100
Price: $360.5

ID: 843109873
Item Name: xboxone
Quantity: 55
Price: $435.9

ID: 348109382
Item Name: kvmswitch
Quantity: 40
Price: $450

ID: 124809737
Item Name: onetomanyitems
Quantity: 341
Price: $500

ID: 509834012
Item Name: 274ktv
Quantity: 13
Price: $799.99


 Sort by: 
1. ID 
2. Name 
3. Quantity 
4. Price 
5. Main Menu 

5
ID: 123072957
Item Name: hdmicable
Quantity: 70
Price: $22.64

ID: 374329087
Item Name: bluetoothkeyboard
Quantity: 2
Price: $40.55

ID: 873687376
Item Name: displayport10
Quantity: 50
Price: $50

ID: 348109835
Item Name: pokemonblue
Quantity: 12
Price: $55

ID: 348120983
Item Name: pokemonred
Quantity: 90
Price: $55

ID: 348212387
Item Name: pokemonyellow
Quantity: 11
Price: $59.95

ID: 320987324
Item Name: supermariobros
Quantity: 30
Price: $59.99

ID: 609818973
Item Name: wirelessmouse
Quantity: 284
Price: $60.3

ID: 825638737
Item Name: 500gssd
Quantity: 50
Price: $166.49

ID: 824987452
Item Name: 2.1soundbar
Quantity: 15
Price: $259.99

ID: 997196478
Item Name: nintendoswitch
Quantity: 25
Price: $299.99

ID: 348013908
Item Name: playstation
Quantity: 100
Price: $360.5

ID: 843109873
Item Name: xboxone
Quantity: 55
Price: $435.9

ID: 348109382
Item Name: kvmswitch
Quantity: 40
Price: $450

ID: 124809737
Item Name: onetomanyitems
Quantity: 341
Price: $500

ID: 509834012
Item Name: 274ktv
Quantity: 13
Price: $799.99


Welcome! Please choose a number from the options below. 

1. Print inventory 
2. Sort inventory 
3. Search for item 
4. Print Report 
5. Exit 

3

1. Search 
2. Main menu

1
Search: 348109382


Item: kvmswitch
ID: 348109382
Stock: 40
Price: $450

1. Search 
2. Main menu

1
Search: 274ktv


Item: 274ktv
ID: 509834012
Stock: 13
Price: $799.99

1. Search 
2. Main menu

274KTV
Incorrect input. Please choose a single digit corresponding to your desired menu item

1. Search 
2. Main menu

1
Search: 274KTV


Item: 274ktv
ID: 509834012
Stock: 13
Price: $799.99

1. Search 
2. Main menu

2

Welcome! Please choose a number from the options below. 

1. Print inventory 
2. Sort inventory 
3. Search for item 
4. Print Report 
5. Exit 

4

Inventory Report: 

Unique Items: 16
Total worth of 1188 items in stock: $308009

Welcome! Please choose a number from the options below. 

1. Print inventory 
2. Sort inventory 
3. Search for item 
4. Print Report 
5. Exit 

5
*/