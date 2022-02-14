//...........................selection sort using pointers..................................
#include<stdio.h>
int main()
{
int a[20],n,i,j,temp;
printf("enter n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int *p;
p=a;
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(*(p+i)>*(p+j))
		{
              `    temp=*(p+i);
		  *(p+i)=*(p+j);
		  *(p+j)=temp;
		}
	}
}
for(i=0;i<n;i++)
printf("%d",p[i]);
}
