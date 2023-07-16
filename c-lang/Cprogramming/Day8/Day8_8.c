#include<stdio.h>

typedef struct 
{
    int rollno;
    char sname[20];
    int marks;
}STUDENT;

void accept_student_data(STUDENT *p)
{
    printf("Specify Rollno:\n");
    scanf("%d",&p->rollno);

    printf("Specify Student Name:\n");
    scanf("%*c");   //supress a character from storage
    gets(p->sname);//fgets(p->sname,20,stdin); //gets(p->sname);

    printf("Specify Marks:\n");
    scanf("%d",&p->marks);
}
void display_student_data(STUDENT *p)
{
    printf("%d %s %d \n",p->rollno,p->sname,p->marks);
}
void read_all_records()
{
    STUDENT s1;
    FILE *fp;
    fp = fopen("student.txt","r");
    if(fp!=NULL)
    {
        while( fscanf(fp,"%d %s %d",&s1.rollno,s1.sname,&s1.marks) !=EOF)
        {
            display_student_data(&s1);
        }
    }
    fclose(fp);
}
int main()
{
    STUDENT s1;
    FILE *fp;
    //fp = fopen("student.txt","w");
    fp = fopen("student.txt","a");
    accept_student_data(&s1);
    if(fp!=NULL)
    {
        fprintf(fp, "%d %s %d \n",s1.rollno,s1.sname,s1.marks);
        fprintf(stdout, "%d %s %d \n",s1.rollno,s1.sname,s1.marks);
    }
    fclose(fp);

    read_all_records();
}