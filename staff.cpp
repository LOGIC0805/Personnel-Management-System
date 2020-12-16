#include"staff.h"
#include<cstring>
#include<iostream>
#include<fstream>
using namespace std;
Staff::Staff(char *name1,char *age1,char *addr1,char *tele1,char *wage1)
:Person(name1,age1,addr1,tele1)
{
	strcpy(wage,wage1);
}

void Staff::insert()
{
	Person::ptr=new Staff(name,age,addr,tele,wage);
}

void Staff::print(ofstream &outfile)
{
	outfile<<"Staff:"<<endl;
	outfile<<"Name:"<<name<<" ";
	outfile<<"Age:"<<age<<" ";
	outfile<<"Address:"<<addr<<" ";
	outfile<<"Tel:"<<tele<<" ";
	outfile<<"Hourly wages:"<<wage<<endl;
}
