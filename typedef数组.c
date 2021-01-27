//typedef使用步骤
//1，先用已有的类型定义一个变量 
//2，用别名替换变量名 
//3，在整个表达式前加typedef
#include<stdio.h>
int myadd(int x,int y)
{
	return x+y;
}
int main()
{
 
 typedef int i32; 
 //给数组取别名
 //int arr[5].............
 typedef  int myarr[5];
 myarr arrr={10,2,1,1,3};
 int i=0;
 for(i=0;i<5;i++)
 {
 printf ("%d",arrr[i]);}

 
 //给一级指针去个别名 
 typedef int*TYPEP;
 int num=10;
 TYPEP p=&num;
 printf("%d",*p);
  //给函数指针取个别名
//int (*p1)(int x,int y)=myadd;//函数指针定义变量
 
typedef int (*FUNP)(int x,int y);
FUNP p1=myadd;
printf("\n%d!!!!",p1(100,200));
//给结构体类型取个别名
 
 //
// struct stu
// {
// 	int age;
// 	char c;
// 
// }; 
 //struct stu s;//结构体变量定义
 // 
 typedef struct stu
 {
 	int age;
 	char c;
 
 }STU,*STU; //同时搞一个结构体指针 
 STU s={1,'T'};
 printf("%d %c",s.age,s.c);
  return 0;
}
