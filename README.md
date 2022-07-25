#_Printf
________________________________________________________________________

_printf in a function based in the function printf belonging to stdio library,
this project is the way as holberton evaluate to the students holbies to show 
the skills and the knowledge that they have been collecting, making a copy of 
the function printf(_printf).

#Implementation.
Example with the function _printf printing a character and a string
##input
//
###String
	'#_printf("String:[%s]\n", "I am a string !");'
###Character
	'#_printf("Character:[%c]\n", 'H');'
//

##output
//
String
	'#String:[I am a string !]'
Character
	'#Character:[H]'

#General Requirements
1. Every file is going to compiled on Ubuntu 20.04 LTS
2. A README.md file, at the root of the folder of the project is mandatory
3. The prototypes of every functions should be included in the header file called main.h
4. All the header files should be include guarded
5. The function and that will be authorized
	- ◉write()
	- ◉malloc()
	- ◉free()
	- ◉va_start()
	- ◉va_end()
	- ◉va_copy()
	- ◉va_arg()
6. The compilation will be use with an Makefile file or with next compiler:
	-gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o (any name)
7. the file main.c doesn't use it in the repository Github, can be use for checkup test


#File Descriptions
____________________________________________________________________________________

* _printf: main function to print
* _putchar: function to use print with characters
* _main.h: header
* man_3_printf: man to understand the function
* fun.c: function of specifiers char and str
* fun_num.c: function to print int
* fun_hex.c: function to print integers 
* fun_not.c: function to print notation decimal and octal
* fun_X.c: function to print hexadecimal or integers
* fun_write.c: buffers to function write
* notation_b.c: function to print binary notation from unsigned int
* fun_S: function to print string format
* Makefile: compiler style
_____________________________________________________________________________________

#Mandatory Tasks
____________________________________________________________________________________
* ·Write a function that produces output according to a format*
***(the format you can see it in the header)***
* ·Handle the following conversion specifiers*
***(the conversion specifiers you can see it in the fun.c and the fun-num.c)***
* ·Create a man page for your function*
***(you can see it in man-3-printf)***
____________________________________________________________________________________

#Advanced Tasks
____________________________________________________________________________________
* Handle the following custom conversion specifiers b
* Handle the following conversion specifiers u, o, x, X
* Use a local buffer of 1024 chars in order to call write as little as possible.
* Handle the following custom conversion specifier S
____________________________________________________________________________________

##Authors
*Juan Esteban Hernandez || 5194
*Daniel Alejandro Garcia || 5199
