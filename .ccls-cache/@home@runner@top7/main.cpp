#include "EmployeeClass.h"
#include <iostream>
#include <iomanip>
using namespace  std;
int main()
{

  Employee E;

  string name;
  float salary;
  int year;

  getline(cin, name);
  cin >> salary;
  cin >> year;

  E.setName(name);
  E.setSalary(salary);
  E.setStartYear(year);

   cout<<fixed<<setprecision(2) << "Added new employee " << E.getName() << " with entrance salary: " << E.getSalary() <<endl;
   //TODO: declare an Employee object and set its variables based on the user input then output the received input
   
   //TODO: uncomment the following code, then add a definition of the Employee array where appropriate to make the code work
   
   
   const int SIZE = 4;

   Employee employees[SIZE];
   int i;
   
   cin.ignore();
   for (i = 0; i < SIZE; i++){
      getline(cin, name);
      employees[i].setName(name);
      cin >> salary;
      employees[i].setSalary(salary);
      cin >> year;
      employees[i].setStartYear(year);
      cin.ignore();
   }
   
   cout << "You entered the following employees: " << endl;
   for (i = 0; i < SIZE; i++)
      employees[i].printOut();
      
   //search the employee who has the highest salary
   int id = 0;
   for (i = 0; i < SIZE; i++){
      if (employees[id].getSalary() < employees[i].getSalary())
         id = i;
   }
   
   // print out the employee's information
   cout << employees[id].getName() << " who joined the company in " 
        << employees[id].getStartYear() << " has the highest salary: "
        << employees[id].getSalary() << endl;
   
   
   
   return 0;
}