#include"header.h"
void stud_sort(void)
{
    struct student *i, *j;
    int roll;
    char name[50];
    float percentage;
    char choice;

    if(head==NULL)
    {
        printf("No records found\n");
        return;
    }

    printf("N/n : Sort by Name\n");
    printf("P/p : Sort by Percentage\n");

    printf("Enter Your Choice: ");
    scanf(" %c",&choice);

    if(choice!='N'&&choice!='n' && choice!='P'&&choice!='p')
    {
        printf("Invalid choice\n");
        return;
    }

    for (i=head;i!=NULL;i=i->next)
    {
        for (j =i->next;j!=NULL;j=j->next)
        {
            if (((choice=='N'||choice =='n') && strcmp(i->name,j->name)>0)||((choice =='P'||choice =='p') && i->percentage >j->percentage))
            {
                roll =i->roll;
                i->roll =j->roll;
                j->roll =roll;

                strcpy(name,i->name);
                strcpy(i->name,j->name);
                strcpy(j->name,name);

                percentage = i->percentage;
                i->percentage = j->percentage;
                j->percentage = percentage;
            }
        }
    }

    printf("Records sorted successfully\n");

    stud_show();
}

