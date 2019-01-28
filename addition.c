#include <stdio.h>
int add(int ,int );
void main()
{
int a,b,c;
printf("enter the two numbers");
scanf("%d",&a);
scanf("%d",&b);
c=add(a,b);
printf("addition is %d",c);
}
int add(int a,int b)
{
 c=a+b;
 return c;
}


