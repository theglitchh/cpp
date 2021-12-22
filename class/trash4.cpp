#include "iostream"
#include <string.h>
#include "cmath"
using namespace std;
// how to take arguments in class functions
class emp;

class emp {

    int empid;
    char empname[20];
    float sal;

    public: 
    void getemp(int id, char name[20],float basic ); //function definition inside the class
    void putemp();
};

void emp::getemp(int id, char name[20], float basic) { // function declaration outside of class
    empid = id;
    strcpy(empname, name);
    sal = basic;
}

void emp::putemp(){ // function definition

  cout << "Employee ID: " << empid << endl;
  cout << "Employee Name: " << empname << endl;
  cout << "Employee Salary: " << sal << endl;
}

int main (){
    emp e; //object
    e.getemp(101,"sourav", 10000); //argument functions

    e.putemp();
}