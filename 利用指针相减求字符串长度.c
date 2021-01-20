#include<stdio.h>


int mystr_(char*ps)
{
	
	char*start=ps;
	char*end=ps;
while(*end!=0)

  {
  	end++;
  }
	return end-start;
	
	
	
	
	return 0;
}


int main()
{


char arr[]="bit";
int len=mystr_(arr);
printf("%d",len); 
	return 0;
 } 
