//Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int duplicate(int n,int a[]);
int main()
{
     int n;
      printf("Enter The Size of an Array\n");
    scanf("%d",&n);
    int arr[n],i;
    printf("Enter The Elements Of An Array\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    duplicate(n,arr);
}
int duplicate(int n,int arr[])
{
    int i,j,a=0;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(arr[i]==arr[j])
            {
                a++;
            }
        }

    }
    printf("Number of Duplicate Elements is %d ",a);
    return a;
}