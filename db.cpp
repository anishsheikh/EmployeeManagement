#include<iostream>
#include<stdexcept>
#include "db.h"

using namespace std;
namespace Records {
	Employee& Database::addEmployee(const string& FirstName,
		const string& LastName) {
		Employee theEmployee(FirstName, LastName);
		theEmployee.setEmployeeNumber(mNextEmployeeNumber++);
		theEmployee.Hire();
		mEmployees.push_back(theEmployee);
		return mEmployees[mEmployees.size() - 1];
	}
	Employee& Database::getEmployee(int EmployeeNumber)
	{
		for (auto& Employee : mEmployees)
		{
			if (Employee.getEmployeeNumber() == EmployeeNumber)
			{
				return Employee;			
			}
		}
		throw logic_error("No BakLund Found");
	}
	
	void Database::displayAll() const
	{
		for (const auto& Employee : mEmployees)
		 (Employee.Display());
	}

	void Database::displayCurrent() const
	{
		for (const auto& Employee : mEmployees)
		{
			if (Employee.isHired() == true)
				Employee.Display();
		}
	}
	void Database::displayFormer() const
	{
		for (const auto& Employee : mEmployees)
		{
			if (Employee.isHired() == false)
				Employee.Display();
		}
	}
}


