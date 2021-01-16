#include<stdio.h>
int main()
{

int a=10;
printf("%d",a++);//++a先++再使用，a++先使用再++ ,所以此时打印为10 
printf("%d",a);
return 0; 

 } 
