//char*(*pf)(char*,const char*)
//char*(*pfArr[4])(char*,const char*)//����ָ������
#include<stdio.h>
void menu()
{
	
	printf("***************************\n");
	printf("****1.Add****2.Sub****3.mul\n");
	printf("**********0.�˳�***********\n");
	
}
int Add(int x,int y)
{
	return x+y;
}
int Sub(int x,int y)
{
	return x-y;
}
int Mul(int x,int y)

{
	return x*y;
}


int main()
{
	    int a=0;
		int b=0;
		int chanel=0;
	do
	{
		
		menu();
		printf("��ѡ��>");
		scanf("%d",&chanel); 
	
		
		switch (chanel)
		{
			case 1:
					printf("������������������>");
		            scanf("%d%d",&a,&b);
				printf("%d",Add(a,b));
				break;
		    case 2:
		    		printf("������������������>");
		            scanf("%d%d",&a,&b);
			    printf("%d",Sub(a,b));
			    break;
		    case 3:
		    		printf("������������������>");
		            scanf("%d%d",&a,&b);
		    	printf("%d",Mul(a,b));
		    	break;
		    case 0:
			printf("�˳�");	
		    default:
			printf("ѡ�����");
			break;	
		    	
		}
	}
	
	while(chanel); 
	
	

	
	return 0;
 } 
