#include<stdio.h>
int main()
{
	int a=3;
	int b=5;
	a=a^b;
	b=a^b;
	a=a^b;

//^�����ͬΪ0����Ϊ1  //011 3
                         //101 5
                         
                         
                         //110

//���a��b����൱�ڲ���һ�����룬�������ԭ����b�õ�Ϊa 
printf("%d %d",a,b);
	return 0;



 } 
