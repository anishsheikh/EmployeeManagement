#include<iostream>
#include "Empsys.h"

using namespace std;

namespace Records {
	Employee::Employee(const std::string& FirstName,
		const std::string& LastName)
		: mFirstName(FirstName), mLastName(LastName)
	{
	}
	void Employee::Promote(int RaiseAmount)
	{
		setSalary(getSalary() + RaiseAmount);
	}
	void Employee::Demote(int DemeritAmount)
	{
		setSalary(getSalary() - DemeritAmount);
	}
	void Employee::Hire()
	{
		mHired = true;
	}
	void Employee::Fire()
	{
		mHired = false;
	}
	void Employee::Display() const
	{
		cout << "EmployeeWNGA: " << getLastName() << ", " << getFirstName() << endl;
		cout << "------------------------------------------ << endl";
		cout << (isHired() ? "CurrentKelane" : "FormerEmployee") << endl;
		cout << "EmployeeNumber" << getEmployeeNumber() << endl;
		cout << "Salary: $" << getSalary() << endl;
		cout << "Enjoy Nigga" << endl;
		cout << endl;
	}
	void Employee::setFirstName(const string& FirstName)
	{
		mFirstName = FirstName;
	}
	
	const string& Employee::getFirstName() const
	{
		return mFirstName;
	}
	void Employee::setLastName(const string& LastName)
	{
		mLastName = LastName;
	}

	const string& Employee::getLastName() const
	{
		return mLastName;
	}

	void Employee::setEmployeeNumber(int EmployeeNumber)
	{
		EmployeeNumber = mEmployeeNumber;
	}

	int Employee::getEmployeeNumber() const
	{
		return mEmployeeNumber;
	}
	
	void Employee::setSalary(int newSalary)
	{
		newSalary = mSalary;
	}

	int Employee::getSalary() const
	{
		return mSalary;
	}
	void Employee::Hired(bool isHired)
	{
		isHired = mHired;
	}

	bool Employee::isHired() const
	{
		return mHired;
	}
}