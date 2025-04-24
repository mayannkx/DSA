#include<stdio.h>
void main()
{
        int n;
        printf("enter no of array elements");
        scanf("%d",&n);
        int a[n];
	int b[n];
	int c[n+n];
        for (int i=0;i<n;i++)
        {
                printf("enter array A elements");
                scanf("%d",&a[i]);
        }
	   for (int i=0;i<n;i++)
        {
                printf("enter array B elements");
                scanf("%d",&b[i]);
        }
	 for (int i=0;i<n;i++)
        {
                c[i]=a[i];
        }
	      for (int j=n+1;j<2*n;j++)
        {
	        for (int i=0;i<n;i++)
        {

                c[j]=b[i];    
	}
        }
	 for (int i=0;i<n;i++)
        {
                printf("%d ",c[i]);
	}
}