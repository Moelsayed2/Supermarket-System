#pragma once

#include "order.h"
#include <string>
#include <iostream>
using namespace std;
class Customer {
private:
    int id;
    string name;
    int numOrders;
    Order* orders[5];

public:
    Customer();
    Customer(int id, string name);
    ~Customer();
    void createOrder();
    void findOrder(int idOrder);
    void deleteOrder(int idOrder);
    void printOrder();
    void editOrder();//

    int getID();
    string getName();

    void setID(int newID);
    void setName(string newName);
};