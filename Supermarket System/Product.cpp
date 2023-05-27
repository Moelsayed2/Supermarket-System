#include "Product.h"
Product::Product(int idProduct, string nameProduct, double priceProduct)
{
	this->idProduct = idProduct;
	this->nameProduct = nameProduct;
	this->priceProduct = priceProduct;
}

void Product::inputProduct()
{
	cout << "\n""\t\t^ Main Add Product ^\n";
	cout << "\t\t  **************** \n";
	cout << "\t --------------------------------------\n";
	cout << "\t|Enter The Product ID    : ";
	cin >> idProduct;
	setIdProduct(idProduct);
	cout << "\t|Enter The Product Name  : ";
	cin >> nameProduct;
	setNameProduct(nameProduct);
	cout << "\t|Enter The Product Price : ";
	cin >> priceProduct;
	setPriceProduct(priceProduct);
	cout << "\t --------------------------------------\n";
}

void Product::outputProduct()
{
	cout << "\t" << getIdProduct() << "\t\t" << getNameProduct() << "\t\t" << getPriceProduct() << " $\n";
}
void Product::setIdProduct(int codeProduct) { this->idProduct = idProduct; }
int Product::getIdProduct() const { return idProduct; }
void Product::setNameProduct(string nameProduct) { this->nameProduct = nameProduct; }
string Product::getNameProduct() { return nameProduct; }
void Product::setPriceProduct(double priceProduct) { this->priceProduct = priceProduct; }
double Product::getPriceProduct() { return priceProduct; }