#include "order.h"

Order::Order(int orderNumber, string nameCustomer, string phoneNumber, int IDCustomer, int codeProduct, int quantityProduct)
	: orderNumber(orderNumber), IDCustomer(IDCustomer), codeProduct(codeProduct), quantityProduct(quantityProduct), phoneNumber(phoneNumber) {}

int Order::getOrderNumber()
{
	return orderNumber;
}

string Order::getNameCustomer()
{
	return nameCustomer;
}

int Order::getIDCustomer()
{
	return IDCustomer;
}

int Order::getCodeProduct()
{
	return codeProduct;
}

int Order::getQuantityProduct()
{
	return quantityProduct;
}

void Order::setOrderNumber(int newOrderNumber)
{
	orderNumber = newOrderNumber;
}

void Order::setNameCustomer(string newNameCustomer)
{
	nameCustomer = newNameCustomer;
}

void Order::setIDCustomer(int newIDCustomer)
{
	IDCustomer = newIDCustomer;
}

void Order::setCodeProduct(int newCodeProduct)
{
	codeProduct = newCodeProduct;
}

void Order::setQuantityProduct(int newQuantityProduct)
{
	quantityProduct = newQuantityProduct;
}

string Order::getPhoneNumber() {
	return phoneNumber;
}

void Order::setPhoneNumber(string newPhoneNumber) {
	phoneNumber = newPhoneNumber;
}

void Order::addOrder()
{
	cout << "Enter Customer ID: ";
	cin >> IDCustomer;
	cout << "Enter customer Name: ";
	cin >> nameCustomer;
	cout << "Enter customer Phone: ";
	cin >> phoneNumber;
	cout << "Enter order Number: ";
	cin >> orderNumber;
	setOrderNumber(orderNumber);

	manager.printProducts(); 

	cout << "Enter code Of Product: ";
	cin >> codeProduct;
	setCodeProduct(codeProduct);
	cout << "Enter quantity OF Product: ";
	cin >> quantityProduct;
	setQuantityProduct(quantityProduct);
	cout << "Requested Contents" << endl;
	printOrder();
	cout << "Order has been added successfully..." << endl;
}

void Order::printOrder()
{
	cout << "Customer name: " << nameCustomer << endl;
	cout << "Customer number: " << IDCustomer << endl;
	cout << "Customer phone: " << phoneNumber << endl;
	cout << "Order number: " << orderNumber << endl;
	cout << "Product code: " << codeProduct << endl;
	cout << "Product name: " << product.getNameProduct() << endl;
	cout << "Product price: " << product.getPriceProduct() << endl;
	cout << "Product quantity: " << quantityProduct << endl;
	cout << "Total price: " << priceOrder() << endl;
}

double Order::priceOrder()
{
	double price = product.getPriceProduct() * quantityProduct;
	return price;
}
