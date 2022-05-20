#include<stdio.h>
int main()
{
	float km;
	printf("Enter Distance Between Mirpur to Ashulia: \n");
	scanf("%f",&km);
	//1 km = 1000 meter.
	printf("Distance in meter from Mirpur to Ashulia:%.2f \n",km*1000);
	//1km=3280.8399 feets
	printf("Distance in feet from Mirpur to Ashulia:%.2f\n",km*3280.8399);
	//1km=39370.078 inches
	printf("Distance in inches from Mirpur to Ashulia:%.2f\n",km*39370.078);
	//1 km = 100000 centimeter
	printf("Distance in centimeter from Mirpur to Ashulia:%.2f\n",km*100000);
	return 0;
}
