#include<iostream>
using namespace std;

int main()
{
	double x,y;
	cout << "Enter the double no";
	cin >> x;
	cout <<"Enter another double no";
	cin >>y;
	
	try{
		if(x==0.0)
		throw 0;
		if(y==0.0)
		throw string("Y is zero");
		if (x+y>0)
		throw (x+y);
	}
	catch(int x){
		cout << "The result is "<< x;
	}
	catch(string e){
		cout<<"error is string"<<e;
	}
	catch(...){
		cout<<"X+Y is less thsn 0";
	}
}