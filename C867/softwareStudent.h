#pragma once
#include "student.h"
class softwareStudent :
	public student
{
	private:
		DegreeType degreeType = software;

	public:
		DegreeType getDegreeType()
		{
			return degreeType;
		}

		softwareStudent(string StudentID, string FirstName, string LastName, string Email, string Age, string Days1, string Days2, string Days3) :student(StudentID, FirstName, LastName, Email, Age, Days1, Days2, Days3)
		{

		}
};

