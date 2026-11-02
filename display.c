#include"header.h"
void stud_show(void)
{
    struct student *temp;

    if (head==NULL)
    {
        printf("\nNo records found\n");
        return;
    }

    temp = head;

    printf("\n--------------------------------------\n");
    printf("\nRoll No\t\tName\t\tPercentage\n");
    printf("--------------------------------------\n");

    while (temp!=NULL)
    {
        printf("%d\t\t%s\t\t%.1f\n",temp->roll,temp->name,temp->percentage);
       temp =temp->next;
    }

    printf("--------------------------------------\n");
}

