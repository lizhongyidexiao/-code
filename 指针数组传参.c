#include<stdio.h>
void test(int arr[])
{}
void test(int arr[10])
{}
void test(int*arr)
{}
void test2(int*arr[20])
{}
void test2(int** arr)
{}

//以上几种传参均可，可以传arr[]也可以传arr[10]，甚至是arr[]，[]里面放的个数是错的，也可以传递，但一般不这样写。 
//因为数组名为首元素的地址，因此形参可以用指针来接受 
//
int main()
{
	int arr[10]={0};
	int *arr2[20={0}];
	test(arr);
	test2(arr2);
	return 0;
}
