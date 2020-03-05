#pragma once
#include<vector>
#include"Empsys.h"
#include<iostream>

namespace Records
{
	const int kFirstEmployeeNumber = 1000;

	class Database
	{
	public:
		Employee& addEmployee(const std::string& FirstName,
			const std::string& LastName);
		Employee& getEmployee(int EmployeeNumber);
		Employee& getEmployee(const std::string& FirstName,
			const std::string& LastName);
		void displayAll() const;
		void displayCurrent() const;
		void displayFormer() const;

	private:
		std::vector<Employee> mEmployees;
		int mNextEmployeeNumber = kFirstEmployeeNumber;
	};
}