
//ʵ��bubble-sort�����ĳ���Ա������֪��δ��Ҫ��������������Լ����Ƚϵ�����Ԫ�ص����� 
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
	//���� 
	for(i=0;i<sz-1;i++)
	 {//ÿһ�˱ȽϵĶ��� 
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
		 if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
		 {
		   swap((char*)base+j*width,(char*)base+(j+1)*width,width);	//����Ԫ�صıȽ� 
		 
		 }
	 }
	 
	}
}


void test4()
{
	int arr[]={8,7,9,5,6};
	int sz=sizeof(arr)/sizeof(arr[0]);
	//ʹ��bubble-sort�ĳ���Աһ��֪���Լ��ŵ���ʲô���� //��Ӧ��֪����ô�Ƚϴ����������е�Ԫ�� ��Ȼ�������ıȽϺ��� 
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int );
}

int main()
{

	
	test4();
	
	return 0;
}////////�˶δ��������2021--1-23 by-lizhongyidexiao !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!///////////////////////////////////////////////////////////////////// 
