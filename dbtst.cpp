#include<iostream>
#include"db.h"

using namespace std;
using namespace Records;

void lol2()
{
	Database myDB;
	Employee& emp1 = myDB.addEmployee("Greg", "Kelle");
	emp1.Fire();

	Employee& emp2 = myDB.addEmployee("Marc", "White");
	emp2.setSalary(100000);
	
	Employee& emp3 = myDB.addEmployee("Lulla", "lulla");
	emp3.setSalary(100000);
	emp3.Promote();
	
	cout << "all employees:" << endl << endl;
	myDB.displayAll();

	cout << endl << "current employees: " << endl << endl;
	myDB.displayCurrent();
  
	cout << endl << "Former Employess: " << endl << endl;
	myDB.displayFormer();

}