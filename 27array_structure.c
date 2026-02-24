#include<stdio.h>
struct Employee {
    int id;
    char name[20];
    float salary;
};

int main(){
    struct Employee employee[10];
    for (int i = 0; i < 10; i++) {
        printf("Employee %d: ", i + 1);
        scanf("%d %s %f", &employee[i].id, employee[i].name, &employee[i].salary);
    }
    float total_salary = 0;
    struct Employee *highest_paid = &employee[0];
    for (int i = 0; i < 10; i++) {
        total_salary += employee    [i].salary;
        if (employee[i].salary > highest_paid->salary) {
            highest_paid = &employee [i];
        }
    }
    printf("Total payout: %.2f\n", total_salary);
    printf("Highest Payout : Salary=%.2f\n", highest_paid->salary);
}