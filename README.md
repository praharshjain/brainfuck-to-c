brainfuck-to-c
==========
Program to convert brainfuck source code into C source code  
Conversion table
----------------
The program translates Brainfuck code into C using the following substitutions 
  
| brainfuck command |                C equivalent               |
|:-----------------:|:-----------------------------------------:|
|  (Program Start)  | char array[30000] = {0};<br/>char *ptr=array;|
|         >         | ++ptr;                                    |
|         <         | --ptr;                                    |
|         +         | ++*ptr;                                   |
|         -         | --*ptr;                                   |
|         .         | putchar(*ptr);                            |
|         ,         | *ptr=getchar();                           |
|         [         | while (*ptr) {                            |
|         ]         | }                                         |
License
----------------
MIT
