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
int i,cnt=0;
for(i=0;p[i];i++)
{
*(q+i)=*(p+i);
cnt++;
}
*(q+i)='\0';
puts("arry2 contain..");
puts(q);
puts("length of string");
printf("%d\n",cnt);
}
