#include<stdio.h>


void  print2(int(*p)[5],int x,int y)//参考打印二维数组备注，此时为什么传参这么样 
{
	int i=0;
	int j=0;
	for(i-0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d",*(*(p+i)+j));
			//printf("%d,*(*(p+i)[j]))和上面这句打印结果一样，也可以 
		
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
