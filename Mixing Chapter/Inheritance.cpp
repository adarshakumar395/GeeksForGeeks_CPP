#include<iostream>
using namespace std;

class person{
	protected:
		string name;
		int id;
		person(string n , int i){
			name = n;
			id = i;
		}
};

class student : public person{
	private:
		int marks;
	public:
		student(string n, int i, int m ) : person(n,i){
			marks = m;
		}
		void fun(){
			cout << name <<" "<<id<<" "<<marks;
		}
		
};

int main()
{
	student stu("Rahul",101,400);
	stu.fun();
	return 0;
}