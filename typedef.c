#include<stdio.h>
int main()
{
	
	
typedef	struct STU
	{
		
		int i;
		char c;
	}s,*p;
	s st={1,'w'};
	
	p ps=&st;
	ps->i=10;
	printf("%d",st.i);
	
	
	
	
	return 0;
 } 
