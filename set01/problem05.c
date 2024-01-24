// Write a C program to compare three numbers using **pass by value**

// ***Function Declarations***
#include<stdio.h>

int input(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    return n;
}
int compare(int a, int b, int c){   
    int largest;
    if (a>b)
    {
        return a;
    }
    else if (b>c)
    {
        return b;
    }
    
    
}
void output(int a, int b, int c, int largest);


