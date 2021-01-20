#include<stdio.h>
int main()
{




int i=0,a=0,b=2,c=3,d=4;
i=a++&&++b&&d++;//逻辑与&&如果左边算出为0右边不再算了逻辑||也是如此 
printf("%d %d %d %d",a,b,c,d); 
	return 0;



 } 
