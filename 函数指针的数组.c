
 int Add(int x,int y)
 {return x+y;
 }
int Sub(int x,int y)
{return x-y;
}





int main()
{
	int(*pa)(int,int)=Add;
	//pa是一个指针，指向一个函数，函数的形参是int，返回值是int 
	//指针数组 int*arr[5] 
	//函数指针的数组 
	//
	int(*parr[2])(int,int)={Add,Sub};//pa首先和【】结合，是个数组，数组2个元素；数组名pa【】去掉，剩下的就是函数指针类型 
	int i=0;
	for(i=0;i<2;i++)
	{printf("%d \n   ",parr[i](2,3));
	 } 
	return 0;
 } 
