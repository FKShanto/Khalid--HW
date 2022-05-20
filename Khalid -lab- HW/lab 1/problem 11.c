#include<stdio.h>
int main()
{
  int ammount,hundred,fifty,ten,aux;
  printf("Enter The Ammount Of Taka you want to Withdraw: \n");
  scanf("%d",&ammount);
  hundred=ammount/100;
  aux=ammount%100;
  fifty=aux/50;
  aux=aux%50;
  ten= aux/10;
  printf("Total Ammount: %d\n",ammount);
  printf("%d Note of 100 Taka\n",hundred);
  printf("%d Note of 50 Taka\n",fifty);
  printf("%d Note Of 10 Taka\n",ten);
	return 0;
}
