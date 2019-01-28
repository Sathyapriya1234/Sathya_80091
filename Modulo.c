#include <stdio.h>
int modulo(int ,int );
void main()
{
int a,b,c;
printf("enter the two numbers");
scanf("%d",&a);
scanf("%d",&b);
c=modulo(a,b);
printf("addition is %d",c);
}
int modulo(int a,int b)
{
 c=a%b;
 return c;
}


