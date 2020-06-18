#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main(void)
{
float i,n;
printf("\nAngle \tSin  \tCos\n");
for(i=0;i<=90;i++)
{
n=i*(PI/180);
printf("\n%f\t%f\t%f",i,sin(n),cos(n));
}
return 0;
}
