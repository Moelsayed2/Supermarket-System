#pragma once
#include "Product.h"
#include <iostream>
#include <string>

using namespace std;

class Manager
{
private:
	static const int maxProducts = 10;
	Product* Products[maxProducts];
	int numProducts;

public:
	Manager();
	~Manager();

	void addProduct();
	void editProduct();
	void findProduct();
	void deleteProduct();
	void printProducts();
};
