
 int Add(int x,int y)
 {return x+y;
 }
int Sub(int x,int y)
{return x-y;
}





int main()
{
	int(*pa)(int,int)=Add;
	//pa��һ��ָ�룬ָ��һ���������������β���int������ֵ��int 
	//ָ������ int*arr[5] 
	//����ָ������� 
	//
	int(*parr[2])(int,int)={Add,Sub};//pa���Ⱥ͡�����ϣ��Ǹ����飬����2��Ԫ�أ�������pa����ȥ����ʣ�µľ��Ǻ���ָ������ 
	int i=0;
	for(i=0;i<2;i++)
	{printf("%d \n   ",parr[i](2,3));
	 } 
	return 0;
 } 
