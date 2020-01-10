#include<stdio.h>
#include<stdlib.h>
struct bank
{
    int id;
    char name[20];
    float salary;
};

struct bank input()
  {
    struct bank e;
    printf("\nEnter id, name and salary\n");
    scanf("%d",&e.id);
    fflush(stdin);
    gets(e.name);
    scanf("%f",&e.salary);
    printf("\n\t\t\t\tData Submitted");
    fflush(stdin);
    getchar();
    system("CLS");
    return e;
  }

void display(struct bank e)
  {
    printf("\nEmployee ID = %d\nEmployee Name = %s\nEmployee Salary = %f\n",e.id,e.name,e.salary);
  }

void main()
  {
    int choice,i=-1;
    struct bank arr[5];
    while(1)
      {
        printf("\n\n");
        printf("\t\t\t\t\tWelcome to the XYZ bank");
        getchar();
        printf("\n1. Add Employee Details\n2. Display Employee Details\n3. Exit\n");
        scanf("%d",&choice);
        if(choice==1)i++;
        switch(choice)
          {
            case 1:  arr[i]=input(); break;
            case 2:  for(int j=0;j<=i;j++)
                          {
                            display(arr[j]);
                          }
                            break;
            case 3:  exit(0);
            default: printf("Invalid Option");
          }
      }
  }
