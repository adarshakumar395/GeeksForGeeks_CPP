#include<iostream>
using namespace std;

class Point{
	private:
		int x;
		int y;
	public:
		Point()
		{
			int x=0;
			int y=0;
		}
		Point(int x1,int y1)
		{
			x=x1;
			y=y1;
		}
		
		void print()
		{
			cout<<x<<" "<<y<<endl;
		}
};
int main()
{
	Point p1,p2(10,5);
	p1.print();
	p2.print();
	Point *ptr = new Point(20,5); // dynamic memory alloc. to the cons
	ptr->print();
	return 0;
}

//output : 0 0 10 5 20 5