
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
		int(*parr[4])(int,int)={0,Add,Sub,Mul};
		do 
	{
		
		menu();
		printf("请选择：>");
		scanf("%d",&chanel);
		if(chanel>=1&&chanel<=3)
		{
			printf("请输入两个操作数:>");
			scanf("%d %d",&a,&b); 
		int ret=parr[chanel](a,b);
		printf("%d",ret);
     	}
     	else if(chanel==0)
     	{
     		printf("退出");
		 }
        else 
        {
        	printf("选择错误");
		}


	}

     while(chanel) ;
	
	return 0;
 } 
