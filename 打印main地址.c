#include<stdio.h>
void my(void) 
{
	printf("\n�������óɹ�\n");
}
int main()
{
	
//	printf("%p",main);
void (*pmy)(void)=&my; 
//	printf("%d",pmy) ;
	printf("%p",pmy) ;
((void (*)(void))4199680)();//ͨ��������ַǿ��ת���ɺ���ָ�룬������غ�����������
 ((void (*)(void))0x00401500)();//����16���Ƶ�ֱַ�ӵ��á���ʱ0x����ʡ�����ʡ�Դ���ʮ���ƣ�ǰ����0����˽��ƣ��������� 

	return 0;
 } 
