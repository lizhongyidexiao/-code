#include<stdio.h>
int fun1()
{
	int num =11;
	num++;
	int* p=&num;
printf("%d",num);
printf("\n%p\n",*p) ;
}
int main()
{
	
	
	
 
	
	
	fun1();
	fun1();
	fun1();//离开大括号要被释放，重新定义变量，赋值，所以输出结果都是12； 
	
	return 0;
 } 
