#include<stdio.h>
int main()
{
	int a[10],t,i,j;
	for (i=0;i<=9;i++)
		scanf("%d",&a[i]);
	for (i=1;i<=9;i++)
	{
		for (j=i;j<=9;j++)
		{
			if (a[j]>a[i-1])
			{
				t=a[j];
				a[j]=a[i-1];
				a[i-1]=t;
			}
		}
	}
	for (i=0;i<=9;i++)
	printf("%d\t",a[i]);
	return 0;
}

