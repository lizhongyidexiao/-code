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
printf("�ṹ��c��ƫ����%d\n",offsetof(struct S,c));
printf("�ṹ��i��ƫ����%d\n",offsetof(struct S,i));	
printf("�ṹ��d��ƫ����%d\n",offsetof(struct S,d));	
		
	return 0;
}
