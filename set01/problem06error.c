problem06.c: In function 'input':
problem06.c:7:5: warning: implicit declaration of function 'printf' [-Wimplicit-function-declaration]
     printf("ENter the number:\n");
     ^~~~~~
problem06.c:7:5: warning: incompatible implicit declaration of built-in function 'printf'
problem06.c:7:5: note: include '<stdio.h>' or provide a declaration of 'printf'
problem06.c:8:5: warning: implicit declaration of function 'scanf' [-Wimplicit-function-declaration]
     scanf("%d",&a);
     ^~~~~
problem06.c:8:5: warning: incompatible implicit declaration of built-in function 'scanf'
problem06.c:8:5: note: include '<stdio.h>' or provide a declaration of 'scanf'
problem06.c: In function 'output':
problem06.c:30:5: warning: incompatible implicit declaration of built-in function 'printf'
     printf("The largest of %d,%d,%d is %d\n",a,b,c,largest);
     ^~~~~~
problem06.c:30:5: note: include '<stdio.h>' or provide a declaration of 'printf'
problem06.c: In function 'main':
problem06.c:35:7: error: too few arguments to function 'input'
     a=input();
       ^~~~~
problem06.c:6:5: note: declared here
 int input(int *a, int *b, int *c){
     ^~~~~
problem06.c:36:7: error: too few arguments to function 'input'
     b=input();
       ^~~~~
problem06.c:6:5: note: declared here
 int input(int *a, int *b, int *c){
     ^~~~~
problem06.c:37:7: error: too few arguments to function 'input'
     c=input();
       ^~~~~
problem06.c:6:5: note: declared here
 int input(int *a, int *b, int *c){
     ^~~~~
problem06.c:38:19: warning: passing argument 4 of 'compare' makes pointer from integer without a cast [-Wint-conversion]
     compare(a,b,c,largest);
                   ^~~~~~~
problem06.c:15:6: note: expected 'int *' but argument is of type 'int'
 void compare(int a, int b, int c, int *largest){
 