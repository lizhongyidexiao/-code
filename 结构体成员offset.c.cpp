#include<stdio.h>
#include<stddef.h> 
//#pragma pack(1)
struct S
{char c;
int  i;
double d;
		
};
//#pragma pack()


int main(void)

{
printf("结构体c的偏移量%d\n",offsetof(struct S,c));
printf("结构体i的偏移量%d\n",offsetof(struct S,i));	
printf("结构体d的偏移量%d\n",offsetof(struct S,d));	
		
	return 0;
}
