#include <stdio.h>

int main() {
    char emp_id[11];
    int hours;
    float rate, total_income;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%10s", emp_id);
    printf("Input the working hrs: ");
    scanf("%d", &hours);
    printf("Salary amount/hr: ");
    scanf("%f", &rate);

    total_income = hours * rate;

    printf("----\n");
    printf("Expected Output:\n");
    printf("Employees ID = %s\n", emp_id);
    printf("Salary = U$ %.2f\n", total_income);

    return 0;
}