#include<stdio.h>
int main(void){
	
	int a[]={1,2,3,4,5,4,3,2,1};
	
	
	int sz=sizeof(a)/sizeof(a[0]);
	int i=0;
	int sgt=0; 
	for(i=0;i<sz;i++)
     {
     	sgt=sgt^a[i];
     	
		 }	
		printf("单身狗是%d",sgt);
	
	
	
	

	return 0;
}
