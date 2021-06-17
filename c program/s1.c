//#include<stdio.h>
/*struct student
{
    int roll;
    char name[90];
    double grade;
};
int main()
{
    struct student s1,s2,s3;
    s1.roll=5;
    s1.grade=90.0;
}
*/
//typedef int integer;--->int is original name,and integer is alias name//

/*typedef struct student
{
    int roll;
    char name[90];
    double grade;
}student;

typedef struct
{
    int roll;
    char name[90];
    double grade;
}student;
*/
//pointer to struct object//
/*#include<stdio.h>
typedef struct
{
   int roll;
   char name[90];
   double grade;
}student;

int main()
{
    student s;
    student *sp;
    sp=&s;
    return 0;
}
*/

//writing behaviour "functions" for struct type//
#include<stdio.h>
typedef struct
{
    int roll;
    char name[90];
    double grade;
}student;
void input_student();
void output_student();
int main()
{
    student s[90];
    int n;
    printf("enter how many student u want\n");
    scanf("%d",&n);
    input_student(&s,n);
    output_student(s,n);
    return 0;
}
void input_student(student *s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("enter a roll number\n");
    scanf("%d",&s->roll);
    printf("enter a name\n");
    scanf(" %s",s->name);
    printf("enter a grade\n");
    scanf("%lf",&s->grade);
}
}
void output_student(student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("roll:%d\n name:%s\n  Grade:%lf\n",s[i].roll,s[i].name,s[i].grade);
    }
}

