#include "EmployeeSystem.h"
EmployeeSystem::EmployeeSystem()
{
	numEmployees = 0;
}

EmployeeSystem::~EmployeeSystem()
{
	for (int i = 0; i < numEmployees; i++)
	{
		delete employees[i];
	}
}

void EmployeeSystem::addEmployee()
{
	char CH;
	do {
		if (numEmployees < maxEmployees)
		{
			employees[numEmployees] = new Employee();
			employees[numEmployees]->inputEmployee();
			cout << "\t\t----------------------\n";
			cout << "\t\t^ The Employee Saved ^\n";
			cout << "\t\t----------------------\n";
			numEmployees++;
		}
		else
		{
			cout << "\n\tError: Employee List Is Full!\n\n";
			break;
		}
		cout << "\n-Do You Want To ADD Another Employee [Y|N] ? : ";
		cin >> CH;
	} while (CH == 'Y' || CH == 'y');
}

void EmployeeSystem::editEmployee()
{
	if (numEmployees == 0) {
		cout << "\n< There Are No Employees TO Edit >\n";
		return;
	}

	int id;
	cout << "\nEnter the ID OF The Employee TO Be Edited : ";
	cin >> id;

	bool found = false;
	for (int i = 0; i < numEmployees; i++) {
		if (employees[i]->getIdEmployee() == id) {
			found = true;
			cout << "\n------------------EMPLOYEE------------------\n";
			employees[i]->outputEmployee();
			cout << "--------------------------------------------\n\n";
			cout << " ____________________ \n";
			cout << "|-[ 1 ] : Edit Name  |\n";
			cout << "|-[ 2 ] : Edit Age   |\n";
			cout << "|-[ 3 ] : Edit Phone |\n";
			cout << "|-[ 0 ] : Cancel     |\n";
			cout << " -------------------- \n";
			cout << "-Please Choose [0] TO [3] -> ";
			int choice;
			cin >> choice;
			switch (choice) {
			case 1:
			{
				cout << "\t|Enter The New Name : ";
				string newName;
				cin.ignore();
				getline(cin, newName);
				employees[i]->setNameEmployee(newName);
				cout << "\n\t< Name Edited Successfully >\n\n";
				break;
			}
			case 2:
			{
				cout << "\t|Enter The New Age : ";
				int newAge;
				cin >> newAge;
				employees[i]->setAgeEmployee(newAge);
				cout << "\n\t< Age Edited Successfully >\n\n";
				break;
			}
			case 3:
			{
				cout << "\t|Enter The New Phone : ";
				string newPhone;
				cin.ignore();
				getline(cin, newPhone);
				employees[i]->setPhoneEmployee(newPhone);
				cout << "\n\t< Phone Edited Successfully >\n\n";
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
		cout << "\n\t< Employee With ID " << id << " Not Found >\n\n";
	}
}

void EmployeeSystem::findEmployee()
{
	if (numEmployees == 0)
	{
		cout << "\n\t< There Are No Employees TO Find >\n\n";
		return;
	}

	int id;
	cout << "\n-Enter The ID OF The Employee TO Find : ";
	cin >> id;

	bool found = false;
	for (int i = 0; i < numEmployees; i++)
	{
		if (employees[i]->getIdEmployee() == id)
		{
			found = true;
			cout << "\n------------------EMPLOYEE------------------\n";
			employees[i]->outputEmployee();
			cout << "--------------------------------------------\n\n";
			break;
		}
	}
	if (!found)
	{
		cout << "\n\t< Employee With ID " << id << " Not Found >\n\n";
	}
}

void EmployeeSystem::deleteEmployee()
{
	if (numEmployees == 0)
	{
		cout << "\n\t< There Are NO Employees TO Delete >\n";
		return;
	}
	int id;
	cout << "\n-Enter the ID OF The Employee TO Be Deleted : ";
	cin >> id;
	bool found = false;
	for (int i = 0; i < numEmployees; i++)
	{
		if (employees[i]->getIdEmployee() == id)
		{
			found = true;
			cout << "\n------------------EMPLOYEE------------------\n";
			employees[i]->outputEmployee();
			cout << "--------------------------------------------\n\n";
			cout << "\n-Are You Sure You Want TO Delete Employee " << employees[i]->getNameEmployee() << " [Y|N] ? : ";
			char CH;
			cin >> CH;
			if (CH == 'Y' || CH == 'y')
			{
				delete employees[i];
				for (int j = i; j < numEmployees - 1; j++)
				{
					employees[j] = employees[j + 1];
				}
				numEmployees--;
				cout << "\n\t< Employee With ID " << id << " Has Been Deleted >\n\n";
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
		cout << "\n\t< Employee With ID " << id << " Not Found >\n\n";
		return;
	}
}
void EmployeeSystem::salaryEmployee()
{
	if (numEmployees == 0)
	{
		cout << "\n\t< There Are NO Employees TO Delete >\n";
		return;
	}
	int id;
	cout << "\n-Please Enter The ID To Get Salary : ";
	cin >> id;
	bool found = false;
	for (int i = 0; i < numEmployees; i++)
	{
		if (employees[i]->getIdEmployee() == id)
		{
			found = true;
			cout << "\n------------------EMPLOYEE------------------\n";
			employees[i]->getSalary();
			cout << "--------------------------------------------\n\n";
		}
	}
	if (!found)
	{
		cout << "\n\t< Employee With ID " << id << " Not Found >\n\n";
		return;
	}
}

double EmployeeSystem::totalEmployees()
{
	int totalNumEmployees = 0;
	double totalSalary = 0.0;
	for (int i = 0; i < numEmployees; i++)
	{
		cout << "\n-----------------EMPLOYEES---------------------\n";
		cout << "\t\t\t\t|Employee : " << i + 1 << " |\n";
		cout << "\t\t\t\t ------------- \n";
		totalNumEmployees++;
		totalSalary += employees[i]->getSalary();
		cout << "-----------------------------------------------\n";
	}
	cout << "\n\t =====================================\n";
	cout << "\t < Total Number OF All Employees  : " << totalNumEmployees;
	cout << "\n\t =====================================\n";
	cout << "\n\t ============================================\n";
	cout << "\t < Total Salary OF All Employees  : " << totalSalary << " $ >";
	cout << "\n\t ============================================\n";
	return totalSalary;
}

void EmployeeSystem::printEmployees()
{
	if (numEmployees == 0)
	{
		cout << "\n\t< There Are No Employees TO Print >\n\n";
		return;
	}
	cout << "\n\t ============================ \n";
	cout << "\t|Employee List Ordered By ID |\n";
	cout << "\t ============================ \n";
	for (int i = 0; i < numEmployees - 1; i++)
	{
		for (int j = 0; j < numEmployees - i - 1; j++)
		{
			if (employees[j]->getIdEmployee() > employees[j + 1]->getIdEmployee())
			{
				Employee* temp = employees[j];
				employees[j] = employees[j + 1];
				employees[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < numEmployees; i++)
	{
		cout << "\n-----------------EMPLOYEES---------------------\n";
		cout << "\t\t\t\t|Employee : " << i + 1 << " |\n";
		cout << "\t\t\t\t ------------- \n";
		employees[i]->outputEmployee();
		cout << "-----------------------------------------------\n\n";
	}
	return;
}