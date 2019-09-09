#pragma once

#include "student.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include <array>
#include <string>
using namespace std;

class roster
{
	private:
		student* classRosterArray[5];
		int counter = 0;
	public:
		roster();
		~roster();

		void add(string studentID, string firstName, string lastName, string emailAddress, string age, string daysInCourse1, string daysInCourse2, string daysInCourse3, string degree)
		{
			if (degree == "SECURITY")
			{
				//couldnt think of a better way to implement this maybe later? feedback usefull here
				classRosterArray[counter] = new securityStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3);
			}
			else if (degree == "NETWORK")
			{
				classRosterArray[counter] = new networkStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3);
			}
			else if (degree == "SOFTWARE")
			{
				classRosterArray[counter] = new softwareStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3);
			}
			else
			{
				cout << "error at :" << endl;
				
				cout << studentID << " , " << firstName << " , " << lastName << " , " << emailAddress << " , " << age << " , " << daysInCourse1 << " , " << daysInCourse2 << " , " << daysInCourse3;
				
				cout << endl;
				system("pause");
			}
			counter++;
		}

		void parse(string data[])
		{

			//string array for use in parsing meathods
			string subStudentSTR[9];
			//used in parsing studentData
			string delimiter = ",";
			// for loop to initalise studens and parse student data 
			for (int c = 0; c < 5 ; c++)
			{
				//used so I can parse without destroying data
				string tempStudentData = data[c];
				// counter to interate though subStudentSTR
				int I = 0;
				//used to reset string array
				for (string resetstudent : subStudentSTR)
				{
					subStudentSTR[I] = "";
					I++;
				}
				//I counter reset 
				I = 0;
				// breaking up data into seperate strings
				for (string parseStudent : subStudentSTR)
				{
					//breaks off part of string
					subStudentSTR[I] = tempStudentData.substr(0, tempStudentData.find(delimiter));
					//deletes the part  that was broken off
					tempStudentData.erase(0, tempStudentData.find(delimiter) + delimiter.length());
					I++;
				}
				roster::add(subStudentSTR[0], subStudentSTR[1], subStudentSTR[2], subStudentSTR[3], subStudentSTR[4], subStudentSTR[5], subStudentSTR[6], subStudentSTR[7], subStudentSTR[8]);
			}
		}
		//used to find and remove a student from class roster array throws error if sutdent not found
		void remove(string ID)
		{
			bool removed = false;
			for (int i = 0 ; i < 5 ; i++)
			{
				if(classRosterArray[i] != NULL)
				{
					if (classRosterArray[i]->getstudentID() == ID)
					{
						classRosterArray[i] = nullptr;
						removed = true;
						break;
					}
				}

			}

			if (removed == false)
			{
				cout << "Error: Student " << ID << " not found" << endl;
			}
		}
		//runs print from all the students in the array
		void printAll()
		{
			for (int i = 0; i < 5; i++)
			{
				classRosterArray[i]->print();
			}
		}
		//finds average number of days in the 3 courses
		void printDaysInCourse(string ID)
		{
			bool inArray = false;
			int totalDays = 0 , avgDays = 0;
			for (int i = 0; i < 5; i++)
			{
				if (classRosterArray[i]->getstudentID() == ID)
				{
					totalDays = classRosterArray[i]->getdaysInCourse(0) + classRosterArray[i]->getdaysInCourse(0) + classRosterArray[i]->getdaysInCourse(0);
					avgDays = totalDays / 3;
					cout << avgDays << endl;
					inArray = true;
					break;
				}
			}

			if (inArray == false)
			{
				cout << "Error: Student " << ID << " not found" << endl;
			}
		}
		//finds and displays invalid emails
		void printInvalidEmails()
		{
			string email = "";
			bool hasSpace = false;
			bool hasAt = false;
			bool hasPeriod = false;
			for (int i = 0; i < 5; i++)
			{
				email = classRosterArray[i]->getemail();
				hasSpace = false;
				hasAt = false;
				hasPeriod = false;
				for (char c : email)
				{
					if (c == '@')
					{
						hasAt = true;
					}
					if (c == ' ') 
					{
						hasSpace = true;
					}
					if(c == '.')
					{
						hasPeriod = true;
					}
				}

				if (!hasPeriod || !hasAt || hasSpace)
				{
					cout << email << "     ";
				}
				
			}
			cout << endl;
		}

		void printByDegreeProgram(int degreeProgram)
		{
			string degree = "";
			if (degreeProgram == 0)
			{
				degree = "Network";
			}
			else if (degreeProgram == 1)
			{
				degree = "Security";
			}
			else if (degreeProgram == 2)
			{
				degree = "Software";
			}
			for (int i = 0; i < 5; i++)
			{
				if (classRosterArray[i]->getDegreeType() == degree)
				{
					classRosterArray[i]->print();
				}
			}
		}
};

