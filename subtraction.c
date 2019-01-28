#include <stdio.h>
int add(int ,int );
void main()
{
int a,b,c;
printf("enter the two numbers");
scanf("%d",&a);
scanf("%d",&b);
c=sub(a,b);
printf("addition is %d",c);
}
int sub(int a,int b)
{
 c=a-b;
 return c;
}


