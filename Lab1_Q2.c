// add two numbers, take input using command line args
#include<stdio.h>
#include<stdlib.h>

void add(int a, int b) {
    int sum = a + b;
    printf("Sum = %d\n", sum);
}

int main(int argc, char **argv) {
    add(atoi(argv[1]), atoi(argv[2]));
    return 0;
}