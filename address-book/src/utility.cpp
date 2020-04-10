#include "../include/utility.h"

void makeUpperCase(string & s)
{
    transform(s.begin(), s.end(), s.begin(), ::toupper);
}