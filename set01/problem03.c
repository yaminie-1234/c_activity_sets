// 3. Write a C program to add two numbers using **pass by value**

// ***Function declarations***
#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);

int input(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    return n;
}

int add(int a, int b){
    int sum;
    sum=a+b;
    return sum;
}

void output(int a, int b, int sum){
    printf("The sum of %d and %d : %d\n ",a,b,sum); //when using format specifiers, always use the same number of variables
}
int main(){
    int a,b,sum;
    a=input();
    b=input();
    sum=add(a,b);
    output(a,b,sum);
    return 0;
}