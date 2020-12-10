include <stdio.h>
int main()
{ int height,width;
 printf("Enter Height =");
 scanf("%d",&height);
 printf("Enter width =");
 scanf("%d",&width);
 int perimeter = 2*(height + width);
printf("Perimeter of the rectangle = %d \n", perimeter);
int area = height * width;
printf("Area of the rectangle = %d \n", area);
}