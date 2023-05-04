//Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
void sort(int arr[],int n);
int main()
{
    int n,i;
    printf("Enter the Size of Array\n");
    scanf("%d",&n);
    int arr[n];
     printf("Enter the Values of Array\n");
     for(i=1;i<=n;i++)
     {
        scanf("%d",&arr[i]);
     }
     sort(arr,n);
     printf("The Sorted Array is\n");
     for(i=1;i<=n;i++)
     {
         printf("%d ",arr[i]);
     }
}
void sort(int arr[],int n)
{
    int i,j,temp=0;
    for(i=1;i<=n;i++)
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
}