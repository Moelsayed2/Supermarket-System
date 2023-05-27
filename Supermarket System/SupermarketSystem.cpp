#include "SupermarketSystem.h"
SupermarketSystem::SupermarketSystem()
{
}

SupermarketSystem::~SupermarketSystem()
{
}

void SupermarketSystem::customerList()
{
	system("color 3");
	int choice;
	do
	{
		cout << "\t\t\t\t\t ========================\n";
		cout << "\t\t\t\t\t| \" Customer Home Page \" | \n";
		cout << "\t\t\t\t\t ========================\n";
		cout << "\t^ Main Menu ^\n";
		cout << "\t=============\n";
		cout << " ___________________________________ \n";
		cout << "|-[ 1 ] : Add A New Order        |\n";
		cout << "|-[ 2 ] : Edit An Order          |\n";
		cout << "|-[ 3 ] : Find An Order          |\n";
		cout << "|-[ 4 ] : Delete An Order        |\n";
		cout << "|-[ 5 ] : Calculate Order Salary |\n";
		cout << "|-[ 6 ] : Print  Order           |\n";
		cout << "|-[ 0 ] : Go Back                |\n";
		cout << " ----------------------------------- \n";
		cout << "-Enter Your Choice [0] TO [6] -> ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			customer.createOrder();
			break;
		case 2:
			system("cls");
			customer.editOrder();
			break;
		case 3:
			system("cls");
			int idOrder_Find;
			cout << "Enter ID Order To Find" << endl;
			cin >> idOrder_Find;
			customer.findOrder(idOrder_Find);
			break;
		case 4:
			system("cls");
			int idOrder_Delet;
			cout << "Enter ID Order To Delete" << endl;
			cin >> idOrder_Delet;
			customer.deleteOrder(idOrder_Delet);
			break;
		case 5:
			system("cls");
			order.priceOrder();
			break;
		case 6:
			system("cls");
			customer.printOrder();
			break;
		case 0:
			system("cls");
			system("color 4");
			return;
		default:
			cout << "\n""Invalid choice : Please Enter Your Choice [0] TO [6] !!\n";
			continue;
		}
	} while (choice);
}

void SupermarketSystem::managerList()
{
	system("color 2");
	int choice;
	do
	{
		cout << "\t\t\t\t\t =======================\n";
		cout << "\t\t\t\t\t| \" Manager Home Page \" | \n";
		cout << "\t\t\t\t\t =======================\n";
		cout << "\t^ Main Menu ^\n";
		cout << "\t=============\n";
		cout << " _________________________________ \n";
		cout << "|-[ 1 ] : Add A New Product       |\n";
		cout << "|-[ 2 ] : Edit An Product         |\n";
		cout << "|-[ 3 ] : Find An Product         |\n";
		cout << "|-[ 4 ] : Delete An Product       |\n";
		cout << "|-[ 5 ] : Print All Products      |\n";
		cout << "|-[ 6 ] : Total Employee Salaries |\n";
		cout << "|-[ 7 ] : Total orders sold       |\n";
		cout << "|-[ 8 ] : Change password         |\n";
		cout << "|-[ 0 ] : Go Back                 |\n";
		cout << " --------------------------------- \n";
		cout << "-Enter Your Choice [0] TO [8] -> ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			manager.addProduct();
			break;
		case 2:
			system("cls");
			manager.editProduct();
			break;
		case 3:
			system("cls");
			manager.findProduct();
			break;
		case 4:
			system("cls");
			manager.deleteProduct();
			break;
		case 5:
			system("cls");
			manager.printProducts();
			break;
		case 6:
			system("cls");
			Employees.totalEmployees();
			break;
		case 7:
			system("cls");
			Employees.printEmployees();
			break;
		case 8:
			system("cls");
			changeCredentials();
			break;
		case 0:
			system("cls");
			system("color 4");
			return;
		default:
			cout << "\n""Invalid choice : Please Enter Your Choice [0] TO [8] !!\n";
			continue;
		}
	} while (choice);
}

void SupermarketSystem::employeeList()
{
	system("color 3");
	int choice;
	do
	{
		cout << "\t\t\t\t\t ========================\n";
		cout << "\t\t\t\t\t| \" Employee Home Page \" | \n";
		cout << "\t\t\t\t\t ========================\n";
		cout << "\t^ Main Menu ^\n";
		cout << "\t=============\n";
		cout << " ___________________________________ \n";
		cout << "|-[ 1 ] : Add A New Employee        |\n";
		cout << "|-[ 2 ] : Edit An Employee          |\n";
		cout << "|-[ 3 ] : Find An Employee          |\n";
		cout << "|-[ 4 ] : Delete An Employee        |\n";
		cout << "|-[ 5 ] : Calculate Employee Salary |\n";
		cout << "|-[ 6 ] : Print All Employees       |\n";
		cout << "|-[ 0 ] : Go Back                   |\n";
		cout << " ----------------------------------- \n";
		cout << "-Enter Your Choice [0] TO [6] -> ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			Employees.addEmployee();
			break;
		case 2:
			system("cls");
			Employees.editEmployee();
			break;
		case 3:
			system("cls");
			Employees.findEmployee();
			break;
		case 4:
			system("cls");
			Employees.deleteEmployee();
			break;
		case 5:
			system("cls");
			Employees.salaryEmployee();
			break;
		case 6:
			system("cls");
			Employees.printEmployees();
			break;
		case 0:
			system("cls");
			system("color 4");
			return;
		default:
			cout << "\n""Invalid choice : Please Enter Your Choice [0] TO [6] !!\n";
			continue;
		}
	} while (choice);
}

void SupermarketSystem::login()

	{
		string enteredUsername, enteredPassword;
		cout << "Username: ";
		cin >> enteredUsername;
		cout << "Password: ";
		cin >> enteredPassword;

		if (enteredUsername == username && enteredPassword == password)
		{
			cout << "Login successful!" << endl;
			managerList();
		}
		else
		{
			cout << "Invalid username or password. Please try again." << endl;
		}
	}

void SupermarketSystem::changeCredentials()
{
	string EnteredUsername, EnteredPassword;

	cout << "Enter new Name: ";
	cin >> EnteredUsername;
	username = EnteredUsername;
	cout << "Enter new password: ";
	cin >> EnteredPassword;
	password = EnteredPassword;
	cout << "Password changed successfully..!" << endl;
}