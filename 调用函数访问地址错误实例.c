#include<stdio.h>
int *test()
{
	int a=10;
	return &a;
}

//int a进入test函数时创建，出了test函数，内存释放，此时还通过指针访问这个地址的变量，将会产生bug； 
int main()
{
	int*p=test();
	printf("%d",*p);
	
	
	
	return 0;
}
