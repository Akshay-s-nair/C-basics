
#include <stdio.h>

struct employ
{
   char name[20];
   int id;
   int salary;
}p[100];

int main()
{
    int n,i;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    
    for(i=0; i<n; i++)
    {
        printf("Enter the %dst employees name:",i+1);
        scanf("%s", p[i].name);
        printf("Enter the %dst employees id:",i+1);
        scanf("%d", &p[i].id);
          printf("Enter the %dst employees salary:",i+1);
        scanf("%d", &p[i].salary);
    }
    
    printf("\n*********************************************");
    for(i=0; i<n; i++)
    {
        printf("\n---DETAILS OF %dTH EMPLOYEE---\n",i+1);
        printf("The name of the employee is %s\n",p[i].name);
        printf("The the employee id %d\n",p[i].id);
        printf("The salary of the employee is %d\n\n",p[i].salary);
        printf("\n");
    }
    return 0;
}


