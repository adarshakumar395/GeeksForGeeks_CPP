#include<iostream>
using namespace std;

class Test{
	int ptr;
	public:
		Test ()
		{
		   cout <<"Constructor Called"<<endl;
		}
		~Test()
		{
			cout<<"Destructor Called";
		}
};

int main()
{
	Test t1;
	return 0;
}

/*output:Constructor Called
       Destructor Called*/