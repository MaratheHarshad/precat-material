#include<stdio.h>
struct date
{
    int dd;
    int mm;
    int yy;
};//declaration of user data type

struct student 
{
    int rollno;//   =101; //not allowed as declaration
    char sname[20];
    float per;
   // struct date dob;
};


void display_student_data_pass_by_value(struct student s);

int main()
{
    struct student s1 = {101,"aaa",88.99};
    struct student s2;
    struct student s3 = {103,"ccc"};
    struct date d1;
    printf("size=%u size=%u \n",sizeof(s1),sizeof(d1));
    display_student_data_pass_by_value(s1);    
    s2 = s1;
    display_student_data_pass_by_value(s2);
    display_student_data_pass_by_value(s3);

    display_student_data_pass_by_address(&s1);
}
void display_student_data_pass_by_address(const struct student *p)
{
    printf("%d %s %.2f \n",p->rollno,p->sname,p->per);
    printf("%d %s %.2f \n",(*p).rollno,(*p).sname,(*p).per);
}

void display_student_data_pass_by_value(struct student s)
{
    printf("%d %s %.2f\n",s.rollno,s.sname,s.per);
}