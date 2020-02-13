#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Data {
    public:
    //Getters and Setters
    string getID() {
        return ID;
    }
    void setID(string ID) {
        this->ID = ID;
    }
    string getName() {
        return name;
    }
    void setName(string name) {
        this->name = name;
    }
    string getQuantity() {
        return quantity;
    }
    void setQuantity(string quantity) {
        this->quantity = quantity;
    }
    string getPrice() {
        return price;
    }
    void setPrice(string price) {
        this->price = price;
    }

    Data (string ID, string name, string quantity, string price) {
      this-> ID = ID;
      this-> name = name;
      this-> quantity = quantity;
      this-> price = price;  
    }

    private:
    string ID;
    string name;
    string quantity;
    string price;
};

int  main() {
    vector <Data> list;
    ifstream inFile;
    string trash;
    string ID;
    string name;
    string quantity;
    string price;
    int i = 0;

    inFile.open("/Volumes/Vindrive/College/Spring 2020/Intro To Data Structures/lab1/data.txt");
    if (!inFile) {
        cout << "Problem opening file";
    }

    while(!inFile.eof()) {
        inFile >> ID >> name >> quantity >> price;
        list[i].setID(ID);
        list[i].setName(name);
        list[i].setPrice(price);
        list[i].setQuantity(quantity);

        ++i;
    }

        cout << "is this thing working?" << endl;
    
}