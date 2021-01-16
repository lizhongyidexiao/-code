#include<stdio.h>
int main()//类比十进制123，不断%10，除10可以得到123的每一位，123%10=3；12%10=2；1%10=1同理二进制%2可以得到二进制的每一位 
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
//以上代码存在问题，例如num=-1时 
