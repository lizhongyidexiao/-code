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
	fun1();//�뿪������Ҫ���ͷţ����¶����������ֵ����������������12�� 
	
	return 0;
 } 
