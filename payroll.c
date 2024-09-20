#include <stdio.h>
int main()
{
char name[50];
int ID;
printf("Enter employee name:");
scanf("%s",name);
printf("Enter employee ID:");
scanf("%d",&ID);
printf("Employee ID: %d\n",ID);
printf("Employee Name: %s\n",name);


return 0;
}