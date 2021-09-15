#include<stdio.h>

int main()
{
int n,sum=0;
printf("enter the length of an array: ");
scanf("%d",&n);
int arr[n];
printf("enter %d elements: ",n);
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
for(int j=0;j<n;j++)
sum+=arr[j];
printf("The sum of %d numbers is %d",n,sum);
}

