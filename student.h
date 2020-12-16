#include"person.h"
class Student:public Person{
	private:
		friend class List;
		char level[5];
		char gpa[5];
	public:
		Student(char *name1,char *age1,char *addr1,char *tele1,char *level1,char *gpa1);
		void insert();
		void print(ofstream &outfile);
};
