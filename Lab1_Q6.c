// employee nested structure
#include<stdio.h>

typedef struct Employee {
    int emp_id;
    int salary;
} Employee;

typedef struct Person {
    char name[30];
    int ph;
    int age;
    Employee E;
} Person;

Person getInput() {
    Person P;

    printf("Input details :-");
    printf("\nEnter name : ");
    fgets(P.name, 30, stdin);
    fflush(stdin);
    printf("Enter phone no. : ");
    scanf("%d", &P.ph);
    printf("Enter age : ");
    scanf("%d", &P.age);
    printf("Enter employee id : ");
    scanf("%d", &P.E.emp_id);
    printf("Enter salary : ");
    scanf("%d", &P.E.salary);

    return P;
}

void displayPerson(Person P) {
    printf("\nDetails:\n");
    printf("Name : %s", P.name);
    printf("Phone No. : %d\n", P.ph);
    printf("Age : %d\n", P.age);
    printf("Employee id : %d\n", P.E.emp_id);
    printf("Salary : %d\n", P.E.salary);
}

int main() {
    Person P = getInput();

    displayPerson(P);

    return 0;
}