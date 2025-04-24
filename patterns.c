#include <stdio.h>
void main()
{
//1
 for(int i=1;i<=5;i++)
  {
   for(int j=1;j<=i;j++)
    {
    printf("\t*");
    }
    printf("\n");
  }
//2
  for(int i=5;i>0;i--)
  {
   for(int j=1;j<=i;j++)
    {
    printf("\t*");
    }
    printf("\n");
  }
//3   
 for(int i=1;i<=5;i++)
  {
   for(int j=4;j>=i;j--)
    {
    printf("\t");
    }
   for(int k=1;k<=i;k++)
    {
    printf("\t*");
    }
    printf("\n");
  }
//4
for(int i=5;i>0;i--)
  {
   for(int j=4;j>=i;j--)
    {
    printf("\t");
    }
   for(int k=1;k<=i;k++)
    {
    printf("\t*");
    }
    printf("\n");
}
//5
 for(int i=1;i<=5;i++)
  {
   for(int j=1;j<=i;j++)
    {
    printf("\t%d",i);
    }
    printf("\n");
}
//6
 for(int i=1;i<=5;i++)
  {
   for(int j=1;j<=i;j++)
    {
    printf("\t%d",j);
    }
    printf("\n");
}
//7
 int k=1;
 for(int i=1;i<=5;i++)
  {
   for(int j=1;j<=i;j++)
    {
    printf("\t %d",k);
   k++;
    }
    printf("\n");
}
//8
 for(int i=1;i<=5;i++)
  {
   int k=i;
   for(int j=1;j<=i;j++)
    {
    printf("\t%d",k);
   k--;
    }
    printf("\n");
}
//9
 for(int i=5;i>0;i--)
  {
   k=6-i;
   for(int j=1;j<=i;j++)
    {
    printf("\t%d",k);
   k++;
    }   
    printf("\n");
}
//10
for(int i=5;i>0;i--)
 {
   int k=1;
   for(int j=1;j<=i;j++)
    {
    printf("\t%d",k);
   k++;
    }
    printf("\n");
}
//11
 for(int i=5;i>0;i--)
  {
   for(int j=1;j<=i;j++)
    {
    printf("*\t");
   }  
     for(int k=5;k>5-i;k--)
  {
   printf("\t");
}

    printf("\n");
  }
}