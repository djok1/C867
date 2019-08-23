#pragma once
#include "student.h"
class securityStudent :
	public student
{
	private:
		DegreeType degreeType = security;

	public:
		DegreeType getDegreeType()
		{
			return degreeType;
		}
};

