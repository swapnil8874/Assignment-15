//Write a function to find the first occurrence of adjacent duplicate values in the array. 
//Function has to return the value of the element.
#include<stdio.h>
void adj(int i,int a[]);
int main()
{
    int n;
    printf("Enter The Size Of Array\n");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter The Elements Of an Array\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
          adj(n,a);

}
void adj(int n,int a[])
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(a[i]=a[i+1]);
        
    }
     printf("%d ",a[i]);
}
