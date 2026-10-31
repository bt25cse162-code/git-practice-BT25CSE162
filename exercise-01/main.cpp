#include <iostream>
using namespace std;

class Order {
private:
    static int orderCount;
    int orderId;

public:
    Order(int id) {
        orderId = id;
        orderCount++;
    }

    void display() {
        cout << "Order ID: " << orderId << endl;
    }

    static void displayOrderCount() {
        cout << "Total Orders: " << orderCount << endl;
    }
};

int Order::orderCount = 0;

int main() {
    Order order1(101);
    Order order2(102);
    Order order3(103);

    order1.display();
    order2.display();
    order3.display();

    Order::displayOrderCount();

    return 0;
}
