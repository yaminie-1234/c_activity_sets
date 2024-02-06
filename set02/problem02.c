// 02.  Write a program to find if a triangle is scalene.

// > A triangle is scalene if all the three sides of the triangle are not equal to one another

// ***Function Declarations***
#include<stdio.h>
int input_side(){
    int side;
    printf("Enter the side of a triangle:");
    scanf("%d,&side");
    return side;
}
int check_scalene(int a, int b, int c){
    return(a !=b && a!=c && b!=c);
}
void output(int a, int b, int c, int isscalene){
    if (isscalene)
    {
        printf("The triangle with sides %d,%d and %d is scalene",a,b,c);
    }
    else{
        printf("The triangle with sides %d,%d and %d is not scalene",a,b,c);
    }
    
}
int main(){
    int a,b,c;
    printf("Enter the length of three sides of the triangle:\n");
    a=input_side();
    b=input_side();
    c=input_side();
    int scalene =check_scalene(a,b,c);
    output(a,b,c,scalene);
    return 0;
    
}