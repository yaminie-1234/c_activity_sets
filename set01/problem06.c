// 6. Write a C program to compare three numbers using **pass by reference**

// ***Function Declarations***

#include<stdio.h>
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);


int input(int *a, int *b, int *c){
    printf("Enter the number:\n");
    scanf("%d",a);
    printf("Enter the number:\n");
    scanf("%d",b);
    printf("Enter the number:\n");
    scanf("%d",c);
}

void compare(int a, int b, int c, int *largest){
    if (a>=b && a>=c)
    {
        *largest=a;
    }
    else if (b>=a && b>=c)
    {
         *largest=b;
    }
    else{
        *largest=c;
    }
    
}
void output(int a, int b, int c, int largest){
    printf("The largest of %d,%d,%d is %d\n",a,b,c,largest);
}

int main(){
    int a,b,c,largest;
    input(&a, &b, &c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}