// 9. Write a C program to find the [square root](https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method) of a number.


#include <stdio.h>

float input();
float square_root(float n); 
void output(float n, float sqrroot);

int main() {
    float number, result;

    
    number = input();

    result = square_root(number);


    output(number, result);

    return 0;
}

float input() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    return num;
}

float square_root(float n) {
  
    float x0 = n / 2.0;
 
    for (int i = 0; i < 10; i++) {
        x0 = 0.5 * (x0 + n / x0);
    }
    return x0;
}

void output(float n, float sqrroot) {
    printf("The square root of %.2f is approximately %.6f\n", n, sqrroot);
}