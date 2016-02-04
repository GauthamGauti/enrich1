#include<stdio.h>
#include<stdlib.h>
int main()
{
  int num;
  printf("Enter the number\n");
  scanf("%d",&num);
  float y=1.00000;
  float x ;
  float e=0.000001;
  x=num;
  while((x-y)>e)
  {
    x=(x+y)/2;
    y=num/x;
  }
  printf("The square root of the number is %f\n",x);
  return 0;
}
