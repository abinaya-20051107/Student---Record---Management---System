#include"header.h"
void stud_save(void)
{
    struct student *temp;
    FILE *fp;
    fp=fopen("student.dat","wb");

    if(fp==NULL)
    {
        printf("File open failed\n");
        return;
    }

    temp=head;

    while(temp!=NULL)
    {
        fwrite(&temp->roll,sizeof(int),1,fp);
        fwrite(temp->name,sizeof(temp->name),1,fp);
        fwrite(&temp->percentage,sizeof(float),1,fp);
	temp =temp->next;
    }

    fclose(fp);

    printf("Records saved successfully\n");
}
void stud_load(void)
{
    struct student *newnode, *temp;
    FILE *fp =fopen("student.dat","rb");

    if(fp==NULL)
        return;

    while(1)
    {
        newnode=malloc(sizeof(struct student));

        if (newnode==NULL)
            break;

        if (fread(&newnode->roll,sizeof(int),1,fp)!=1)
        {
            free(newnode);
            break;
        }

        if(fread(newnode->name,sizeof(newnode->name),1,fp)!=1||
            fread(&newnode->percentage,sizeof(float),1,fp)!=1)
        {
            free(newnode);
            break;
       	}
       	newnode->name[sizeof(newnode->name)-1] ='\0';
        newnode->next=NULL;

        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            temp=head;

            while(temp->next!=NULL)
                temp=temp->next;

            temp->next=newnode;
        }
    }

    fclose(fp);
}
