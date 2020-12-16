#pragma once
#include<fstream>
using namespace std;
class Person{
	protected:
		friend class List;
		char name[20];
		char age[5];
		char addr[40];
		char tele[15];
		Person *next;
		static Person *ptr;
	public:
		Person(char *name1,char *age1,char *addr1,char *tele1);
		virtual void insert();
		virtual void print(ofstream &outfile);
};
