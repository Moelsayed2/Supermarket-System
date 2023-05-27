#include "Manager.h"

Manager::Manager()
{
	numProducts = 0;
}

Manager::~Manager()
{
	for (int i = 0; i < numProducts; i++)
	{
		delete Products[i];
	}
}

void Manager::addProduct()
{
	char CH;
	do {
		if (numProducts < maxProducts)
		{
			Products[numProducts] = new Product();
			Products[numProducts]->inputProduct();
			cout << "\t\t---------------------\n";
			cout << "\t\t^ The Product Saved ^\n";
			cout << "\t\t---------------------\n";
			numProducts++;
		}
		else
		{
			cout << "\n\tError: Product List Is Full!\n\n";
			break;
		}
		cout << "\n-Do You Want To ADD Another Product [Y|N] ? : ";
		cin >> CH;
		system("cls");
	} while (CH == 'Y' || CH == 'y');
}

void Manager::editProduct()
{
	if (numProducts == 0)
	{
		cout << "\n< There Are No Products TO Edit >\n";
		return;
	}
	int id;
	cout << "\nEnter the ID OF The Product TO Be Edited : ";
	cin >> id;

	bool found = false;
	for (int i = 0; i < numProducts; i++) {
		if (Products[i]->getIdProduct() == id)
		{
			found = true;
			cout << "\n-----------------------Products----------------------\n";
			cout << "\tCode\t\tName\t\t\tPrice \n";
			Products[i]->outputProduct();
			cout << "-----------------------------------------------------\n\n";
			cout << " ____________________ \n";
			cout << "|-[ 1 ] : Edit Name  |\n";
			cout << "|-[ 2 ] : Edit Price |\n";
			cout << "|-[ 0 ] : Cancel     |\n";
			cout << " -------------------- \n";
			cout << "-Please Choose [0] TO [2] -> ";
			int choice;
			cin >> choice;
			switch (choice)
			{
			case 1:
			{
				cout << "\t|Enter The New Name : ";
				string newName;
				cin.ignore();
				getline(cin, newName);
				Products[i]->setNameProduct(newName);
				cout << "\n\t< Name Edited Successfully >\n\n";
				break;
			}
			case 2:
			{
				cout << "\t|Enter The New Price : ";
				double newPrice;
				cin >> newPrice;
				Products[i]->setPriceProduct(newPrice);
				cout << "\n\t< Price Edited Successfully >\n\n";
				break;
			}
			case 0:
				cout << "\n\t^ Editing Canceled ^\n\n";
				break;
			default:
				cout << "\n\t< Invalid Choice >\n\n";
				break;
			}
			break;
		}
	}
	if (!found)
	{
		cout << "\n\t< Product With ID " << id << " Not Found >\n\n";
	}
}

void Manager::findProduct()
{
	if (numProducts == 0)
	{
		cout << "\n\t< There Are No Products TO Find >\n\n";
		return;
	}
	int id;
	cout << "\n-Enter The ID OF The Product TO Find : ";
	cin >> id;
	bool found = false;
	for (int i = 0; i < numProducts; i++)
	{
		if (Products[i]->getIdProduct() == id)
		{
			found = true;
			cout << "\n-----------------------Products----------------------\n";
			cout << "\tCode\t\tName\t\t\tPrice \n";
			Products[i]->outputProduct();
			cout << "-----------------------------------------------------\n\n";
			break;
		}
	}
	if (!found)
	{
		cout << "\n\t< Product With ID " << id << " Not Found >\n\n";
	}
}

void Manager::deleteProduct()
{
	if (numProducts == 0)
	{
		cout << "\n\t< There Are NO Products TO Delete >\n";
		return;
	}
	int id;
	cout << "\n-Enter the ID OF The Product TO Be Deleted : ";
	cin >> id;
	bool found = false;
	for (int i = 0; i < numProducts; i++)
	{
		if (Products[i]->getIdProduct() == id)
		{
			found = true;
			cout << "\n-----------------------Products----------------------\n";
			cout << "\tCode\t\tName\t\t\tPrice \n";
			Products[i]->outputProduct();
			cout << "-----------------------------------------------------\n\n";
			cout << "\n-Are You Sure You Want TO Delete Employee " << Products[i]->getNameProduct() << " [Y|N] ? : ";
			char CH;
			cin >> CH;
			if (CH == 'Y' || CH == 'y')
			{
				delete Products[i];
				for (int j = i; j < numProducts - 1; j++)
				{
					Products[j] = Products[j + 1];
				}
				numProducts--;
				cout << "\n\t< Product With ID " << id << " Has Been Deleted >\n\n";
				break;
			}
			else
			{
				cout << "\n\t^ Deletion Canceled ^\n\n";
			}
			break;
		}
	}
	if (!found)
	{
		cout << "\n\t< Product With ID " << id << " Not Found >\n\n";
		return;
	}
}

void Manager::printProducts()
{
	if (numProducts == 0)
	{
		cout << "\n< There Are No Products TO Print >\n\n";
		return;
	}
	cout << "\n\t ============================ \n";
	cout << "\t|Products List Ordered By ID |\n";
	cout << "\t ============================ \n";
	for (int i = 0; i < numProducts - 1; i++)
	{
		for (int j = 0; j < numProducts - i - 1; j++)
		{
			if (Products[j]->getIdProduct() > Products[j + 1]->getIdProduct())
			{
				Product* temp = Products[j];
				Products[j] = Products[j + 1];
				Products[j + 1] = temp;
			}
		}
	}
	cout << "\n-----------------------Products----------------------\n";
	cout << "\tCode\t\tName\t\t\tPrice \n";
	for (int i = 0; i < numProducts; i++)
	{
		Products[i]->outputProduct();
	}
	cout << "-----------------------------------------------------\n\n";
	return;
}

