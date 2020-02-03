#include<iostream>
 using namespace std;
 class stack
 {
 	public:
	 int data[10],tos;
 	stack()
 	{
 		tos=-1;
	}
	void push(int x);
	void pop();
	void  display();
};
void stack ::  push(int x)
{
	if(tos>9)
	{
		cout<<"stack is full";
		return;	
	}
	else
	{
		data[++tos] = x;
		cout<<"inserted is :"<<x;
	}
	
}
void stack :: pop()
{
	if(tos<0)
	{
		cout<<"no elements to pop";
		return;
	}
	else
	{
	  cout<<"deleted is :"<<data[tos--];	
	}
	
}
void stack:: display()
{
	if(tos<01)
	{
		cout<<"empty";
		return ;
		
	}
else
	{
		for (int i = tos;i>=0;i--)
		cout<<data[i]<<"  ";
		
	}
}
main()
{
     int ch;
     stack st;
     while(1)
        {
             cout <<"\n1.push  2.pop  3.display  4.exit\nEnter ur choice  : " ;
             cin >> ch;
             switch(ch)
              {
               case 1:  cout <<"enter the element : ";
                        cin >> ch;
                        st.push(ch);
                        break;
               case 2:  st.pop();  break;
               case 3:  st.display();break;
               case 4:  exit(0);
               }
         }
return (0);
}
