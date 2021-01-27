#include<stdio.h>
void my(void) 
{
	printf("\n函数调用成功\n");
}
int main()
{
	
//	printf("%p",main);
void (*pmy)(void)=&my; 
//	printf("%d",pmy) ;
	printf("%p",pmy) ;
((void (*)(void))4199680)();//通过函数地址强制转换成函数指针，调用相关函数！！！！
 ((void (*)(void))0x00401500)();//利用16进制地址直接调用。此时0x不能省略如果省略代表十进制，前面是0代表八进制！！！！！ 

	return 0;
 } 
