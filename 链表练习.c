//Á´±í

#include<stdio.h>
int main()
{
struct s
{
	int i;
	char c;
	struct s*ps;
 } ;
 struct s lx=
 {
 	3,'w',0xff
 	
 };
 printf("%p",lx.ps);
 
 printf("%d",ps->i) ;
 
 
return 0;} 
