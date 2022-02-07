#include<iostream>
using namespace std;
class Student{
	string name;
	int roll_no;
	public:
		void read(){
			cout<<"enter name , roll no:";
			cin>>name>>roll_no;
		}
		void display(){
			cout<<"name is: "<<name<<endl;
			cout<<"roll is:" <<roll_no<<endl;
		}
};
int main(){
	Student s;
	Student *ptr;
	ptr = &s;
	(*ptr).read();
	(*ptr).display();
	return 0;
}

