//char*(*pf)(char*,const char*)
//char*(*pfArr[4])(char*,const char*)//函数指针数组
#include<stdio.h>
void menu()
{
	
	printf("***************************\n");
	printf("****1.Add****2.Sub****3.mul\n");
	printf("**********0.退出***********\n");
	
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
		printf("请选择：>");
		scanf("%d",&chanel); 
	
		
		switch (chanel)
		{
			case 1:
					printf("请输入两个操作数：>");
		            scanf("%d%d",&a,&b);
				printf("%d",Add(a,b));
				break;
		    case 2:
		    		printf("请输入两个操作数：>");
		            scanf("%d%d",&a,&b);
			    printf("%d",Sub(a,b));
			    break;
		    case 3:
		    		printf("请输入两个操作数：>");
		            scanf("%d%d",&a,&b);
		    	printf("%d",Mul(a,b));
		    	break;
		    case 0:
			printf("退出");	
		    default:
			printf("选择错误");
			break;	
		    	
		}
	}
	
	while(chanel); 
	
	

	
	return 0;
 } 
