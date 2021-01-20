#include<stdio.h>
int main()
{
	char arr[10]="abcdefg";
	char*p=&arr;
	//printf("%s",arr);
	//printf("%s",p);
	printf("%p",arr);
	printf("%p",p);
	
	
	return 0;
}
