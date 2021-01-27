

#include<stdio.h>

int main()
{ 
//	   指针与const 
int a=10;
int *const q=&a;
//q++;错误 const修饰指针，指针就是常量指针，不能被修改；但是指针指向的是个变量，可以被修改
*q=30;



return 0;
}
