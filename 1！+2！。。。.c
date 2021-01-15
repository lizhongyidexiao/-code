#include <stdio.h>
int main()
{
int n,i,sum;
int ret=1;


for(n=1;n<=3;n++)
{
	for(i=1;i<=n;i++)
	{ret=ret*i;
	}
	
	
	
	sum=sum+ret;
	
}


printf("%d",ret);





return 0;
}
