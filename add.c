#include"header.h"
void stud_add(void)
{
    struct student *newnode, *temp;
    int roll = 1, found;
    newnode = malloc(sizeof(struct student));
    if(newnode==NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    while(1)
    {
        found = 0;
        temp = head;
	while(temp!=NULL)
        {
            if(temp->roll==roll)
            {
		found=1;
                break;
            }

            temp=temp->next;
        }

        if(found==0) 
		break;
       	roll++;
    }

    newnode->roll=roll;

    printf("\nEnter Student Name: ");
    scanf(" %[^\n]", newnode->name);

    printf("Enter Percentage: ");
    scanf("%f",&newnode->percentage);

    newnode->next=NULL;

    if (head==NULL)
    {
        head=newnode;
    }
    else
    {
        temp=head;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }

        temp->next=newnode;
    }
    printf("Student data added successfully\n");
    printf("Assigned Roll Number: %d\n", roll);
}
