#include<iostream>
 using namespace std;
 inline int add(int x,int y)
 {
 	int z;
 	z=x+y;
 	return z;
 }
 int main()
 {
 	int x,y;
 	cout<<"Enter two numbers : ";
 	cin>>x>>y; 
 	y=add(x,y);
 	cout<<"addition = "<<y;
	return 0;
 }
