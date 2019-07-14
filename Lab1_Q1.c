#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("\nEnter two numbers : ");
    scanf("%d%d", &a, &b);

    printf("\nBefore Swapping :\na = %d\nb = %d\n", a, b);
    swap(&a, &b);
    printf("\nAfter Swapping :\na = %d\nb = %d\n", a, b);

    return 0;
}