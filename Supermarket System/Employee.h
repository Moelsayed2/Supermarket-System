#pragma once
#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
	int idEmployee;
	string nameEmployee;
	int genderEmployee;
	int ageEmployee;
	string phoneEmployee;
	double hoursWorked;
	double moreHours;
public:
	Employee() {};
	Employee(int idEmployee, string nameEmployee, int genderEmployee, int ageEmployee, string phoneEmployee,
		double hoursWorked, double moreHours);
	~Employee() {};

	void inputEmployee();
	void outputEmployee();
	double getSalary();

	void setIdEmployee(int idEmployee);
	int getIdEmployee() const;
	void setNameEmployee(string& nameEmployee);
	string getNameEmployee() const;
	void setGenderEmployee(int genderEmployee);
	int getGenderEmployee() const;
	void setAgeEmployee(int ageEmployee);
	int getAgeEmployee() const;
	void setPhoneEmployee(string& phoneEmployee);
	string getPhoneEmployee() const;
	void setHoursWorked(double hoursWorked);
	double getHoursWorked() const;
	void setMoreHours(double moreHours);
	double getMoreHours() const;
};
