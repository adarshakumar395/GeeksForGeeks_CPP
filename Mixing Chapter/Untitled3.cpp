#include<iostream>
using namespace std;

class player{
	static int count;
	
	player(){
		count++;
	}
	~player(){
		count--;
	}
};

int players :: count=0;

int main()
{
	player p1;
	cout<< players :: count;
	
	player p2;
	cout<< players:: count;
	
	retrun 0;
	

}