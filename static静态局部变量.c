#include<stdio.h>
void fun1()
{
	
	
	
	static int a=11;//静态局部变量，生命周期很长，整个进程结束 静态变量存储在全局区，局部变量存在栈区。 
	a++;
	printf("%d",a);
	printf("\n%p\n",&a);

}

int main()
{
	
	fun1();
		fun1();
	
		fun1();
		fun1();// 
//		12 13 14
	return 0;
 } 
