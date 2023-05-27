#include <iostream>
#include <string>
#include "SupermarketSystem.h"
using namespace std;

int main()
{
	system("color 0");
	SupermarketSystem supermarket;
	int choice;
	do
	{
		cout << "\t ====================== \n";
		cout << "\t|Welcome To Supermarket|\n";
		cout << "\t ====================== \n";
		cout << " _______________________________________ \n";
		cout << "|-[ 1 ] : The Main Menu OF The Manager  |\n";
		cout << "|-[ 2 ] : The Main Menu OF The Customer |\n";
		cout << "|-[ 3 ] : The Main Menu OF The Employee |\n";
		cout << "|-[ 0 ] : Exit The Programme            |\n";
		cout << " --------------------------------------- \n";
		cout << "-Enter Your Choice [0] TO [3] -> ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			supermarket.login();
			
			break;
		case 2:
			system("cls");
			supermarket.customerList();
			break;
		case 3:
			system("cls");
			supermarket.employeeList();
			break;
		case 0:
			system("color F4");
			system("cls");
			cout << "\n""\t\t^ See You Later ^\n";
			return 0;
		default:
			cout << "\n""\tInvalid choice :: Please Enter Your Choice [0] TO [3] !!\n";
		}
	} while (choice);
	return 0;
}