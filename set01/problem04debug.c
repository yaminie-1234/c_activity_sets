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
Breakpoint 1 at 0x4014e7
(gdb) r
Starting program: C:\Users\ADMIN\Desktop\PSC\c_activity_sets\set01/a.exe 
[New Thread 13148.0x152c]
[New Thread 13148.0x34c4]

Breakpoint 1, 0x004014e7 in main ()
(gdb) s
Single stepping until exit from function main,
which has no line number information.
Enter the number:s
Enter the number:The sum of 4194432 and 3428352 :7622784
0x00401288 in __register_frame_info ()
(gdb) s
Single stepping until exit from function __register_frame_info,
which has no line number information.
0x0040128a in __register_frame_info ()
(gdb) s
Single stepping until exit from function __register_frame_info,
which has no line number information.
0x0040128f in __register_frame_info ()
(gdb) c
Continuing.
[Inferior 1 (process 13148) exited normally]
(gdb)