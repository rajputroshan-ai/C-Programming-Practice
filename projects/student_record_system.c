#include <stdio.h>

int main()
{
struct Student
{
int roll;
char name[50];
float marks;
} s[3];

for(int i=0;i<3;i++)
{ printf("\nEnter details of student %d\n", i + 1);
printf("Enter roll number: ");
scanf("%d", &s.roll);

printf("Enter name: ");
scanf(" %49[^\n]", s.name);

printf("Enter marks: ");
scanf("%f", &s.marks);
}

printf("\n--- Student Record ---\n");
for(int i = 0; i < 3; i++)
{ printf("\nStudent %d\n", i + 1);
printf("Roll Number: %d\n", s.roll);
printf("Name: %s\n", s.name);
printf("Marks: %f\n", s.marks);
}

return 0;

}
