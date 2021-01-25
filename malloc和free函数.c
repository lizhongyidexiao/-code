#include<stdio.h>
#include<stdlib.h> 
int main()
{
	
	
	
	int*p=(int*)malloc(2);
	
	int i=0;
	for(i=0;i<1000;i++)
	*(p+i)=i;
	for(i=0;i<100;i++)
	printf("%d",*(p+i));
	
	free(p);
	
	
	return 0;
}
//为啥这段代码malloc（2）也能打印1000个int，什么鬼》？？？？？ 
