#include<stdio.h>

typedef struct _complex {
    float real;
    float imag;
} Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main(){
    Complex num1,num2,sum;
    num1=input_complex();
    num2=input_complex();
    sum=add_complex(num1,num2);
    output(num1,num2,sum);
    return 0;
}

Complex input_complex(){
   Complex num;
    printf("Enter real and imaginary parts of the complex number: ");
    scanf("%f %f", &num.real, &num.imag);
    return num;
}

Complex add_complex(Complex a, Complex b){
    Complex sum;
    sum.real=a.real+b.real;
    sum.imag=a.imag+b.imag;
    return sum;
}

void output(Complex a, Complex b, Complex sum){
    printf("First complex number:%.2f + %.2fi\n",a.real,a.imag);
    printf("second complex number:%.2f + %.2fi\n",b.real,b.imag);
    printf("sum:%.2f + %.2fi\n",sum.real,sum.imag);
}