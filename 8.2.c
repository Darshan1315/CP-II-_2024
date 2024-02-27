#include<stdio.h>
void main()
{
	int a;
	printf("Enter size of array\n");
	scanf("%d",&a);
	int P[a],(*p)[a],i;
	p=&P;
	for(i=0;i<a;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<a;i++)
	{
		printf("%d\n",*(p[i]));
	}
}