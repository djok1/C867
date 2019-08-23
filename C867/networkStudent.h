#pragma once
#include "student.h"
class networkStudent :
	public student
{
	private:
		DegreeType degreeType = network;

	public:
		DegreeType getDegreeType()
		{
			return degreeType;
		}
};

