#include<iostream>
using namespace std;
class Employee{
	public:
		int e_id;
		string name;
		int ba;
		int da;
		int it;
		int net_sal;
		void read(){
			cout<<"enter e_no,name,basic,Da,it :";
			cin>>e_id>>name>>ba>>it;
		}
		void call_net_sal(){
			net_sal = ba + da - it;
		}
		void display(){
			cout<<"employee id is: "<<e_id<<endl;
			cout<<"employee name is: "<<name<<endl;
			cout<<"basic is: "<<ba<<endl;
			cout<<"it is:"<<it<<endl;
			cout<<"net salary is: "<<net_sal<<endl;
		}
};
int main(){
	Employee e;
	e.read();
	e.call_net_sal();
	e.display();
	return 0;
}
