#include <stdio.h>
int main()
{
   int i,num1;
   char num[5];
   gets(num);

   for(i=4;i>=0;i--){
     printf("%d",num[i]-48);
   }

}
