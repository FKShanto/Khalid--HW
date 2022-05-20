#include<stdio.h>
int main()
{
  const pi=3.1416;
	float length,width,radious;
	printf("Enter A Rectangle Length and Breadth: \n");
	scanf("%f%f",&length,&width);
	printf("Enter Radious of a Circle: \n");
	scanf("%f",&radious);
	//Rectangle area = length*width
  printf("Area of rectangle: %.2f\n",length*width);
  //perimeter of rectangle = 2*(length+width)
	printf("Perimeter of rectangle: %.2f\n",2*(length+width));
	//area of circle = pi*radious*radious
	printf("Area of circle: %.2f\n",pi*radious*radious);
	//perimeter of circle = 2*pi*radious
	printf("Perimeter of circle: %.2f\n",2*pi*radious);
	return 0;
}
