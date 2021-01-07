#include<stdio.h>
#include<string.h>
int main()

{
	
	//strting copy   原型char*strcpy(char*destination,const char*souorce)
	//                                    目的地      源头 
	char cha1[20]={"welcome to hangzhou"} ;
	char  cha2[]={"####33333333"};

	strcpy(cha1,cha2);
	printf("%s",cha1);
	printf("%s",cha2);
	
	
	
	//字符串自带结束标志\0;占一个字符 
	
	return 0;
}
