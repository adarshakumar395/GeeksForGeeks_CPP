#include<iostream>
using namespace std;

class print{
	
	private:
	int x, y;
	
	public:
	print(int a, int b){
		x=a;
		y=b;	
	}
	
	void printRes(){
		cout << x << y;
	}
};

int main()
{
	print p1(20,25);
	p1.printRes();
	return 0;
	
}