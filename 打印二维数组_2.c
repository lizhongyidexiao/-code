#include<stdio.h>


void  print2(int(*p)[5],int x,int y)//�ο���ӡ��ά���鱸ע����ʱΪʲô������ô�� 
{
	int i=0;
	int j=0;
	for(i-0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d",*(*(p+i)+j));
			//printf("%d,*(*(p+i)[j]))����������ӡ���һ����Ҳ���� 
		
		}
		printf("\n");
	}
	
	
}


int main()
{	
	int arr[3][5]={{1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3}};
	print2(arr,3,5);
	return 0;
}
