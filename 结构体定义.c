#include<stdio.h>
int main()
{
	
	
	struct ai
	{
	  int a;
	  char b;
	  char c;
	};
	
	struct ai a=
	{1,'w','o'};
	printf("%c",a.b);
	return 0;
}

