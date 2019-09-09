#pragma once
#include "student.h"
class securityStudent :
	public student
{
	private:
		DegreeType degreeType = security;

	public:
		string getDegreeType()
		{
			return "Security";
		}

		securityStudent(string StudentID, string FirstName, string LastName, string Email, string Age, string Days1, string Days2, string Days3) :student(StudentID, FirstName, LastName, Email, Age, Days1, Days2, Days3)
		{

		}
};

