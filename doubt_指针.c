#include<stdio.h>
 int main()
 {
 	char*p="abcde";//这种写法也是可以的，此时“abcde”是一个常量字符串，把a的地址给p
	 printf("%c",*p);//此时输出结果为a 
	 printf("%s",p);
 	return  0;

 }
