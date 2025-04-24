#include<stdio.h>
void main()
{
int a[10];
printf("enter array elements");
for (int i=0;i<9;i++)
{
scanf("%d",&a[i]);
}
int p;
int n;
printf("enter n");
scanf("%d",&n);
printf("enter position");
scanf("%d",&p);
a[9]=n;
for (int i=9;i>=p;i--)
{
int temp=a[i];
a[i]=a[i-1];
a[i-1]=temp;
}
for (int i=0;i<10;i++)
{
printf("%d",a[i]);
}
}