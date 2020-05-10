#ifndef Order_h
#define Order_h

using namespace std;

class Order
{
    private:
    int ID = 0;
    int amountOrdered = 0;
    int amountShipped = 0;

    public:
    void setOrder(int id, int amount);
    int getID() const;
    int getAmountOrdered() const;
    int getAmountShipped() const;
};

#endif