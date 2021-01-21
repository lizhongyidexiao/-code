#include<stdio.h>
void print1(int arr[3][5],int x,int y)
{	
	int i=0;
	int j=0;
	for(i=0;i<x;i++)
	{
		
		for(j=0;j<y;j++)
		printf("%d",arr[i][j]);
		printf("\n"); 
		
	}
}

int main()
{
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	print1(arr,3,5);
	

	return 0;
}
//需要注意的是arr为数组名，也是代表数组首元素的地址，但是但是由于此时是二位数组，
//首元素其实是第一行的地址（把这个二维数组想象成3行5列，想像成一位数组，3行就是3个元素，每一行就是5个int的地址） 
