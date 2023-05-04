//function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int Greatest(int arr[], int n);
int main()
{
    int n;
    printf("ENTER THE SIZE OF ARRAY\n");
      scanf("%d",&n);
      int arr[n],i;
      printf("ENTER THE VALUES OF ARRAY\n");
      for(i=0;i<=n-1;i++)
      {
        scanf("%d",&arr[i]);
      }
      printf("Greatest Number of The Gien Array is %d",Greatest(arr,n));
}
int Greatest(int arr[], int n)
{
    int i,j,temp=0;
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(arr[i]>arr[j])
            {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }

    }
    return arr[n];

}