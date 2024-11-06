/*question 1
author: caleb maroko
date :november 6
*/

#include <stdio.h>
#include <string.h>

struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main () {
    struct employee john_doe = {
        "John Doe",
        12345,
        "Human Resources",
        55000.50,
        "john doe@company.com"
    };

    printf("Employee Details:\n");
    printf("Name: %s\n", john_doe.name);
    printf("ID: %d\n", john_doe.id);
    printf("Department: %s\n", john_doe.department);
    printf("Salary: %.2f\n", john_doe.salary);
    printf("Email: %s\n", john_doe.email);

    return 0;
}