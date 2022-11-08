#include <iostream>;
using namespace std;

class Employee {
  private: 
    string name;
    float salary;
    int startYear;
  public:
    Employee(){
      name = "Unknown";
      salary = 0;
      startYear = 2021;
    }
    Employee(string n, float s, int y){
      name =n;
      salary = s;
      startYear = y;
    }
    string getName();
    float getSalary();
    int getStartYear();
    void setName(string);
    void setSalary(float);
    void setStartYear(int);
    void printOut();
};