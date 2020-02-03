#include<stdio.h>
#include<conio.h>

int main()
{
	int sno[10];
	int age[10];
	char name[10][10];
	int i,j,n,sum=0;
	
	printf("Enter the required credentials to form a table :\n");
	printf("ENTER HOW MANY EMPLOYEES\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("ENTER SERIAL NUMBERS:");
	scanf("%d",&sno[i]);
	
	}
	for(i=0;i<n;i++)
	{
		printf("ENTER NAME:");
		scanf("%s",&name[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("ENTER AGE :");
		scanf("%d",&age[i]);
		
	} 
	for(i=0;i<n;i++)
	{
		sum+=age[i];
		
	}
	
	printf("      ****TABLE OF EMPLOYEE****\n");
	printf(   "S.NO        NAME             AGE\n");
	for(i=0;i<n;i++)
	{
		printf("%d          %s             %d\n",sno[i],name[i],age[i]);
		
	}
	printf("sum of ages :%d",sum);
	return sum;
}
