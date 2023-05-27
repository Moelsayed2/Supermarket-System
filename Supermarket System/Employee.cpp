#include "Employee.h"
Employee::Employee(int idEmployee, string nameEmployee, int genderEmployee, int ageEmployee, string phoneEmployee,
	double hoursWorked, double moreHours)
{
	this->idEmployee = idEmployee;
	this->nameEmployee = nameEmployee;
	this->genderEmployee = genderEmployee;
	this->ageEmployee = ageEmployee;
	this->phoneEmployee = phoneEmployee;
	this->hoursWorked = hoursWorked;
	this->moreHours = moreHours;
}

void Employee::inputEmployee()
{
	cout << "\n""\t\t\t^ Main Add Employee ^\n";
	cout << "\t\t\t  ***************** \n";
	cout << "\t -----------------------------------------------------\n";
	cout << "\t|Enter The Employee ID                   : ";
	cin >> idEmployee;
	setIdEmployee(idEmployee);
	cout << "\t|Enter The Employee Name                 : ";
	cin.ignore();
	getline(cin, nameEmployee);
	setNameEmployee(nameEmployee);
	cout << "\t|Enter Your Gender [0 = MALE|1 = FEMALE] : ";
	cin >> genderEmployee;
	setGenderEmployee(genderEmployee);
	cout << "\t|Enter The Employee Age                  : ";
	cin >> ageEmployee;
	setAgeEmployee(ageEmployee);
	cout << "\t|Enter The Employee Phone                : ";
	cin >> phoneEmployee;
	setPhoneEmployee(phoneEmployee);
	cout << "\t|Enter The Employee Hours Worked         : ";
	cin >> hoursWorked;
	setHoursWorked(hoursWorked);
	cout << "\t|Enter The Employee More Hours           : ";
	cin >> moreHours;
	setMoreHours(moreHours);
	cout << "\t -----------------------------------------------------\n";
}
void Employee::outputEmployee()
{
	cout << "\tId     : " << getIdEmployee() << endl;
	cout << "\tName   : " << getNameEmployee() << endl;
	cout << "\tGender : " << (getGenderEmployee() == 0 ? "MALE" : "FEMALE") << endl;
	cout << "\tAge    : " << getAgeEmployee() << endl;
	cout << "\tPhone  : " << getPhoneEmployee() << endl;
	cout << "\tHours Worked      : " << getHoursWorked() << endl;
	cout << "\tMore Hours Worked : " << getMoreHours() << endl;
}

double Employee::getSalary()
{
	double hourlyRate = 50.0;
	double salary = (getHoursWorked() + getMoreHours()) * hourlyRate;
	outputEmployee();
	cout << "\tHours Worked : " << getHoursWorked() << endl;
	cout << "\tMore Hours   : " << getMoreHours() << endl;
	cout << "\tHourly Rate  : " << hourlyRate << " $" << endl;
	cout << "\tEmployee Salary : " << salary << " $" << endl;
	return salary;
}

void Employee::setIdEmployee(int idEmployee) { this->idEmployee = idEmployee; }
int Employee::getIdEmployee() const { return idEmployee; }
void Employee::setNameEmployee(string& nameEmployee) { this->nameEmployee = nameEmployee; }
string Employee::getNameEmployee() const { return nameEmployee; }
void Employee::setGenderEmployee(int genderEmployee) { this->genderEmployee = genderEmployee; }
int Employee::getGenderEmployee() const { return genderEmployee; }
void Employee::setAgeEmployee(int ageEmployee) { this->ageEmployee = ageEmployee; }
int Employee::getAgeEmployee()const { return ageEmployee; }
void Employee::setPhoneEmployee(string& phoneEmployee) { this->phoneEmployee = phoneEmployee; }
string Employee::getPhoneEmployee()const { return phoneEmployee; }
void Employee::setHoursWorked(double hoursWorked) { this->hoursWorked = hoursWorked; }
double Employee::getHoursWorked()const { return hoursWorked; }
void Employee::setMoreHours(double moreHours) { this->moreHours = moreHours; }
double Employee::getMoreHours() const { return moreHours; }