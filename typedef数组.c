//typedefʹ�ò���
//1���������е����Ͷ���һ������ 
//2���ñ����滻������ 
//3�����������ʽǰ��typedef
#include<stdio.h>
int myadd(int x,int y)
{
	return x+y;
}
int main()
{
 
 typedef int i32; 
 //������ȡ����
 //int arr[5].............
 typedef  int myarr[5];
 myarr arrr={10,2,1,1,3};
 int i=0;
 for(i=0;i<5;i++)
 {
 printf ("%d",arrr[i]);}

 
 //��һ��ָ��ȥ������ 
 typedef int*TYPEP;
 int num=10;
 TYPEP p=&num;
 printf("%d",*p);
  //������ָ��ȡ������
//int (*p1)(int x,int y)=myadd;//����ָ�붨�����
 
typedef int (*FUNP)(int x,int y);
FUNP p1=myadd;
printf("\n%d!!!!",p1(100,200));
//���ṹ������ȡ������
 
 //
// struct stu
// {
// 	int age;
// 	char c;
// 
// }; 
 //struct stu s;//�ṹ���������
 // 
 typedef struct stu
 {
 	int age;
 	char c;
 
 }STU,*STU; //ͬʱ��һ���ṹ��ָ�� 
 STU s={1,'T'};
 printf("%d %c",s.age,s.c);
  return 0;
}
