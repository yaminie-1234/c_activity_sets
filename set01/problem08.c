// 8. Write a C program to find sum of _n_ different numbers entered by the user.

#include<stdio.h>
int input_array_size(){
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
    printf("Enter the arrays:\n");
    scanf("%d",&a[i]);
    }
}
    
int sum_n_array(int n, int a[n]){
    int sum=0;
    int i;
    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i];
    }
   return sum; 
}
void output(int n, int a[n],int sum){
    printf("The sum of given numbers entered by the user :%d\n",sum);
}

int main(){
    int n;
    n=input_array_size();
    int array[n];
    input_array(n,array);
    int sum=sum_n_array(n,array);
    output(n,array,sum);
    return 0;  
}