#include<stdio.h>
int Reverse_display(char ar[],int x)
{
printf("\nThe Array elements in reverse order are: \n");
for(int i=x;i>=0;i--)
printf("%c ",ar[i]);
}
int main()
{
char arr[8]={'a','b','c','d','e','f','g','h'};
printf("The characters elements are: \n");
for(int i=0;i<8;i++)
printf("%c ",arr[i]);
Reverse_display(arr,7);
}
/*
int Reverse_display(char ar[],int x)
{
printf("\nThe Array elements in reverse order are: \n");
for(int i=x;i>=0;i--)
printf("%c",ar[i]);
}
int main()
{
int n;
printf("enter length of the array: ");
scanf("%d",&n);
char arr[n];
printf("enter %d character elements: \n",n);
for(int i=0;i<n;i++)
scanf("%c",&arr[i]);
Reverse_display(arr,n-1);

}

*/
