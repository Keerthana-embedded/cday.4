#include<stdio.h>
void copy(char *,char *);
int main()
{
char a1[20],a2[20];
puts("enter array1");
gets(a1);
char *p,*q;
p=a1,q=a2;
copy(p,q);
}
void copy(char *p,char *q)
{
int i;
for(i=0;p[i];i++)
{
*(q+i)=*(p+i);
}
*(q+i)='\0';
puts("arry2 contain..");
puts(q);
}

