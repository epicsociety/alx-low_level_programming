gcc my_program .c -L. -lcreate-o my_program
We can use the -c option with the GNU compiler (gcc) to stop the compiling process after the assembling stage, translating our files from .c to .o

$ gcc -c pow.c // produces a pow.o object file
Now that we have the object file(s), we can archive them and make a static library using ar.

$ ar -rc libcreate.a pow.o

USING STATIC LIBRARY

gcc my_program .c -L. -lcreate-o my_program
-L says “look in directory for library files”
. (the dot after ‘L’) represents the current working directory
-l says “link with this library file”
create is the name of our library. Note that we omitted the “lib” prefix and “.a” extension. The linker attaches these parts back to the name of the library to create a name of a file to look for.
-o my_program says “name the executable file my_program”
