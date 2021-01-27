#include<stdio.h>
int main()
{
	int i=10;
	const int*ps=&i;
	ps++;
	i=20;//要注意此时的i还是一个变量，可以被赋值，但是*ps不能被赋值，因为*ps所指向是一个const 
	
	
	
	
	
	
	return 0;
 } 
