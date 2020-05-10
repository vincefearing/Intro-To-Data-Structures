#include <iostream>
#include "../include/StackDS.h"
#include "../include/Delivery.h"

using namespace std;

int main() {
    StackDS <int> nums;
    int count = 0;
    for (int i = 0; i < 5; ++i)
    {
        nums.push(count);
        count ++;
    }
    for (int i = 0; i < 5; ++i)
    {
        if (nums.isEmpty() == false)
        {
            cout << nums.pop() << endl;
        }
    }
}