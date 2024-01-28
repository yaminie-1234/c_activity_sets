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
Breakpoint 1 at 0x40154b: file problem08.c, line 32.
(gdb) r
Starting program: C:\Users\ADMIN\Desktop\PSC\c_activity_sets\set01/a.exe 
[New Thread 8240.0x13f8]
[New Thread 8240.0x1df0]

Breakpoint 1, 0x0040154b in main () at problem08.c:32
32      int main(){
(gdb) s
34          n=input_array_size();
(gdb) s
input_array_size () at problem08.c:6
6           printf("Enter the size of the array\n");
(gdb) s
Enter the size of the array
7           scanf("%d",&n);
(gdb) s
s
8           return n;
(gdb) s
9       }
(gdb) s
main () at problem08.c:35
35          int array[n];
(gdb) s
__chkstk_ms () at ../../../src/gcc-6.3.0/libgcc/config/i386/cygwin.S:163
163     ../../../src/gcc-6.3.0/libgcc/config/i386/cygwin.S: No such file or directory.
(gdb) s
165     in ../../../src/gcc-6.3.0/libgcc/config/i386/cygwin.S
(gdb) s
167     in ../../../src/gcc-6.3.0/libgcc/config/i386/cygwin.S
(gdb) c
Continuing.
The sum of given numbers entered by the user :0
[Inferior 1 (process 8240) exited normally]
(gdb)