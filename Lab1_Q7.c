// add two complex numbers
#include<stdio.h>

typedef struct Complex {
    int real;
    int imaginary;
} Complex;

void addComplex(Complex *C1, Complex C2) {
    C1->real = C1->real + C2.real;
    C1->imaginary = C1->imaginary + C2.imaginary;
}

int main() {
    Complex Co1, Co2;
    printf("Enter real and imaginary parts of 1st complex number : ");
    scanf("%d%d", &Co1.real, &Co1.imaginary);
    printf("Enter real and imaginary parts of 2nd complex number : ");
    scanf("%d%d", &Co2.real, &Co2.imaginary);

    addComplex(&Co1, Co2);

    printf("\nSum = (%d) + (%d)i\n", Co1.real, Co1.imaginary);

    return 0;
}