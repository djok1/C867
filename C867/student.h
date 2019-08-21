#include <string>
#include "degree.h"
#include "Parser.h"
using namespace std;

const string studentData[] =
{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Dillon,Odell,dodell9@wgu.edu,27,50,58,40,SOFTWARE" };


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

	//constuctor
	student(int I)
	{
		//settings string data to the info from the data array
		string Data = studentData[I];
		/*int j = Data.length();
		int Commas[8];
		//use to mark what comma we are on
		int commaCount = 0;
		//getting the location of each comma will be used to seperate out elements of the data string
		for (int i = 0; i < j; i++)
		{
			if (Data[i] == ',')
			{
				Commas[commaCount] = i;
				commaCount++;
			}
		}*/

		int* Commas = Parser::commas(Data);
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
