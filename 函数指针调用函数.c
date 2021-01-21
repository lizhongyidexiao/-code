#include<stdio.h> 

int Add(int x,int y)
{
	int z=0;
	return x+y;
	
}


int main()

{
	
	//&函数名和函数名都是函数的地址
	//printf("%p",&Add)等价于printf（“%p”，Add） 
	//
	//
	int (*pa)(int,int)=Add;
	
	 printf("%d",(*pa)(2,9));
	
	return 0;
}
