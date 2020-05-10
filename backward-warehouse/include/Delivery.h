#ifndef Delivery_h
#define Delivery_h

using namespace std;

class Delivery
{
    private:
    int quantity = 0;
    float pricePerUnit = 0;
    int ID = 0;

    public:
    void setDelivery(int amount, float price);
    int getQuantity() const;
    float getPricePerUnit() const;
    int getID();

};

#endif