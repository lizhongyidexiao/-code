#include <stdio.h>
#define   OFFSETOF(struct_name,member_name)     (int)&(((struct_name*)0)->member_name)//µÈÍ¬ÓÚ£¨int£©&£¨£¨£¨struct S*£©0£©¡ª>c 
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
