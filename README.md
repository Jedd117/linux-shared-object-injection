# linux-shared-object-injection
General template used for exploiting shared objection injection.

This sample is exploiting a binary that's running as root, and allow us to inject parameters/commands, such as a reverse shell. 


To compile:
```
gcc -shared -fPIC -o /path/to/new/output.so /path/to/code.c
```
