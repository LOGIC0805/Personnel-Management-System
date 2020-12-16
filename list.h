#include"person.h"
#include<iostream>
using namespace std;
class List{
	private:
		Person *root;
	public:	
		List();
		void insert_Person(Person *node);
		//void remove(char *name);
		//void print_List();
		friend int judge_int(char *data);
		friend int judge_float(char *data);
		void ReadFiles();
		void WriteFiles();
};

int judge_int(char *data);
int judge_float(char *data);
