#include <stdio.h>
#define   OFFSETOF(struct_name,member_name)     (int)&(((struct_name*)0)->member_name)//��ͬ�ڣ�int��&������struct S*��0����>c 
int main()
{
	
	struct S
	{
		char c;
		int i;
		char b;
	};
	printf("%d",OFFSETOF(struct S,c));
	
	return 0;
}
