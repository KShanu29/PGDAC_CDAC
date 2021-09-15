#include<stdio.h>

struct employee
{
int Eid,sal,year;
char Ename[20];
};
struct employee e[10];
int main()
{
int n;
printf("How many employee's data you want to enter: ");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
printf("Enter Employee's Eid[%d]: ",i);
scanf("%d",&e[i].Eid);
printf("Enter Employee's Name[%d]: ",i);
scanf("%s",e[i].Ename);
printf("Enter Employee's salary[%d]: ",i);
scanf("%d",&e[i].sal);
printf("Enter Employee's joining year[%d]: ",i);
scanf("%d",&e[i].year);
printf("_____________________________________________________________\n");
}
printf("________________Employee Summary__________________________");
for(int i=1;i<=n;i++)
{
printf("\nEmployee's Eid[%d]: %d",i,e[i].Eid);
printf("\nEmployee's Name[%d]: %s",i,e[i].Ename);
printf("\nEmployee's salary[%d]: %d",i,e[i].sal);
printf("\nEmployee's joining year[%d]: %d",i,e[i].year);
printf("\n_____________________________________________________________");
}
}
