
//实现bubble-sort函数的程序员，他不知道未来要排序的数据类型以及待比较的两个元素的类型 
void swap(char*buf1,char*buf2,int width)
{
  	int i=0;
  	for(i=0;i<width;i++)
  	{
  		char tmp=*buf1;
  		*buf1=*buf2;
  		*buf2=tmp;
  		buf1++;
  		buf2++;
  		
  		
	  }
}



int cmp_int(const void*e1,const void*e2)
{
	return *((int*)e1)-*((int*)e2);
}


void bubble_sort(void*base,int sz,int width,int(*cmp)(void*,void*))
{
	int i=0;
	//趟数 
	for(i=0;i<sz-1;i++)
	 {//每一趟比较的对数 
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
		 if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
		 {
		   swap((char*)base+j*width,(char*)base+(j+1)*width,width);	//两个元素的比较 
		 
		 }
	 }
	 
	}
}


void test4()
{
	int arr[]={8,7,9,5,6};
	int sz=sizeof(arr)/sizeof(arr[0]);
	//使用bubble-sort的程序员一定知道自己排的是什么数据 //就应该知道这么比较待排序数组中的元素 ，然后调用你的比较函数 
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int );
}

int main()
{

	
	test4();
	
	return 0;
}////////此段代码待调试2021--1-23 by-lizhongyidexiao !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!///////////////////////////////////////////////////////////////////// 
