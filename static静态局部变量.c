#include<stdio.h>
void fun1()
{
	
	
	
	static int a=11;//��̬�ֲ��������������ںܳ����������̽��� ��̬�����洢��ȫ�������ֲ���������ջ���� 
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
