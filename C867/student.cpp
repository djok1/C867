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
		//getters
		string getstudentID()
		{
			return studentID;
		}

};