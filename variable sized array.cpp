#include<iostream>
#include<stdlib.h>
 using namespace std;
 int main()
 {
   int n,q,m,l,k;
   cin>>n>>q;
   int *
   arr[n];
   for(int i=0;i<n;i++)
   {
   	cin>>m;
   	arr[i]=(int*)malloc(m*sizeof(int));
   	for(int j=0;j<m	;j++)
   	{
   		cin>>arr[i][j];
	}
   }
   while(q--)
   	{
   		cin>>l>>k;
   		cout<<arr[l][k];
	   }
 }
 
