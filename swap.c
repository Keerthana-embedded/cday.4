#include<stdio.h>
int main()
{
int *p,*q,temp,i,j;
printf("enter i value\n");
scanf("%d",&i);
printf("enter j value\n");
scanf("%d",&j);
printf("before...i=%d,j=%d\n",i,j);
p=&i;
q=&j;
temp=*p;
*p=*q;
*q=temp;
printf("after...i=%d,j=%d\n",i,j);
}
