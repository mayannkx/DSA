#include<stdio.h>
void main()
{
int a[2][2];
printf("enter array elements");
for (int i=0;i<2;i++)
{
for (int j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
for (int i=0;i<2;i++)
{
for (int j=0;j<2;j++)
{
printf("%d",a[i][j]);
} printf("\n");
}
}