#include <stdio.h>

struct student {
    char name[50];
    float percentage;
    int age;
};

void main() {
    int N;
    printf("Enter the number of students: ");
    scanf("%d", &N);

    struct student students[N];

    // Reading data of N students
    for (int i = 0; i < N; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    // Finding student with maximum percentage
    int maxIndex = 0;
    for (int i = 1; i < N; i++) {
        if (students[i].percentage > students[maxIndex].percentage) {
            maxIndex = i;
        }
    }

    // Printing details of student with maximum percentage
    printf("\nDetails of student with maximum percentage:\n");
    printf("Name: %s\n", students[maxIndex].name);
    printf("Percentage: %.2f\n", students[maxIndex].percentage);
    printf("Age: %d\n", students[maxIndex].age);
}