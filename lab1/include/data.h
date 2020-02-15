#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Data 
{
    public:
    //Getters and Setters
    string getID() {}
    void setID(string) {}
    string getName() {}
    void setName(string) {}
    string getQuantity() {}
    void setQuantity(string) {}
    string getPrice() {}
    void setPrice(string) {}

    //constructor
    Data (string, string, string, string) {}

    private:
    string ID;
    string name;
    string quantity;
    string price;
};