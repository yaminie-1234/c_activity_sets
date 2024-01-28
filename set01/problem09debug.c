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
Breakpoint 1 at 0x40146e: file problem09.c, line 12.
(gdb) r
Starting program: C:\Users\ADMIN\Desktop\PSC\c_activity_sets\set01/a.exe 
[New Thread 10056.0x2904]
[New Thread 10056.0x2ff8]

Breakpoint 1, main () at problem09.c:12
12          n=input();
(gdb) s
input () at problem09.c:21
21          printf("enter the number\n");
(gdb) s
enter the number
22          scanf("%f", &n);
(gdb) s
s
23          return n;
(gdb) s
24      }
(gdb) s
main () at problem09.c:13
13          sqrrt=square_root(n);
(gdb) s
square_root (n=0) at problem09.c:30
30        float x_old=1,x_new=n/2;
(gdb) s
31        float precision=0.000001;
(gdb) s
32        while(fabs(x_new-x_old)>precision)
(gdb) c
Continuing.
The squareroot of 0.000000  is  -1.#IND00[Inferior 1 (process 10056) exited normally]
(gdb)


