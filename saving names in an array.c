#include<stdio.h>
int main()
{
char names1[100];
char names2[100];
char names3[100];
printf("enter name1");
for (int i=0;i<100;i++)
{
scanf("%c",&name1[i]);
}
printf("enter name2");
for (int i=0;i<100;i++)
{
scanf("%c",&name2[i]);
}
printf("enter name3");
for (int i=0;i<100;i++)
{
scanf("%c",&name3[i]);
}
for (int i=0;i<100;i++)
{
printf("%c\t",name1[i]);
printf("%c\t",name2[i]);
printf("%c\t",name3[i]);
}
return 0;
}