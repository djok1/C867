#include <string>
#include "degree.h"
#include "Parser.h"
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
	int age;
	int daysInCourse[3];



	//public functions IE getters and setters
public:

	//constuctor
	student(string StudentID, string FirstName, string LastName, string Email, int Age, int DaysinCourse[3])
	{
		studentID = StudentID;
		firstName = FirstName;
		lastName = LastName;
		email = Email;
		age = Age;
		daysInCourse[0] = DaysinCourse[0];
		daysInCourse[1] = DaysinCourse[1];
		daysInCourse[2] = DaysinCourse[2];
	}

	//print function
	void print()
	{
		cout << studentID << " , " << firstName << " , " << lastName << " , " << age << " , " << email << " , " << daysInCourse[0] << " , " << daysInCourse[1] << " , " << daysInCourse[2];
	}

	//destructor
	~student()
	{
		delete[] this;
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
	virtual DegreeType getdegreeProgram()
	{

	}

};
