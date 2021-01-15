



#include<stdio.h>
int mystr(char*arry)
{
	if((*arry)!='\0')
	return(1+mystr(arry+1));
	else
	return 0;
	
	
}
int main()
{
	

	char arry[]="wanwan";
	int len=mystr(arry);
	printf("%d\n",len);
	
	return 0;
}
