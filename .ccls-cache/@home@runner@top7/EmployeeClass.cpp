#include <iostream>

using namespace std;
#include "EmployeeClass.h";

string Employee::getName() { return name; }

float Employee::getSalary() { return salary; }

int Employee::getStartYear() { return startYear; }

void Employee::setName(string n) { name = n; }

void Employee::setSalary(float s) { this->salary = s; }

void Employee::setStartYear(int y) { this->startYear = y; }

void Employee::printOut() {
  cout << getName() << " joined the company in " << getStartYear()
       << ", current salary: " << getSalary() << endl;
}