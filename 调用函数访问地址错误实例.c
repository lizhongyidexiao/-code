#include<stdio.h>
int *test()
{
	int a=10;
	return &a;
}

//int a����test����ʱ����������test�������ڴ��ͷţ���ʱ��ͨ��ָ����������ַ�ı������������bug�� 
int main()
{
	int*p=test();
	printf("%d",*p);
	
	
	
	return 0;
}
//int*p=NULL;ָ�벻֪����ʲôֵ��������NULL��NULL  ==��void*��0 
