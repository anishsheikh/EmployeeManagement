#include<iostream>
#include"Empsys.h"

using namespace std;
using namespace Records;

void lol()
{
	cout << "Testing Employee Class." << endl;
	Employee emp;
	emp.setFirstName("Anish");
	emp.setLastName("Sheikh");
	emp.setSalary(50000);
	emp.Promote(50);
	emp.Hire();
	emp.Display();
}