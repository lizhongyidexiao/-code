#include<stdio.h>
#include<string.h>
int main()

{
	
	//strting copy   ԭ��char*strcpy(char*destination,const char*souorce)
	//                                    Ŀ�ĵ�      Դͷ 
	char cha1[20]={"welcome to hangzhou"} ;
	char  cha2[]={"####33333333"};

	strcpy(cha1,cha2);
	printf("%s",cha1);
	printf("%s",cha2);
	
	
	
	//�ַ����Դ�������־\0;ռһ���ַ� 
	
	return 0;
}
