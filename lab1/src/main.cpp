// Lab 1 Fearing, Vincent T
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
    Menu menu;

    inventory.importData();
    menu.mainMenu(inventory);

    return 0;
}

/*
Negative value error found in record: 609818973

Negative value error found in record: 124809737

Welcome! Please choose a number from the options below. 

1. Print inventory 
2. Sort inventory 
3. Search for item 
4. Print Report 
5. Exit 

1
Unsorted Inventory
ID                  Name                            Quantity               Price
997196478           nintendoswitch                        25              299.99
825638737           500gssd                               50              166.49
509834012           274ktv                                13              799.99
123072957           hdmicable                             70               22.64
873687376           displayport10                         50                  50
348109382           kvmswitch                             40                 450
348013908           playstation                          100               360.5
843109873           xboxone                               55               435.9
320987324           supermariobros                        30               59.99
348120983           pokemonred                            90                  55
348109835           pokemonblue                           12                  55
348212387           pokemonyellow                         11               59.95
824987452           2.1soundbar                           15              259.99
374329087           bluetoothkeyboard                      2               40.55

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
Inventory
ID                  Name                            Quantity               Price
123072957           hdmicable                             70               22.64
320987324           supermariobros                        30               59.99
348013908           playstation                          100               360.5
348109382           kvmswitch                             40                 450
348109835           pokemonblue                           12                  55
348120983           pokemonred                            90                  55
348212387           pokemonyellow                         11               59.95
374329087           bluetoothkeyboard                      2               40.55
509834012           274ktv                                13              799.99
824987452           2.1soundbar                           15              259.99
825638737           500gssd                               50              166.49
843109873           xboxone                               55               435.9
873687376           displayport10                         50                  50
997196478           nintendoswitch                        25              299.99

Sort by: 
1. ID 
2. Name 
3. Quantity 
4. Price 
5. Main Menu 

2
Inventory
ID                  Name                            Quantity               Price
824987452           2.1soundbar                           15              259.99
509834012           274ktv                                13              799.99
825638737           500gssd                               50              166.49
374329087           bluetoothkeyboard                      2               40.55
873687376           displayport10                         50                  50
123072957           hdmicable                             70               22.64
348109382           kvmswitch                             40                 450
997196478           nintendoswitch                        25              299.99
348013908           playstation                          100               360.5
348109835           pokemonblue                           12                  55
348120983           pokemonred                            90                  55
348212387           pokemonyellow                         11               59.95
320987324           supermariobros                        30               59.99
843109873           xboxone                               55               435.9

Sort by: 
1. ID 
2. Name 
3. Quantity 
4. Price 
5. Main Menu 

3
Inventory
ID                  Name                            Quantity               Price
374329087           bluetoothkeyboard                      2               40.55
348212387           pokemonyellow                         11               59.95
348109835           pokemonblue                           12                  55
509834012           274ktv                                13              799.99
824987452           2.1soundbar                           15              259.99
997196478           nintendoswitch                        25              299.99
320987324           supermariobros                        30               59.99
348109382           kvmswitch                             40                 450
825638737           500gssd                               50              166.49
873687376           displayport10                         50                  50
843109873           xboxone                               55               435.9
123072957           hdmicable                             70               22.64
348120983           pokemonred                            90                  55
348013908           playstation                          100               360.5

Sort by: 
1. ID 
2. Name 
3. Quantity 
4. Price 
5. Main Menu 

4
Inventory
ID                  Name                            Quantity               Price
123072957           hdmicable                             70               22.64
374329087           bluetoothkeyboard                      2               40.55
873687376           displayport10                         50                  50
348109835           pokemonblue                           12                  55
348120983           pokemonred                            90                  55
348212387           pokemonyellow                         11               59.95
320987324           supermariobros                        30               59.99
825638737           500gssd                               50              166.49
824987452           2.1soundbar                           15              259.99
997196478           nintendoswitch                        25              299.99
348013908           playstation                          100               360.5
843109873           xboxone                               55               435.9
348109382           kvmswitch                             40                 450
509834012           274ktv                                13              799.99

Sort by: 
1. ID 
2. Name 
3. Quantity 
4. Price 
5. Main Menu 

5

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
Search: nintendoswitch

ID                  Name                            Quantity               Price
997196478           nintendoswitch                        25              299.99

1. Search 
2. Main menu

1
Search: 348120983

ID                  Name                            Quantity               Price
348120983           pokemonred                            90                  55

1. Search 
2. Main menu

1
Search: ;ladkjf


Sorry item not found!

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

Unique Items: 14
Total worth of 563 items in stock: 120384

Welcome! Please choose a number from the options below. 

1. Print inventory 
2. Sort inventory 
3. Search for item 
4. Print Report 
5. Exit 

5

Terminal will be reused by tasks, press any key to close it.
*/