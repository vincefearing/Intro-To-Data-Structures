#include <iostream>
#include <string>
#include "../include/StackDS.h"
#include "../include/Utility.h"
#include "../include/ET.h"
#include "../include/Menu.h"

using namespace std;

int main() {
    Menu menu;
    menu.mainMenu();
}

/*
----OUTPUT----

1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
1

Expression Loaded: 3+5/7

1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
2
+       3       /       5       7
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
3
3       5       7       /       +
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
4
((3)+((5)/(7)))
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
1

Expression Loaded: 3*5/7

1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
2
/       *       3       5       7
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
3
3       5       *       7       /
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
4
(((3)*(5))/(7))
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
1

Expression Loaded: x+y*a/b

1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
2
+       x       /       *       y       a       b
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
3
x       y       a       *       b       /       +
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
4
((x)+(((y)*(a))/(b)))
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
1

Expression Loaded: w*t/q+v

1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
2
+       /       *       w       t       q       v
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
3
w       t       *       q       /       v       +
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
4
((((w)*(t))/(q))+(v))
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
1

Expression Loaded: a+b

1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
2
+       a       b
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
3
a       b       +
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
4
((a)+(b))
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
1

Expression Loaded: a+b*c-d/e

1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
2
-       +       a       *       b       c       /       d       e
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
3
a       b       c       *       +       d       e       /       -
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
4
(((a)+((b)*(c)))-((d)/(e)))
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
1

Expression Loaded: a-b+c*d

1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
2
+       -       a       b       *       c       d
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
3
a       b       -       c       d       *       +
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
4
(((a)-(b))+((c)*(d)))
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
1

Expression Loaded: a*b-c

1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
2
-       *       a       b       c
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
3
a       b       *       c       -
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
4
(((a)*(b))-(c))
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
1

Expression Loaded: c*j+k/d+z+g+n+f

1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
23

Incorrect input. Please choose a single digit corresponding to your desired menu item

1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
2
+       +       +       +       +       *       c       j       /       k       d       z       g       n       f
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
3
c       j       *       k       d       /       +       z       +       g       +       n       +       f       +
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
4
(((((((c)*(j))+((k)/(d)))+(z))+(g))+(n))+(f))
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
1

Expression Loaded: n+b-c*j+k/d

1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
2
+       -       +       n       b       *       c       j       /       k       d
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
3
n       b       +       c       j       *       -       k       d       /       +
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
4
((((n)+(b))-((c)*(j)))+((k)/(d)))
1. Load Next Expression
2. Display Preorder
3. Display Postorder
4. Display Inorder
5. Quit
*/