Use make command to create the library .a C library file. 
This is my own C library.
I recoded variety of functions from unistd, stdio, string and stdlib libraries.
They work as the original functions.
I will use this library throughout the 42 Curcus.
Below, i listed the function prototypes and their descriptions:

ft_atoi (const char *nptr);
ASCII to interger function. It takes string which contains numeric characters and convert them integer value.
It will read negative and positive signs too and it will stop reading when the function encounters a non numeric
value. It will ignore whitespaces in the begining but the string must be started with numeric or sigh characters.
return: it returns converter integer value.

ft_atoi_base (char *str, int base);
ASCII to inter function but also it has an option to convert numbers from different bases.
It works from base to base 16 to base 2 integer values.
return: converter integer value. 

