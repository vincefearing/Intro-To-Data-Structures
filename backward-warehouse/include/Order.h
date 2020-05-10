#ifndef Order_h
#define Order_h

using namespace std;

class Order
{
    private:
    int orderNum = 0;
    int amountOrdered = 0;
    int ordersRemaining = 0;

    public:
    void setOrder(int orderNumber, int amount);
    void setOrdersRemaining(int remaining);
    int getOrderNum() const;
    int getAmountOrdered() const;
    int getordersRemaining() const;
};

#endif