#include<stdio.h>
int main()//���ʮ����123������%10����10���Եõ�123��ÿһλ��123%10=3��12%10=2��1%10=1ͬ�������%2���Եõ������Ƶ�ÿһλ 
{
	int num=0;
	int count=0;
	scanf("%d",&num);
	while(num)
	{
		if(num%2==1)
		count++;
		num=num/2;
	 } 
	 
	
	printf("%d",count);
	
	

	
	return 0;
}
//���ϴ���������⣬����num=-1ʱ 
