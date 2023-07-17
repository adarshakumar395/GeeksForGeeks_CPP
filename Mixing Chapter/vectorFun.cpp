#include<iostream>
#include<vector>

using namespace std;

 void fun(vector<int>v)
 {
 	for(int x: v)
 	cout<< x<< " ";
 	
 	cout<<v.capacity();
 	cout<<v.size();
 }
int main()
{
	vector<int>v{23,45,56,57,68,10,11};
	fun(v);
	return 0;
}