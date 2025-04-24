#include<stdio.h>
void main()
{
int a[3][3];
int b[3][3];
int c[3][3];
int sum=0;
printf("enter array elements");
for (int i=0;i<3;i++)
{
for (int j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter array elements");
for (int i=0;i<3;i++)
{
for (int j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
for (int i=0;i<3;i++)
{sum=0;
for (int j=0;j<3;j++)
{
sum+=a[i][j]+b[i][j];
c[i][j]=sum;
}
}

for (int i=0;i<3;i++)
{
for (int j=0;j<3;j++)
{
printf("%d\t",c[i][j]);
} printf("\n");
}

}