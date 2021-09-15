#include<stdio.h>

int Reverse_display(int ar[],int x)
{
printf("\nThe Array elements in reverse order are: \n");
for(int i=x;i>=0;i--)
printf("%d ",ar[i]);
}
int main()
{
int n;
printf("enter the length of array: ");
scanf("%d",&n);
int arr[n];
printf("enter %d elements: ",n);
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("The Array elements are: \n");
for(int i=0;i<n;i++)
printf("%d ",arr[i]);
Reverse_display(arr,n-1);


}
