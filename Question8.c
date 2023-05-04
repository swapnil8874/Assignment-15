// Write a function in C to print all unique elements in an array.
#include<stdio.h>
void unique(int n,int a[]);
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
    unique(n,arr);
}
void unique(int n,int arr[])
{
    int i,j,a=0;
    for(i=1;i<n;i++)
    {
        a=0;
        for(j=1;j<n;j++)
        {
            if(i!=j)
            {
            if(arr[i]==arr[j])
                a++;   
            }
        }
        if(a==0)
        {
            printf("%d ",arr[i]);
        }

    }
   // printf("Number of Unique Elements is %d ",a);
    //return a;
}