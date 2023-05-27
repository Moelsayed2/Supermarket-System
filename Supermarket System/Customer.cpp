#include "customer.h"

Customer::Customer() {
    id = 0;
    name = "";
    numOrders = 0;
    for (int i = 0; i < 5; i++) {
        orders[i] = nullptr;
    }
}

Customer::Customer(int id, std::string name)
    : id(id), name(name), numOrders(0) {
    for (int i = 0; i < 5; i++) {
        orders[i] = nullptr;
    }
}

Customer::~Customer() {
    for (int i = 0; i < numOrders; i++) {
        delete orders[i];
    }
}


int Customer::getID() {
    return id;
}

void Customer::setID(int newID) {
    id = newID;
}

string Customer::getName() {
    return name;
}

void Customer::setName(std::string newName) {
    name = newName;
}


void Customer::createOrder() {
    if (numOrders < 5) {
        Order* newOrder = new Order();
        newOrder->addOrder();
        orders[numOrders] = newOrder;
        numOrders++;
    }
    else {
        cout << "Error: Order list is full!" << endl;
    }
}

void Customer::findOrder(int idOrder) {
    for (int i = 0; i < numOrders; i++) {
        if (orders[i]->getOrderNumber() == idOrder) {
            cout << "Order found: " << orders[i]->getOrderNumber() << endl;
            // Add code here to print other order details if needed/////////////////////////////////////////////////////////////
            return;
        }
    }
    cout << "Order with ID " << idOrder << " not found." << endl;
}

void Customer::deleteOrder(int idOrder) {
    for (int i = 0; i < numOrders; i++) {
        if (orders[i]->getOrderNumber() == idOrder) {
            delete orders[i];
            orders[i] = nullptr;
            cout << "Order with ID " << idOrder << " has been deleted." << endl;
            // Shift remaining orders to fill the gap
            for (int j = i; j < numOrders - 1; j++) {
                orders[j] = orders[j + 1];
            }
            orders[numOrders - 1] = nullptr;
            numOrders--;
            return;
        }
    }
    cout << "Order with ID " << idOrder << " not found." << endl;
}

void Customer::printOrder() {
    cout << "Orders:" << endl;
    for (int i = 0; i < numOrders; i++) {
        cout << "Order #" << i << endl;
        orders[i]->printOrder();
        cout << endl;
    }
}

void Customer::editOrder()
{

}
