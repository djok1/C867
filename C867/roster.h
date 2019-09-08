#pragma once
#include <array>
#include "student.h"
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
			// for each loop to initalise studens and parse student data would prefer to put parsing in own parsing class 
			for (string Data : data)
			{
				//used so I can parse without destroying data
				string tempStudentData = Data;
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
				
			}
		}
};

