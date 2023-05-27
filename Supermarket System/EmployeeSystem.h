#pragma once
#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

class EmployeeSystem
{
private:
	static const int maxEmployees = 10;
	Employee* employees[maxEmployees];
	int numEmployees;
public:
	EmployeeSystem();
	~EmployeeSystem();
	void addEmployee();
	void editEmployee();
	void findEmployee();
	void deleteEmployee();
	void salaryEmployee();
	double totalEmployees();
	void printEmployees();
};
