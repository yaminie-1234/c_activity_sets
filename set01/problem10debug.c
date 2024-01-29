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
Breakpoint 1 at 0x401471: file problem10.c, line 13.
(gdb) r
Starting program: C:\Users\ADMIN\Desktop\PSC\c_activity_sets\set01/a.exe 
[New Thread 3564.0x390]
[New Thread 3564.0x20b4]

Breakpoint 1, main () at problem10.c:13
13          input_two_strings(string1, string2);
(gdb) s
input_two_strings (string1=0x61feb8 "\034CZwü_a", string2=0x61fe54 "N¡Eè"_a") at problem10.c:26
26        printf("Enter the first string\n");
(gdb) s
Enter the first string
27        scanf("%s[^\n]", string1);
(gdb) s
s
28        printf("Enter the second string\n");
(gdb) s
Enter the second string
29        scanf("%s[^\n]", string2);
(gdb) s
c
30      }
(gdb)