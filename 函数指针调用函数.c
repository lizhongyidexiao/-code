#include<stdio.h> 

int Add(int x,int y)
{
	int z=0;
	return x+y;
	
}


int main()

{
	
	//&�������ͺ��������Ǻ����ĵ�ַ
	//printf("%p",&Add)�ȼ���printf����%p����Add�� 
	//
	//
	int (*pa)(int,int)=Add;
	
	 printf("%d",(*pa)(2,9));
	
	return 0;
}
