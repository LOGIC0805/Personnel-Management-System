#include"list.h"
#include"student.h"
#include"teacher.h"
#include"staff.h"
#include<cstring>
#include<fstream>
#include<cctype>
#include<string>
int judge_int(char *data)
{
	int len=strlen(data);
	for(int i=0;i<len;++i){
		if(isdigit(data[i])==0){
			return 1;
		}
	}
	return 0;
}
int judge_float(char *data)
{
	int len=strlen(data);
	int flag=0;
	for(int i=0;i<len;++i){
		if(isdigit(data[i])==0){
			if(data[i]=='.'&&flag==0){
				flag=1;
			}else{
				return 1;
			}
		}
	}
	return 0;
}

List::List()
{
	root=NULL;
}

void List::insert_Person(Person *node)
{
	char key[20];
	strcpy(key,node->name);
	Person *curr_node=root;
	Person *previous=0;
	while(curr_node!=0 && strcmp(curr_node->name,key)<0){
		previous=curr_node;
		curr_node=curr_node->next;
	}
	node->insert();
	node->ptr->next=curr_node;
	if(previous==0){
		root=node->ptr;
	}else{
		previous->next=node->ptr;
	}
}

/*void List::remove(char *name)
{
	Person * curr_node=root;
	Person * previous=0;
	while(curr_node!=0 && strcmp(curr_node->name,name)!=0){
		previous=curr_node;
		curr_node=curr_node->next;
	}
	if(curr_node!=0 && previous==0){
		root=curr_node->next;
		delete curr_node;
	}else if(curr_node!=0 && previous!=0){
		previous->next=curr_node->next;
		delete curr_node;
	}
}

void List::print_List()
{
	Person *cur=root;
	while(cur!=0){
		cur->print();
		cur=cur->next;
	}
}*/

void List::ReadFiles()
{
	ifstream infile;
	cout<<"�������ȡ���ļ�����"<<endl;
	char filename[100];
	cin>>filename;
	infile.open(filename);
	
	char name[20];
	char age[5];
	char addr[40];
	char tele[15];
	char c;
	string waste;
	infile>>c;
	while(!infile.eof()){
		if(c=='P'||c=='p'){
			infile>>name>>addr>>tele>>age;
			if(judge_int(age)==1){
				cout<<"��������������,��һ���к���,�����¸�λ"<<endl;
			}else{
				Person per(name,age,addr,tele);
				insert_Person(&per);
			}
		}else if(c=='S'||c=='s'){
			char level[5];
			char gpa[5];
			infile>>name>>addr>>tele>>age>>gpa>>level;
			if(judge_int(age)==1||judge_float(gpa)==1||judge_int(level)==1){
				cout<<"��������������,��һ���к���,�����¸�λ"<<endl;
			}else{
				Student stu(name,age,addr,tele,level,gpa);
				insert_Person(&stu);
			}
		}else if(c=='T'||c=='t'){
			char salary[10];
			infile>>name>>addr>>tele>>age>>salary;
			if(judge_int(age)==1||judge_float(salary)==1){
				cout<<"��������������,��һ���к���,�����¸�λ"<<endl;
			}else{
				Teacher tea(name,age,addr,tele,salary);
				insert_Person(&tea);
			}
		}else if(c=='E'||c=='e'){
			char wage[5];
			infile>>name>>addr>>tele>>age>>wage;
			if(judge_int(age)==1||judge_float(wage)==1){
				cout<<"��������������,��һ���к���,�����¸�λ"<<endl;
			}else{
				Staff sta(name,age,addr,tele,wage);
				insert_Person(&sta);
			}
		}else{
			cout<<"���ֲ���ʶ�������"<<c<<",��һ���к���"<<endl;
			getline(infile,waste);
		}
		infile>>c;
		if(c=='\n'){
			infile>>c;
		}
	}
	infile.close();
}

void List::WriteFiles()
{
	cout<<"������Ҫ��������ļ�����"<<endl;
	char filename[100];
	cin>>filename;
	ofstream outfile;
	outfile.open(filename);
	Person *cur=root;
	while(cur!=0){
		cur->print(outfile);
		cur=cur->next;
	}
	outfile.close();
}

