#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
}Studernt_t;
int main()
{
    Studernt_t student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name,"Jim");
    strcpy(student1.major, "technik");

    printf("%s", student1.name);
    return 0;
}
