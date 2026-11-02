#include"header.h"
void stud_del(void)
{
    struct student *temp, *prev;
    int roll;
    char choice;
    char name[50];
    int found =0;
    if (head ==NULL)
    {
        printf("No records found\n");
        return;
    }

    printf("R/r : Delete using Roll Number\n");
    printf("N/n : Delete using Name\n");

    printf("Enter Your Choice: ");
    scanf(" %c",&choice);

    if(choice=='R'||choice=='r')
    {
        printf("Enter Roll Number: ");
        scanf("%d",&roll);
    }
    else if(choice=='N'||choice=='n')
    {
        printf("Enter Name: ");
        scanf(" %[^\n]",name);
	temp=head;

        while(temp!=NULL)
        {
            if(strstr(temp->name,name)!=NULL)
            {
                printf("\nRoll no:%d Name: %s Percentage:%.2f\n",temp->roll,temp->name, temp->percentage);

                found=1;
            }

            temp=temp->next;
        }

        if(found==0)
        {
            printf("Student not found\n");
            return;
        }

        printf("Enter Roll Number to delete: ");
        scanf("%d",&roll);
    }
    else
    {
	    printf("Invalid choice\n");
        return;
    }

    temp =head;
    prev =NULL;

    while(temp!=NULL)
    {
        if(temp->roll==roll)
        {
            if(prev==NULL)
                head=temp->next;
            else
                prev->next = temp->next;

            free(temp);

            printf("Record deleted successfully\n");
            return;
        }

        prev = temp;
        temp = temp->next;
    }

    printf("Student not found\n");
}
