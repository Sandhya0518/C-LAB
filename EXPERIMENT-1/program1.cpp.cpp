#include<iostream>
using namespace std;
class Student{
	string name;
	int roll_no;
	int grade;
	public:
		void read(){
			cout<<"enter the name, roll_no, grade: ";
			cin>>name>>roll_no>>grade;
		}
		void display(){
			cout<<"name is: "<<name<<endl;
			cout<<"roll_no is: "<<roll_no<<endl;
			cout<<"grade is: "<<grade<<endl;
		}
};
int main(){
	Student s[3];
	int i;
	for(i=0;i<3;i++){
		s[i].read();
	}
	for(i=0;i<3;i++){
		s[i].display();
	}
	return 0;
}
