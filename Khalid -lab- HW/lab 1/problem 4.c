#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter Temparature In Fahrenheit: \n");
	scanf("%f",&f);
	c=(f-32)/9;
	printf("The Temperature in Celcius is: %.2f\n",c);

	return 0;
}
