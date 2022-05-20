#include<stdio.h>
int main()
{
  int sell,profit,cost;
  double cost_per_one;
  printf("Enter Selling Price and Profit Of 15 items: \n");
  scanf("%d%d",&sell,&profit);
  cost=sell-profit;
  cost_per_one=cost/15;
  printf("Cost Per 1 Item : %.2lf Taka\n",cost_per_one);
	return 0;
}
