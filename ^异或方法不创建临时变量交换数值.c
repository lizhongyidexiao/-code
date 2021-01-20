#include<stdio.h>
int main()
{
	int a=3;
	int b=5;
	a=a^b;
	b=a^b;
	a=a^b;

//^异或：相同为0相异为1  //011 3
                         //101 5
                         
                         
                         //110

//异或，a和b异或相当于产生一个密码，密码异或原来的b得到为a 
printf("%d %d",a,b);
	return 0;



 } 
