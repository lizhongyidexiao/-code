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
//Ϊɶ��δ���malloc��2��Ҳ�ܴ�ӡ1000��int��ʲô������������ 
