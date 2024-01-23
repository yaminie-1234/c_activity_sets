// Write a program to find the area of a triangle.

// ***Function Declarations***
#include<stdio.h>
void input(float *base, float *height);
void find_area(float base, float height, float *area);
void output(float base, float height, float area);
int main()
{
    float base, height, area;
    input(&base, &height);
    find_area(base, height, &area);
    output(base, height, area);
    return 0;
}
void input(float *base, float *height)
{
    printf("Enter the base value");
    scanf("%f", base);
    printf("Enter the height value");
    scanf("%f", height);
}
void find_area(float base, float height, float *area)
{
    *area = 0.5 * (base) * (height);
}
void output(float base, float height, float area)
{
    printf("The area is :%.2f", area);
}
