#include <stdio.h>
int main()
{ struct Student
  { int roll;
    char name[50];
    float marks;
    
  }s[3];
    float sum = 0;
    float average;
  for(int i = 0; i < 3; i++)
    { printf("\nEnter details of student %d\n", i + 1);

      printf("Enter roll number: ");
      scanf("%d", &s[i].roll);

      printf("Enter name: ");
      scanf(" %49[^\n]", s[i].name);

      printf("Enter marks: ");
      scanf("%f", &s[i].marks);
     
        sum = sum + s[i].marks;
    }

    average = sum / 3;

    printf("\n--- Student Records ---\n");

    for(int i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %f\n", s[i].marks);

        if(s[i].marks >= 40)
        {
            printf("Status: Pass\n");
        }
        else
        {
            printf("Status: Fail\n");
        }
    }
printf("\n--- Class Summary ---\n");
printf("Total Marks: %f\n", sum);
printf("Average Marks: %f\n", average);
  return 0;
}
