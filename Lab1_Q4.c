// structure - input and display
#include<stdio.h>

typedef struct Student {
    int roll;
    char name[30];
    char address[100];
} Student;

void displayStudent(Student S) {
    printf("\nDetails of the student:-\nRoll No. : %d\n", S.roll);
    printf("Name : %s", S.name);
    printf("Address : %s", S.address);
}

int main() {
    Student S;

    printf("Enter details about the student :\n");
    printf("Enter Roll No. : ");
    scanf("%d", &S.roll);
    gets();
    printf("Enter name : ");
    fgets(S.name, 30, stdin);
    fflush(stdin);
    printf("Enter address : ");
    fgets(S.address, 100, stdin);

    displayStudent(S);

    return 0;
}