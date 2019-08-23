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
};

