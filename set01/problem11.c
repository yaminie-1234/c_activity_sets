11. Write a C program to find the sum of 2 complex numbers

***Function Declarations***
```c
struct _complex {
	float real;
	float imaginary;
}
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);