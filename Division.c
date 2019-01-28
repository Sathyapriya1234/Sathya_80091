#include <stdio.h>
int div(int ,int );
void main()
{
int a,b,c;
printf("enter the two numbers");
scanf("%d",&a);
scanf("%d",&b);
c=div(a,b);
printf("addition is %d",c);
}
int div(int a,int b)
{
 c=a/b;
 return c;
}


