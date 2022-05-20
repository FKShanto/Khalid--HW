#include <stdio.h>
int main()
{
   int i;
   char num[4],sum=0;
   printf("Enter Four Digit Number: \n");
   gets(num);
     sum=num[0]-48+num[3]-48;
   printf("The Sum Of First And Last Digit Is: %d",sum);
}
