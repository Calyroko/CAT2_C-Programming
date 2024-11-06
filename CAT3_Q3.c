/*questuon 3
author : caleb maroko
date : november 6
*/

#include <stdio.h>

int main() {
    
    float hourly_wage;
    float hours_worked;
    float regular_pay;
    float overtime_pay;
    float gross_pay;
    float net_pay;
    float total_tax;
    float tax_on_remainder;
    
    printf("Enter the hourly wage: ");
    scanf("%f", &hourly_wage);
    printf("Enter the hours worked per week: ");
    scanf("%f", &hours_worked);

    regular_pay = hourly_wage * hours_worked;
   overtime_pay = 0;
    if (hours_worked > 40) {
        overtime_pay = (hours_worked - 40) * 1.5 * hourly_wage;
    }
    gross_pay = regular_pay + overtime_pay;

    float tax_on_600 = 0.15 * 600;
    tax_on_remainder = 0.20 * (gross_pay - 600);
    total_tax = tax_on_600 + tax_on_remainder;

     net_pay = gross_pay - total_tax;

    printf("Gross pay: $%.2f\n", gross_pay);
    printf("Total tax: $%.2f\n", total_tax);
    printf("Net pay: $%.2f\n", net_pay);

    return 0;
}