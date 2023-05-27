#pragma once
#include <iostream>
#include <string>
#include "EmployeeSystem.h"
#include "Manager.h"
#include "customer.h"

using namespace std;
class SupermarketSystem
{
private:
	EmployeeSystem Employees;
	Manager manager;
	Customer customer;
	Order order;
	string username = "M";     // Default username
	string password = "2004";  // Default password
public:
	SupermarketSystem();
	~SupermarketSystem();
	void customerList();
	void managerList();
	void employeeList();
	void login();
	void changeCredentials();
};
