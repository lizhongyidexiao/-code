#include<stdio.h>
int main()
{
#define DEBUG
	int arr[]={0,1,2,3,4,5,6};
	int i=0;
	for(i=0;i<6;i++)
	{
	arr[i]=0;
#ifdef DEBUG
	printf("%d",arr[i]);
	
#endif  
    }
	return 0;
 } 
