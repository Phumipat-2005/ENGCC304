#include <stdio.h>
int basesalary = 0 , experience = 0 , project = 0 , position = 0 , Special = 0; 

int main() {
    printf("position (1 : Junior Programmer, 2 : Mid-Level Programmer , 3 : Senior Programmer): ");
    scanf("%d" , &position);
    printf("Enter years of experience: ");
    scanf("%d" , &experience);
    printf("Enter number of projects completed: ");
    scanf("%d" , &project);
    if (position == 1){
        basesalary = 20000;
    }
    else if (position == 2){
        basesalary = 35000;
    }
    else if (position == 3){
        basesalary = 50000;
    }
    if (experience < 1) {
        experience = 0;
    }
    else if (experience <4) {
        experience = basesalary * 0.10;
    }
    else if (experience < 6) {
        experience = basesalary * 0.15;
    }
    else {
        experience = basesalary * 0.20;
    }
    if (project > 5) {
        project = basesalary * 0.05;
    } else {
        project = 0;
    }
    printf("Base Salary: %d \n", basesalary);
    printf("Experience Bonus: %d THB\n", experience);
    printf("Special Bonus: %d THB\n", project);
    printf("Net Salary: %d THB\n", basesalary + experience + project);

    return 0;
}