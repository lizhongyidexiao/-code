#include<stdio.h>
int main()
{
	int i=10;
	const int*ps=&i;
	ps++;
	i=20;//Ҫע���ʱ��i����һ�����������Ա���ֵ������*ps���ܱ���ֵ����Ϊ*ps��ָ����һ��const 
	
	
	
	
	
	
	return 0;
 } 
