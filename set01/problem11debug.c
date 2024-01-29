PS C:\Users\ADMIN\Desktop\PSC\c_activity_sets\set01> gdb a.exe
GNU gdb (GDB) 7.6.1
Copyright (C) 2013 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "mingw32".
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>...
Reading symbols from C:\Users\ADMIN\Desktop\PSC\c_activity_sets\set01\a.exe...done.
(gdb) b main
Breakpoint 1 at 0x40151c: file problem11.c, line 33.
(gdb) r
Starting program: C:\Users\ADMIN\Desktop\PSC\c_activity_sets\set01/a.exe 
[New Thread 15232.0x35ac]
[New Thread 15232.0x3ff8]

Breakpoint 1, main () at problem11.c:33
33          printf("enter the 1st complex number\n");
(gdb) s
enter the 1st complex number
34          num1=input_complex();
(gdb) s
input_complex () at problem11.c:13
13      printf("enter the real num:");
(gdb) s
enter the real num:14   scanf("%f",&num.real);
(gdb) s
c
15      printf("enter the imaginary num:");
(gdb) c
Continuing.
enter the imaginary num:enter the 2nd complex number
enter the real num:enter the imaginary num:the sum of 4316092802248949800000000000000000+4316092802248949800000000000000000i and 8632185604497899500000000000000000+ 0i is  0 [Inferior 1 (process 15232) exited normally]
(gdb)


