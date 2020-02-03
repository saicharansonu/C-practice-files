#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() 
{
  
  int n,i,m;
  cin>>m;
  char arr[20];
  do
  { 
  m--;
  cin>>arr;
  n=strlen(arr);
  for(i=0;i<n;i+=2)
  {
      cout<<arr[i];
  }
  cout<<" ";
  for(i=1;i<n;i+=2)
  {
      cout<<arr[i];
  }
  cout<<endl;
  
  }
  while(m=m);


  return 0;
}


