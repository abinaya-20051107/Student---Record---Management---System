#include "header.h"
struct student *head = NULL;
int main(void)
{
    char choice;
    stud_load();
     while (1)
    {
        printf("\n******* STUDENT RECORD MENU *******\n");
        printf("A/a : Add New Record\n");
        printf("D/d : Delete a Record\n");
        printf("S/s : Show the List\n");
        printf("M/m : Modify a Record\n");
        printf("V/v : Save\n");
        printf("T/t : Sort the List\n");
        printf("E/e : Exit\n");

        printf("\nEnter Your Choice: ");
        scanf("%c",&choice);

        switch (choice)
        {
            case 'A':
            case 'a':
                stud_add();
                break;

            case 'D':
	    case 'd':
                stud_del();
                break;

            case 'S':
            case 's':
                stud_show();
                break;

            case 'M':
            case 'm':
                stud_mod();
                break;

            case 'V':
            case 'v':
                stud_save();
                break;

            case 'T':
            case 't':
                stud_sort();
                break;

            case 'E':
            case 'e':
            {
                char ch;
	       	printf("S/s : Save and Exit\n");
                printf("E/e : Exit Without Saving\n");
	       	printf("Enter Your Choice: ");
		scanf(" %c",&ch);

                if(ch =='S'||ch=='s')
                {
                    stud_save();
                    return 0;
                }
                else if(ch =='E'||ch=='e')
                {
                    return 0;
                }
                else
                {
                    printf("Invalid choice\n");
                }
                break;
            }

            default:
                printf("Invalid choice\n");
        }
    }
}
