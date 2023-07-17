#include<iostream>
using namespace std;

class Complex{
	private:
		int real;
		int img;
	public:
		void print()
		{
			cout<<real<<"+"<<img<<endl;
		}
		Complex(int r,int i) // creating a constructor
		{
			real =r;
			img=i;
		}
};

int main()
{
	Complex c1(10,5);  // calling a constructor
	c1.print();
	return 0;
}

// output:10+5