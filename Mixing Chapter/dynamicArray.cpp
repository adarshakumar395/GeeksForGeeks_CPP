#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	// dynamic memeiry allocation
	int x=0;
	int *arr = NULL ;
	arr = new int[10];
	for(int i=0; i<10 ; i++)
	arr[i] = i+1;
	
		for(int i=0; i<10 ; i++)
	cout << arr[i]<<" ";
	
	return 0;
}