

#include<stdio.h>

int main()
{ 
//	   ָ����const 
int a=10;
int *const q=&a;
//q++;���� const����ָ�룬ָ����ǳ���ָ�룬���ܱ��޸ģ�����ָ��ָ����Ǹ����������Ա��޸�
*q=30;



return 0;
}
