#include"person.h"
class Teacher:public Person{
	private:
		friend class List;
		char salary[10];
	public:
		Teacher(char *name1,char *age1,char *addr1,char *tele1,char *salary1);
		void insert();
		void print(ofstream &outfile);
};
