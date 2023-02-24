#include <stdio.h>

int main() {
    int marks[5],sum = 0;
    float percentage;

    printf("Enter marks for 5 subjects: \n");
    
    for (int i = 0; i < 5; i++) 
	{
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        
        sum += marks[i];
    }

    percentage = (float)sum / 5;
    
    printf("Sum of marks: %d\n", sum);
    
    printf("Percentage: %.2f\n", percentage);
}

