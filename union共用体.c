#include<stdio.h>
int main()
{
	
	union uon
	{
		char a; 
		int i;
	};
		union uon u;
	printf("%d",sizeof(u));
	printf("%p\n",&(u.a));
	
  printf("%p\n",&u);
  	printf("%p\n",&(u.i));
	
	
	
	return 0;
	
 } 
