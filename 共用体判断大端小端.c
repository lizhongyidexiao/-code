#include<stdio.h>
int check_sys()
{
	
	
	union un
	
	{
	  
	char c;
	int a;
	};
	union un   u;
	u.a=1;
	return u.c;
 } 




int main()
{
	
	
	if(1==check_sys())
	printf("��ĵ�����С�˰���������������");
	
	return 0;
}
