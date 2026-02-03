#include <stdio.h>

#define EMPLOYEE_COUNT 5
#define BONUS_PERCENT 25

int calculateBonus(int baseSalary)
{
    return baseSalary * BONUS_PERCENT / 100;
}

int calculateTotalSalary(int baseSalary)
{
    return baseSalary + calculateBonus(baseSalary);
}

void processSalaries(int salaries[], int count)
{
    for (int i = 0; i < count; i++)
    {
        int bonus = calculateBonus(salaries[i]);
        int totalSalary = calculateTotalSalary(salaries[i]);

        printf("Employee %d\n", i + 1);
        printf("Base Salary : %d\n", salaries[i]);
        printf("Bonus       : %d\n", bonus);
        printf("Total Salary: %d\n\n", totalSalary);
    }
}

int main()
{
    int salaries[EMPLOYEE_COUNT] = {15000, 18000, 22000, 26000, 30000};

    processSalaries(salaries, EMPLOYEE_COUNT);

    return 0;
}
