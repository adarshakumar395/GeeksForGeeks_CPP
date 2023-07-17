#include<iostream>
using namespace std;

class Base{
	public:
		int x;
		public:
			Base(int a):x(a){
				
			}
};

class Derived : public Base{
	private:
		int y;
		public:
			Derived(int a, int b) : Base(a),y(b){
				
			}
			void print(){
				cout << x<<" "<<y;
			}
};

int main()
{
	Derived d(10, 30);
	d.print();
	cout << d.x;
	
}