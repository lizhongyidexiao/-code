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

//���ϼ��ִ��ξ��ɣ����Դ�arr[]Ҳ���Դ�arr[10]��������arr[]��[]����ŵĸ����Ǵ�ģ�Ҳ���Դ��ݣ���һ�㲻����д�� 
//��Ϊ������Ϊ��Ԫ�صĵ�ַ������βο�����ָ�������� 
//
int main()
{
	int arr[10]={0};
	int *arr2[20={0}];
	test(arr);
	test2(arr2);
	return 0;
}
