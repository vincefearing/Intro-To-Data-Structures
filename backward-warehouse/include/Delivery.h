#ifndef Delivery_h
#define Delivery_h
#include "Shipment.h"
#include <iostream>
#include <vector>

using namespace std;

class Delivery
{
    private:
    int quantity = 0;
    float pricePerUnit = 0;
    int deliveryNum = 0;
    vector <Shipment> shipData;

    public:
    void setDelivery(int amount, float price, int deliveryNumber);
    int getQuantity() const;
    float getPricePerUnit() const;
    int getDeliveryNum();

};

#endif