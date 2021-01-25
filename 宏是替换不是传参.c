//宏是完成替换的而不是完成传参的 
#define  SQU(x)  x*x 
#include<stdio.h>
int main()
{
	
	
int	ret=SQU(5+1);//以上替换成5+1*5+1=11所以打印出11而不是36 ，所以宏的参数可以用（）括起来 （（x）*（x） ） 
	
	
	
	printf("%d",ret);
	
	return 0;
 } 
