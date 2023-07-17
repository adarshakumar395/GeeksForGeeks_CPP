#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector<int>v{12,45,67,89};
//  v.pop_back();
  

  
//  cout<< v.front()<<" ";
//  cout <<v.back() <<" ";	
  
  v.insert(v.begin()+2, 100);
 
    for(int x: v)
  cout<< x <<" ";
  cout<<endl;
  v.insert(v.begin(),2, 300);
  
  vector<int>v2;
  v2.insert(v2.begin(),v.begin(),v.begin()+4);
  
  for(int x: v)
  cout<< x << " ";
  cout<< endl;
  for(int y: v2)
  cout<< y <<" ";
  cout<< endl;
  
  
       
  
//  v.erase(v.begin());

v.erase(v.begin(),v.begin()+3);
  for(int z: v)
  cout<<z<<" ";
//  v.clear();
  cout<< v.size();
  v.resize(3);
  
  return 0;
  
}

