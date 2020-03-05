#pragma once

#include <string>

namespace Records {
	const int kDefaultStartingSalary = 30000;

	class Employee
	{
	public:
		Employee() = default;
		Employee(const std::string& FirstName,
			     const std::string& Lastname);
		void Promote(int RaiseAmount = 1000);
		void Demote(int CutAmount = 1000);
		void Hire();
		void Fire();
		void Display() const;
		
		void setFirstName(const std::string& FirstName);
		const std::string& getFirstName() const;
		
		void setLastName(const std::string& LastName);
		const std::string& getLastName() const;

		void setEmployeeNumber(const int EmployeeNumber);
		int getEmployeeNumber() const;
		
		void setSalary(const int newSalary);
		int getSalary() const;
		
		void Hired(bool isHired);
		bool isHired() const;

	private:
		std::string mFirstName;
		std::string mLastName;
		int mEmployeeNumber = -1;
		int mSalary = kDefaultStartingSalary;
		bool mHired = false;
	};

}