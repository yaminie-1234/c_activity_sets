// 7. Write a C program to find sum of all natural numbers until _n_

#include<stdio.h>
int input_n(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    return n;
}
int sum_n_nos(int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+i;
    }
    return sum;
}
void output(int n, int sum){
    printf("The sum of %d is %d\n",n,sum);
}

int main(){
    int n,sum;
    n=input_n();
    sum=sum_n_nos(n);
    output(n,sum);
    return 0;
}