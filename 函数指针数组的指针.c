#include<stdio.h>
int main()
{
	
	
int arr[10];//���� 
int (*parr)[10]=&arr;//ȡ������ĵ�ַ 
int (*pf)(int,int);//����ָ�� 
int(*pfarr[4])(int,int);//pfarr��һ������------����ָ������� 

int (*(*ppfarr)[4])(int,int)=&pfarr;//ppfarr��һ��ָ�룬ָ��һ�����飬ָ���������4��Ԫ�أ�ÿ��Ԫ����һ������ָ��int��*����int��int�� 





	
	
	
	
	return 0;
}
