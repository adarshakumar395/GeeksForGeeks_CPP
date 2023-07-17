#include<bits/stdc++.h>
#include<climits>
#include<cmath>
#include<cstring>
using namespace std;
class Test
{
	public:
		Test()
		{
			cout<<"Constructor Called"<<endl;
		}
		~Test()
	      {
	      	cout<<"Destructor Called"<<endl;
		 }
};

int main()
{
	{
	
     	Test t1;
     }
	Test t2;
	return 0;
	
	
}
/*Constructor Called
  Destructor Called
  Constructor Called
  Destructor Called*/