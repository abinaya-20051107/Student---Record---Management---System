#include "header.h"

void stud_mod(void)
{
    struct student *temp;
    int choice, roll, found = 0;
    char name[50];

    if (head == NULL)
    {
        printf("No records found\n");
        return;
    }

    printf("R/r : Roll Number\n");
    printf("N/n : Name\n");
    printf("P/p : Percentage\n");

    printf("Enter Your Choice: ");
    scanf(" %c", &choice);

    temp = head;

    if (choice == 'R' || choice == 'r')
    {
        printf("Enter Roll Number: ");
        scanf("%d", &roll);

        while (temp != NULL)
        {
            if (temp->roll == roll)
            {
                found = 1;
                break;
            }
            temp = temp->next;
        }
    }
    else if (choice == 'N' || choice == 'n')
    {
        printf("Enter Name: ");
        scanf(" %[^\n]", name);

        while (temp != NULL)
        {
            if (strcmp(temp->name, name) == 0)
            {
                found = 1;
                break;
            }
            temp = temp->next;
        }
    }
    else if (choice == 'P' || choice == 'p')
    {
        printf("Enter Roll Number: ");
        scanf("%d", &roll);

        while (temp != NULL)
        {
            if (temp->roll == roll)
            {
                found = 1;
                break;
            }
            temp = temp->next;
        }
    }
    else
    {
        printf("Invalid choice\n");
        return;
    }

    if (found == 0)
    {
        printf("Student not found\n");
        return;
    }

    printf("N/n : Modify Name\n");
    printf("P/p : Modify Percentage\n");

    printf("Enter Your Choice: ");
    scanf(" %c", &choice);

    if (choice == 'N' || choice == 'n')
    {
        printf("Enter New Name: ");
        scanf(" %[^\n]", temp->name);
    }
    else if (choice == 'P' || choice == 'p')
    {
        printf("Enter New Percentage: ");
        scanf("%f", &temp->percentage);
    }
    else
    {
        printf("Invalid choice\n");
        return;
    }

    printf("Record modified successfully\n");
}
