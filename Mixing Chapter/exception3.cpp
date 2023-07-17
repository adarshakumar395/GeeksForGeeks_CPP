#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int average(int arr[],int n)throw (string)
{
	if(n==0)
	throw string("The size of Array is Zero");
	int sum =0;
	for(int i=0; i<n; i++){
		sum=sum + arr[i];
		
	}
	return sum/n;
}

int main()
{
	int arr[]={1,2,3,45,6};
	int n=0;
	try{
		int res= average(arr,n);
		cout<< res;
		
	}
	catch(string e){
		cout << e;
	}
	return 0;
}