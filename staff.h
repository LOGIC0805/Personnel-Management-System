#include"person.h"
class Staff:public Person{
	private:
		friend class List;
		char wage[5];
	public:
		Staff(char *name1,char *age1,char *addr1,char *tele1,char *wage1);
		void insert();
		void print(ofstream &outfile);
};
