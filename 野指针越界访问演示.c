#include <stdio.h>
int main()



{
	int a[10]={0};
	int*p=a;
	int i=0;
	for(i=0;i<=12;i++)
	{
//	*P=i;
//	p++;
	以上等同于*p++=i;
	}
	
	
	
	return 0;
}
