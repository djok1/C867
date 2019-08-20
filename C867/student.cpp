#include <string>
#include "student.h"
#include "degree.h"
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
		DegreeType degreeType;

	//public functions IE getters and setters
	public:

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

		void setdaysInCourse(int Days0,int Days1,int Days2)
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

		void setdegreeType(DegreeType Degree)
		{
			degreeType = Degree;
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

		DegreeType getdegreeType()
		{
			return degreeType;
		}

};