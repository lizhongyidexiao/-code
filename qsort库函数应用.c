//void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );库函数 （MSDN里有） 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
	struct Stu
	{char name[20];
	 int age;
	};
int cmp_int(const void*e1,const void*e2)
{
	return *((int*)e1)-*((int*)e2);
}
void test1() 
{
	int arr[]={3,5,83,29,2,5,2,1};
	int sz=sizeof(arr)/sizeof(arr[0]);
		qsort(arr,sz,sizeof(arr[0]),cmp_int);
	int i=0;
	for(i=0;i<sz;i++)
	
	{
		printf ("%d  ",arr[i]);
	}
}
int cmp_float(const void*e1,const void*e2)
{
	return ((int)(*(float*)e1-*(float*)e2));
}
void test2()
{
	float arr2[]={3.0,4.0,5.0,6.0,1.0};
	int sz=sizeof(arr2)/sizeof(arr2[0]);
	qsort(arr2,sz,sizeof(arr2[0]),cmp_float);
	int j=0;
	for(j=0;j<sz;j++)
	{
		printf("%f",arr2[j]);
	}
}
int cmp_Stu_age(const void*e1,const void*e2)
{
	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;
}
void test3()
{

struct Stu s[4]={{"zhangsan",30},{"lisi",20},{"wangwu",25},{"laoliu",25}};
int sz=sizeof(s)/sizeof(s[0]);
qsort(s,sz,sizeof(s[0]),cmp_Stu_age);
printf("%d",s[0]); 
}









int main()
{
	
	

///	struct Stu
//	{
///	 char[] name,
//	 int age
//	};



	
	test1();
	printf("\n");
	test2();
	printf("\n");
	test3();
	
	
	
	return 0;
}//函数稍微有点问题，待调试   调试成功！！！！！！ 
