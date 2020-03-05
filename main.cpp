//*Written and Debugged by Anish*//


#include <iostream>
#include <stdexcept>
#include <exception>
#include "db.h"

using namespace std;
using namespace Records;

int displayMenu();
void doHire(Database& db);
void doFire(Database& db);
void doPromote(Database& db);
void doDemote(Database& db);

int main()
{
	Database employeeDB;
	bool done = false;
	while (!done)
				{
		int selection = displayMenu();
		switch (selection)
		{
		case 0:
			done = true;
			break;
		case 1:
			doHire(employeeDB);
			break;
		case 2:
			doFire(employeeDB);
			break;
		case 3:
			doPromote(employeeDB);
		case 4:
			employeeDB.displayAll();
			break;
		case 5:
			employeeDB.displayCurrent();
			break;
		case 6:
			employeeDB.displayFormer();
			break;
		default:
			cerr << "Unknown Command." << endl;
			break;
		}
	}
	return 0;
}

int displayMenu()
{
	int selection;
	cout << endl;
	cout << "Employee Database" << endl;
	cout << "------------------" << endl;
	cout << "1)Hire a New Employee" << endl;
	cout << "2)Fire an Employee" << endl;
	cout << "3)Promote an employee" << endl;
	cout << "4)List all employees" << endl;
	cout << "5)list all current emoloyees" << endl;
	cout << "6)List all former employees" << endl;
	cout << "0)Quit" << endl;
	cout << endl;
	cout << " Enter selection : " << endl;
	cout << "Written and Debugged by Anish" << endl;
	cin >> selection;
	return selection;
}

void doHire(Database& db)
{
	string FirstName;
	string LastName;

	cout << "First Name ?" << endl;
	cin >> FirstName;

	cout << "Last Name ?" << endl;
	cin >> LastName;

	db.addEmployee(FirstName, LastName);
}

void doFire(Database& db)
{
	int EmployeeNumber;

	cout << "Employee Number? ";
	cin >> EmployeeNumber;

	try
	{
		Employee& emp = db.getEmployee(EmployeeNumber);
		emp.Fire();
		cout << "Employee Number " << EmployeeNumber << "Bhowsdiwala ko nikal dia" << endl;
	}
	catch (const std::logic_error& exception)
	{
		cerr << "Lawda dikkatdar hai :" << exception.what() << endl;
	}
}

void doPromote(Database& db)
{
	int EmployeeNumber;
	int RaiseAmount;

	cout << "Employee Number";
	cin >> EmployeeNumber;

	cout << "Kitna Badhana Hai";
	cin >> RaiseAmount;

	try
	{
		Employee& emp = db.getEmployee(EmployeeNumber);
		emp.Promote(RaiseAmount);
	}
	catch (const std::logic_error &exception)
	{
		cerr << "isme bhi dikkat lawde : " << exception.what() << endl;
	}
}

void doDemote(Database& db)
	{
		int EmployeeNumber;
		int CutAmount;

		cout << "Employee Number";
		cin >> EmployeeNumber;

		cout << "Kitna katna Hai";
		cin >> CutAmount;

		try
		{
			Employee& emp = db.getEmployee(EmployeeNumber);
			emp.Promote(CutAmount);
		}
		catch (const std::logic_error &exception)
		{
			cerr << "isme bhi dikkat lawde : " << exception.what() << endl;
		}

	}
