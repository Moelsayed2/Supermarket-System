#pragma once

#include "manager.h"
#include <string>
#include <iostream>
#include "Product.h"
using namespace std;

class Order {
private:
    string nameCustomer;
    int orderNumber;
    int quantityProduct;
    int IDCustomer;
    int codeProduct;
    string phoneNumber;
    Manager manager;  
    Product product;

public:
    Order() {};
    Order(int orderNumber, string nameCustomer,string phoneNumber, int numCustomer, int codeProduct, int quantityProduct );
    ~Order() {};

    void addOrder();
    void printOrder();
    double priceOrder();
    string getPhoneNumber();
    void setPhoneNumber(string newPhoneNumber);
    void setOrderNumber(int newOrderNumber);
    void setNameCustomer(string nameCustomer);
    void setIDCustomer(int IdCustomer);
    void setCodeProduct(int codeProduct);
    void setQuantityProduct(int quantityProduct);

    string getNameCustomer();
    int getOrderNumber();
    int getIDCustomer();
    int getCodeProduct();
    int getQuantityProduct();
};
