#include <stdio.h>

int main()
{
struct Student
{
int roll;
char name[50];
float marks;
} s;

printf("Enter roll number: ");
scanf("%d", &s.roll);

printf("Enter name: ");
scanf(" %49[^\n]", s.name);

printf("Enter marks: ");
scanf("%f", &s.marks);

printf("\n--- Student Record ---\n");
printf("Roll Number: %d\n", s.roll);
printf("Name: %s\n", s.name);
printf("Marks: %2f\n", s.marks);

return 0;

}
