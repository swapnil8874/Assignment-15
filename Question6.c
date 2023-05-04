//function in C to read n number of values in an array and display it in reverse order
#include<stdio.h>
int reverse(int n,int a[]);
int main()
{
     int n;
      printf("Enter The Size of an Array\n");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter The Elements Of An Array\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
   
    reverse(n,a);
}
int reverse(int n,int a[])
{
    int i;
    
    printf("Reverse Order Of These Values is --\n");
    for(i=n;i>0;i--)
    {
        printf("%d ",a[i]);
    }
    return a[i];
}