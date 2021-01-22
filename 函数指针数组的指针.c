#include<stdio.h>
int main()
{
	
	
int arr[10];//数组 
int (*parr)[10]=&arr;//取出数组的地址 
int (*pf)(int,int);//函数指针 
int(*pfarr[4])(int,int);//pfarr是一个数组------函数指针的数组 

int (*(*ppfarr)[4])(int,int)=&pfarr;//ppfarr是一个指针，指向一个数组，指向的数组有4个元素，每个元素是一个函数指针int（*）（int，int） 





	
	
	
	
	return 0;
}
