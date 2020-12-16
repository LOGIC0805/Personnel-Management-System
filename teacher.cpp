#include"teacher.h"
#include<cstring>
#include<iostream>
#include<fstream>
using namespace std;
Teacher::Teacher(char *name1,char *age1,char *addr1,char *tele1,char *salary1)
:Person(name1,age1,addr1,tele1)
{
	strcpy(salary,salary1);
}

void Teacher::insert()
{
	Person::ptr=new Teacher(name,age,addr,tele,salary);
}

void Teacher::print(ofstream &outfile)
{
	outfile<<"Teacher:"<<endl;
	outfile<<"Name:"<<name<<" ";
	outfile<<"Age:"<<age<<" ";
	outfile<<"Address:"<<addr<<" ";
	outfile<<"Tel:"<<tele<<" ";
	outfile<<"Salary:"<<salary<<endl;
}
