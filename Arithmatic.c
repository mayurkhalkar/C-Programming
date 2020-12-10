#include <stdio.h>
int main()
{
 int a,b;
 printf("Enter First No =");
 scanf("%d",&a);
 printf("Enter Second No =");
 scanf("%d",&b);
 int add=a+b;
 printf("\n Addition Is =%d",add);
 int mul=a*b;
 printf("\n Multiplication Is =%d",mul);
 float div1=a/b;
 printf("\n Division Is =%f",div1);
 int rem=a%b;
 printf("\n Reminder Is =%d",rem);
}