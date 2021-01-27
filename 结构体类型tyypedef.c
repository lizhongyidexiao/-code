#include<stdio.h>
int main()
{
	
	
	
  typedef struct 
        {
       	int a;
       	char c;
		}xin;
		//此时xin是类型不是变量，匿名结构体类型重新取名为类型xin
	 xin xon ={1314,'w'};    
		
		printf("%d %c",xon.a,xon.c) ;
	
	
	
	
	return 0;
}
