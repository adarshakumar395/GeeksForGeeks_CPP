#include<iostream>
using namespace std;

void f1() throw (int){
	cout<< "fi begins\n";
	
	throw 100;	
	cout <<"f1 ends\n";
}

void f2() throw (int){
	cout << "f2 begins\n";
	f1();
	cout<<"f2 ends\n";
}

int main()
{
	try{
			f2();
	}
	
	catch(int a){
		cout<<"cought exception\n";
	}
cout <<"Bye\n";
	
	return 0;
}
