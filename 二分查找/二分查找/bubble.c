#include<stdio.h>
void bubble_sort(int arry[],int sz)
{
	//ȷ��ð����������� 
	int i=0;
	for(i=0;i<sz-1;i++)//9 8 7 6 5 3
	
	{
		//ÿһ��ð������ 
	    int j=0;
	     for(j=0;j<=sz-1-i;j++)
	
	    {
	     if( arry[j]>arry[j+1])
	     {
	      int temp=arry[j];
	      arry[j]=arry[j+1];
	      arry[j+1]=temp;
	    }
     }  }
}  

int main()

{

int arry[]={9,8,7,6,5,3};
int i=0;
int sz=sizeof(arry)/sizeof(arry[0]);
bubble_sort(arry,sz);
for(i=0;i<sz;i++)
{
printf("%d",arry[i]);
}
return 0;
}


