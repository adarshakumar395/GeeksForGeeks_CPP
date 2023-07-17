#include<iostream>
#include<bits/stdc++.h>
#include<climits>
#include<cmath>

using namespace std;
const int m=3;
const int n=2;
// passing 2d array as anargument
 void print(int arr[m][n])
{
	
	for(int i=0; i<m; i++){
		for (int j=0; j<n ;j++){
			cout <<arr[i][j]<<" ";
		}
		cout << endl;
	}
}

int main()
{
	int arr[m][n]={{12,23},
				{23,45},
				{34,67},
	              };
	print(arr);
	return 0;
}

