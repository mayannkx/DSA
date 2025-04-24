#include<stdio.h>
void main()
{
	int n;
	printf("enter no of array elements");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		printf("enter array elements");
	        scanf("%d",&a[i]);
	}
   	printf("\nq1-\n");
         for (int i=0;i<n;i++)
        {
                printf("%d\n",a[i]);
        }
	 printf("\nq2-\n");
	int sum=0;
         for (int i=0;i<n;i++)
        {
		sum+=a[i];
        }
	printf("mean=%d",sum/n);
	 printf("\nq3-\n");
	int min=a[0];
	int pos=0;
         for (int i=0;i<n;i++)
        {
                if(a[i]<min)
		{
		min=a[i];
		 pos=i;
		}
        }printf("position of the smallest no.=%d",pos);
	     printf("\nq4-\n");
	int max=a[0];
	int max2=a[0];
         for (int i=0;i<n;i++)
        {
                if(a[i]>max)
                {
                max=a[i];
                }
        }
	 for (int i=0;i<n;i++)
         {
                if(a[i]>max2 && a[i]<max)
                {
                max2=a[i];
                }
       }printf("second max=%d",max2);
	   printf("\nq5-\n");
	int c=0;
         for (int i=0;i<n;i++)
        {
	  c=0;
	   for (int j=1;j<n;j++)
        {
                if(a[i]==a[j])
		c++;
        }
	 if(c>1){
        printf("duplicate\n");
	break;
	}
	}
}