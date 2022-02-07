#include<iostream>
using namespace std;
int main(){
	int *ptr;
	ptr = new int;
	cout<<"size is:"<<sizeof(ptr)<<endl;
	*ptr = 100;
	cout<<"value of *ptr is"<<*ptr<<endl;
	return 0;
}
