#include <stdio.h>

int main() {
    char emp_id[11];
    int hours;
    float rate, total_income;

    // รับข้อมูล
    printf("Input the Employee ID(Max. 10 chars): \n");
    scanf("%10s", emp_id);
    printf("Input the working hrs: \n");
    scanf("%d", &hours);
    printf("Salary amount/hr: \n");
    scanf("%f", &rate);

    // คำนวณรายได้รวม
    total_income = hours * rate;
    
    // แสดงผลลัพธ์
    printf("Expected Output: \n");
    printf("Employee ID = %s\n", emp_id);
    printf("Salary = U$ %.2f\n", total_income);
    return 0;

}