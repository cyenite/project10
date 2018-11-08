#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sales;
   int profit;
   int year;
   sales = 10000000;
   year=1;
   printf("\t\t\tSales and Profit Projection\n");
   printf("\t\t\t---------------------------\n");
   printf("Year\t\tExpected Sales\t\tProjected profits\n");
   printf("-----\t\t-------------\t\t-----------------\n");

    int a = sales;
    profit =sales/10;
    printf("%d\t\t$%d\t\t$%d\n",year,sales,profit);
    sales=sales-(0.03999999*sales);
    int k=profit;
    year++;

    int b =sales;
    profit =sales/10;
    printf("%d\t\t$%d\t\t$%d\n",year,sales,profit);
    sales=sales-(0.03999999*sales);
    int l=profit;
    year++;

    int c =sales;
    profit =sales/10;
    printf("%d\t\t$%d\t\t$%d\n",year,sales,profit);
    sales=sales-(0.03999999*sales);
    int m=profit;
    year++;

    int d =sales;
    profit =sales/10;
    printf("%d\t\t$%d\t\t$%d\n",year,sales,profit);
    sales=sales-(0.03999999*sales);
    int n=profit;
    year++;

    int e=sales;
    profit =sales/10;
    printf("%d\t\t$%d\t\t$%d\n",year,sales,profit);
    sales=sales-(0.03999999*sales);
    int o=profit;
    year++;

    int f= sales;
    profit =sales/10;
    printf("%d\t\t$%d\t\t$%d\n",year,sales,profit);
    sales=sales-(0.39999999*profit);
    int p=profit;
    year++;

    int g=sales;
    profit =sales/10;
    printf("%d\t\t$%d\t\t$%d\n",year,sales,profit);
    sales=sales-(0.3999999*profit);
    int q=profit;
    year++;

    int h=sales;
    profit =sales/10;
    printf("%d\t\t$%d\t\t$%d\n",year,sales,profit);
    sales=sales-(0.3999999*profit);
    int r=profit;
    year++;

    int i=sales;
    profit =sales/10;
    printf("%d\t\t$%d\t\t$%d\n",year,sales,profit);
    sales=sales-(0.3999999*profit);
    int s=profit;
    year++;

    int j=sales;
    profit =sales/10;
    printf("%d\t\t$%d\t\t$%d\n",year,sales,profit);
    sales=sales-(0.04*sales);
    int t=profit;
    year++;

   int totals=a+b+c+d+e+f+g+h+i+j;
   int totalprofit=k+l+m+n+o+p+q+r+s+t;
   printf("\t\t---------\t\t--------\nTotals:");
   printf("\t\t$%d\t\t$%d\n\n",totals,totalprofit);
}
