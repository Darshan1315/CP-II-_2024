#include<stdio.h>
void main()
{
	int a,b,c,*p1,*p2;
	printf("enter 2 number :- \n");
	scanf("%d\t%d",&a,&b);
	p1=&a;
	p2=&b;
	printf("%d\t%d\n",*p1,*p2);
	c=*p1;
	*p1=*p2;
	*p2=c;
	printf("%d\t%d\n",*p1,*p2);
}