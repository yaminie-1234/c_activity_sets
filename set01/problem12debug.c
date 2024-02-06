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
Breakpoint 1 at 0x4015f4: file problem12.c, line 52.
(gdb) r
Starting program: C:\Users\ADMIN\Desktop\PSC\c_activity_sets\set01/a.exe 
[New Thread 18204.0x3918]
[New Thread 18204.0x1e38]

Breakpoint 1, 0x004015f4 in main () at problem12.c:52
52      {
(gdb) s
53          int n = get_n();
(gdb) s
get_n () at problem12.c:10
10          printf("Enter the number of complex numbers: ");
(gdb) s
Enter the number of complex numbers: 11     scanf("%d", &n);
(gdb) s
c
12          return n;
(gdb) c
Continuing.

Program received signal SIGSEGV, Segmentation fault.
__chkstk_ms () at ../../../src/gcc-6.3.0/libgcc/config/i386/cygwin.S:172
172     ../../../src/gcc-6.3.0/libgcc/config/i386/cygwin.S: No such file or directory.
(gdb)