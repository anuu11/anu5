#include<stdio.h>
void main()
{
int a,b,c;
printf("enter 3 numbers");
scanf("%d%d%d",&a,&b,&c);


if((a>b)&&(a>c))
printf("a is greatest");
else
if((b>a)&&(b>c))
printf("a is greatest");
else
if((c>a)&&(c>b))
printf("a is greatest");
}