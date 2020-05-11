#ifndef Shipment_h
#define Shipment_h
#include <iostream>
#include <string>
#include <iostream>

using namespace std;

class Shipment
{
    private:
    int deliveryID;
    int orderID;
    int qtyShipped;
    float unitPrice;
    float cost;
    float total;

    public:
    Shipment();
    void loadShipment(int delId, int ordID, int quantShipped, float price, float houseCost, float custTotal);
    void printDeliveryReport();
};

#endif