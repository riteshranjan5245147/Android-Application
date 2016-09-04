/*Q. Given an array of n elements. Write a function that separates even numbers first and then odd numbers.*/
#include<stdio.h>
void print(int [], int, int);
void main()
{
    int a[100],n,i;
    printf("Enter the limit of array\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    print(a,n,i);
    getch();
}
void print(int a[], int n,int i)
{
    int l=0,r=n-1,tmp;
    while(l<r)
    {
        while(a[l]%2==0&&l<r)
            l++;
        while(a[r]%2==1&&l<r)
            r--;
        if(l<r)
        {
            tmp=a[l];
            a[l]=a[r];
            a[r]=tmp;
        }
    }
    printf("The resultant array is :\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
}
