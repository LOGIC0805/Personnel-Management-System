#include"student.h"
#include<cstring>
#include<iostream>
#include<fstream>
using namespace std;
Student::Student(char *name1,char *age1,char *addr1,char *tele1,char *level1,char *gpa1)
:Person(name1,age1,addr1,tele1)
{
	strcpy(level,level1);
	strcpy(gpa,gpa1);
}

void Student::insert()
{
	Person::ptr=new Student(name,age,addr,tele,level,gpa);
}

void Student::print(ofstream &outfile)
{
	outfile<<"Student:"<<endl;
	outfile<<"Name:"<<name<<" ";
	outfile<<"Age:"<<age<<" ";
	outfile<<"Address:"<<addr<<" ";
	outfile<<"Tel:"<<tele<<" ";
	outfile<<"Level:"<<level<<" ";
	outfile<<"GPA:"<<gpa<<endl;
}
