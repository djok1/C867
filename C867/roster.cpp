#include "roster.h"
#include "student.h"
string studentData[] =
{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Dillon,Odell,dodell9@wgu.edu,27,50,58,40,SOFTWARE" };


int main() 
{
	student* classRosterArray[4];
	// counter for for loop 
	int counter = 0;
	//string array for use in parsing meathods
	string subStudentSTR[8];
	//used in parsing studentData
	string delimiter = ",";
	// for each loop to initalise studens and parse student data would prefer to put parsing in own parsing class 
	for (string Data : studentData) 
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