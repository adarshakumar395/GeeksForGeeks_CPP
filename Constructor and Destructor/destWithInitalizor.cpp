#include<bits/stdc++.h>
#include<climits>
#include<cmath>
#include<cstring>
using namespace std;
class Test
{
	int x;
	public:
		Test(int i):x(i)
		{
			cout<<"Constructor: " << x <<endl;
		}
		~Test()
	      {
	      	cout<<"Destructor: "<< x <<endl;
		 }
};

int main()
{

     Test t1(10);
     Test t2(20);
     
	return 0;
	
	
}

/*Constructor: 10
Constructor: 20
Destructor: 20
Destructor: 10*/

//Note: Dest. called opp of Constr.