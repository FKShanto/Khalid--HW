#include<stdio.h>
int main()
{
	float sub1,sub2,sub3,sub4,sub5,total,percentage;
	printf("Enter Number Of 5 Subjects: \n");
	scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
	total=sub1+sub2+sub3+sub4+sub5;
	percentage=total*(100.00/500.00);
	printf("Total Marks %.2f\n",total);
	printf("Percentage Of Marks %.0f%\n",percentage);
	return 0;
}
