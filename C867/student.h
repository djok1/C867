#pragma once
#include <string>
#include "degree.h"
#include <iostream>
using namespace std;



class student
{
	//variabes declared private to ensure you must use getters and setters to change them
private:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age = 0;
	int daysInCourse[3] = { 0, 0, 0 };
	DegreeType degreeType;


	//public functions IE getters and setters
public:

	//constuctors
	student(string StudentID, string FirstName, string LastName, string Email, string Age,string Days1,string Days2,string Days3)
	{
		studentID = StudentID;
		firstName = FirstName;
		lastName = LastName;
		email = Email;
		age = stoi(Age);
		daysInCourse[0] = stoi(Days1);
		daysInCourse[1] = stoi(Days2);
		daysInCourse[2] = stoi(Days3);
	}

	//print function
	virtual void print()
	{
		cout << studentID << '\t' << firstName << '\t' << lastName << '\t' << age << '\t' << email << '\t' << daysInCourse[0] << '\t' << daysInCourse[1] << '\t' << daysInCourse[2] << '\t' << getDegreeType() << endl;
	}

	//destructor
	~student()
	{

	}


	//setters
	void setstudentID(string StudentID)
	{
		studentID = StudentID;
	}

	void setfirstName(string FirstName)
	{
		firstName = FirstName;
	}

	void setlastName(string LastName)
	{
		lastName = LastName;
	}

	void setemail(string Email)
	{
		email = Email;
	}

	void setage(int Age)
	{
		age = Age;
	}

	void setdaysInCourse(int Days0, int Days1, int Days2)
	{
		if (Days0 > 0)
		{
			daysInCourse[0] = Days0;
		}
		if (Days1 > 0)
		{
			daysInCourse[1] = Days1;
		}
		if (Days2 > 0)
		{
			daysInCourse[2] = Days2;
		}
	}

	virtual void setdegreeType(DegreeType Degree)
	{
		
	}

	//getters
	string getstudentID()
	{
		return studentID;
	}

	string getfirstName()
	{
		return firstName;
	}

	string getlastName()
	{
		return lastName;
	}

	string getemail()
	{
		return email;
	}

	int getage()
	{
		return age;
	}

	int getdaysInCourse(int I)
	{
		return daysInCourse[I];
	}
	//changed naming conventions due to assgigment requirements
	virtual string getDegreeType()
	{
		return "unassgined";
	}

};
