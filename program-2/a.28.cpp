#include <stdio.h>

struct student 
{
    int rollno;
    int marks[3];
};

int main() 
{
    struct student s[5];
    int i, j, total;
    float percentage;

    for (i = 0; i < 5; i++) 
	{
        printf("Enter the roll number of student %d: ", i+1);
        scanf("%d", &s[i].rollno);

        printf("Enter the marks of three subjects for student %d: ", i+1);
        for (j = 0; j < 3; j++) 
		{
            scanf("%d", &s[i].marks[j]);
        }
    }

    for (i = 0; i < 5; i++) 
	{
        printf("\nInformation of student %d:\n", i+1);
        printf("Roll number: %d\n", s[i].rollno);
        printf("Marks of three subjects: ");
        total = 0;
        for (j = 0; j < 3; j++) 
		{
            printf("%d ", s[i].marks[j]);
            total += s[i].marks[j];
        }
        percentage = (float)total / 3;
        printf("\nTotal marks: %d\n", total);
        printf("Percentage: %.2f%%\n", percentage);
    }

}

