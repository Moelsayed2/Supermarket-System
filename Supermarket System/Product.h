#pragma once
#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
	int idProduct;
	string nameProduct;
	double	priceProduct;
public:
	Product() {};
	Product(int idProduct, string nameProduct, double	priceProduct);
	~Product() {};

	void inputProduct();
	void outputProduct();

	void setIdProduct(int idProduct);
	int getIdProduct() const;
	void setNameProduct(string nameProduct);
	string getNameProduct();
	void setPriceProduct(double priceProduct);
	double getPriceProduct();
};
