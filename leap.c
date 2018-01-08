#include<stdio.h>
int main()
{
int year;
year=2016;
printf("enter the year %d",year);
scanf("%d",&year);
if (year%4==0)
printf("leap year",year);
else
printf("not leap year",year);
return 0;
}
