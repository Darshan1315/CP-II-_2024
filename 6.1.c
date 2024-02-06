#include <stdio.h>

struct Players {
    char name[50];
    char team[50];
    int score;
    float average;
};

void main() {
    struct Players player[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for Player %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", player[i].name);
        printf("Team: ");
        scanf("%s", player[i].team);
        printf("Score: ");
        scanf("%d", &player[i].score);
        printf("Average: ");
        scanf("%f", &player[i].average);
    }

    printf("\nPlayer Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Player %d:\n", i + 1);
        printf("Name: %s\n", player[i].name);
        printf("Team: %s\n", player[i].team);
        printf("Score: %d\n", player[i].score);
        printf("Average: %.2f\n", player[i].average);
        printf("\n");
    }

  
}