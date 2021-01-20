#include<stdio.h>
int main()
{

	int arr[]={1,234,4,5,6,7};
	printf("%d",&arr[5]-&arr[0]);
	return 0;
 } //指针与指针之间元素的个数；所以这里输出是5，不是4 
