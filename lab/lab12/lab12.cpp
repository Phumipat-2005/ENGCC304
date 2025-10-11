#include <stdio.h>

struct Student {
    char Name[20];
    char ID[5];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
} typedef S;

char grade(float score) {
    if (score >= 80) return 'A';
    else if (score >= 75) return 'B+';
    else if (score >= 70) return 'B';
    else if (score >= 65) return 'C+';
    else if (score >= 60) return 'C';
    else if (score >= 55) return 'D+';
    else if (score >= 50) return 'D';
    else return 'F';
}

int main() {
    S students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter Name for student %d: ", i+1);
        scanf("%s", students[i].Name);
        printf("Enter ID for student %d: ", i+1);
        scanf("%s", students[i].ID);
        printf("Enter Score for Subject 1: ");
        scanf("%f", &students[i].ScoreSub1);
        printf("Enter Score for Subject 2: ");
        scanf("%f", &students[i].ScoreSub2);
        printf("Enter Score for Subject 3: ");
        scanf("%f", &students[i].ScoreSub3);
        printf("Enter Score for Subject 4: ");
        scanf("%f", &students[i].ScoreSub4);
        printf("Enter Score for Subject 5: ");
        scanf("%f", &students[i].ScoreSub5);
    }

    printf("\n--- Grade Report ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Student: %s (ID: %s)\n", students[i].Name, students[i].ID);
        printf("Subject 1: %.2f Grade: %c\n", students[i].ScoreSub1, grade(students[i].ScoreSub1));
        printf("Subject 2: %.2f Grade: %c\n", students[i].ScoreSub2, grade(students[i].ScoreSub2));
        printf("Subject 3: %.2f Grade: %c\n", students[i].ScoreSub3, grade(students[i].ScoreSub3));
        printf("Subject 4: %.2f Grade: %c\n", students[i].ScoreSub4, grade(students[i].ScoreSub4));
        printf("Subject 5: %.2f Grade: %c\n", students[i].ScoreSub5, grade(students[i].ScoreSub5));
        printf("---------------------\n");
    }

    return 0;
}