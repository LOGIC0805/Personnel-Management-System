#include"person.h"
#include<cstring>
#include<iostream>
#include<fstream>
using namespace std;
Person *Person::ptr = NULL;
Person::Person(char *name1,char *age1,char *addr1,char *tele1)
{
	strcpy(name,name1);
	strcpy(age,age1);
	strcpy(addr,addr1);
	strcpy(tele,tele1);
}

void Person::insert()
{
	Person::ptr=new Person(name,age,addr,tele);
}

void Person::print(ofstream &outfile)
{
	outfile<<"Person:"<<endl;
	outfile<<"Name:"<<name<<" ";
	outfile<<"Age:"<<age<<" ";
	outfile<<"Address:"<<addr<<" ";
	outfile<<"Tel:"<<tele<<" ";
}
