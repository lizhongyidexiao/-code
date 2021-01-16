#include<stdio.h>
int main()
{
	
	int num=0; 
	int count=0;
	
	int i=0;
	
	scanf("%d",&num);
	for(i=0;i<32;i++)
	{
		
		
		
		if(1==((num>>i)&1))
		count++;
	}
	printf("%d",count);
	
	
	
	
	
	//0&1=0;1&1=1;利用谁&1还等于谁 
	return 0;
}
