#include<stdio.h>
int main()
{
 int arry[]={1,1,2,2,3,3,4,4};
 int i=0;
 int*p=arry;
 int sz=sizeof(arry)/sizeof(arry[0]); 
	for(i=0;i<sz;i++)
	{
	printf("%d",*p);
	p+=1;
    }
	
	
	
	
	
	return 0;
 } 
