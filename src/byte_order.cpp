#include<iostream>
using namespace std;

int main()
{
	union Node{
		int num;
		char haha[2];
	};
	Node test;
	test.num = 0x0102;
	if(test.haha[0]==1 && test.haha[1] == 2)
		cout<<"big endian"<<endl;
	else 
		cout<<"little endian"<<endl;
	return 0;
}
