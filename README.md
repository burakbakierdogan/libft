Use make command to create the library .a C library file. This is my own C library. I recoded variety of functions from unistd, stdio, string and stdlib libraries. They work as the original functions. I will use this library throughout the 42 Curcus. Below, i listed the function prototypes and their descriptions:

ft_atoi (const char *nptr); ASCII to interger function. It takes string which contains numeric characters and convert them integer value. It will read negative and positive signs too and it will stop reading when the function encounters a non numeric value. It will ignore whitespaces in the begining but the string must be started with numeric or sigh characters. 
return: it returns converted integer value.

ft_atoi_base (char *str, int base); ASCII to inter function but also it has an option to convert numbers from different bases. It works from base to base 16 to base 2 integer values. 
return: converter integer value.

ft_bzero(void *s, size_t n); Starting from given adress the function writes n bytes of '\0'character to the memory adress. 
Return Value: void *s pointer.

ft_calloc (size_t nmemb, size_t size); it allocates nmemb times of memory space in heap memory via malloc function and  it writes size bytes of '\0' characters.
return value: allocated memory adress.

ft_is_capital(char c); it returns 1 if the c character is a capital letter.
return value: 1 or 0. 

ft_is_space(char c); it checks whether the character c is white space character.
return value: 1 if its true, 0 if it is false.

ft_isascii(char c); it checks whether the character c is ASCII character.
return value: 1 if its true, 0 if it is false.

ft_isdigit(char c);  it checks whether the character c is a digit character.
return value: 1 if its true, 0 if it is false.

ft_isprint(char c); it checks whether the character c is a printable character.
return value: 1 if its true, 0 if it is false.

ft_itoa(int n); it takes an integer value and it convert the value as the character of a string.
return value: the adress of the new created string.

ft_itoa_base: this is an helper function for ft_printf. 

ft_itoa_base_v2(int nbr, int base, char format); this function takes int value and convert it to any desired base with a format rule. The converted value is a string. It works between base 2 and base 16. The format identifier is 'X' or 'x'. If the format is 'X' then int 255 will be equal to FF, if the format identifer is 'x' then the string will be ff.
return value: the adtess of newly created string.

ft_max(int	*tab, int len); it takes an integers array and find the biggest number in the array.
return value: the biggest int value.

ft_memchr(const void *s, int c, size_t n); it searches character c byte by byte from the start of given adress. It searches n bytes of memory adress.
return value: if the character is not found NULL is returned otherwise it returns the adress of first matching character in the string.

ft_memcmp(const void *s1, const void *s2, size_t n); compares n bytes of 2 memory adresses till there is a difference.
return value: if there is no difference then it returns 0. If there is a difference it returns s1[i] - s2[i] difference.

ft_memcpy(void *dest, void const *src, size_t n); it copies n bytes of src data to the dest adress. 
return value: the adress of dest value.

ft_memmove(void *dest, const void *src, size_t n); when there is a memory overlapping memmove does the job of memcpy function.
return value: the adress of dest value.

ft_memset(void *s, int c, size_t n); writes n bytes of c value to the given adress byte by byte. 
return value: void s adress.

ft_printf(char *src, ...); please download and read ft_printf repository. https://github.com/burakbakierdogan/ft_printf

ft_putchar_fd(char c, int fd); it writes char c to given file pointed by a file descriptor number.
return: no return value.

ft_putendl_fd(char *s, int fd); it copies s string to given file pointed by a file descriptor number. Also it adds newline character at the end of the string.
return value: no return value.

ft_putnbr_fd(int n, int fd); it convert int n value to string and then writes the string to given file pointed by a file descriptor number. 

ft_putstr_fd(char *s, int fd); it copies s string to given file pointed by a file descriptor number.
return value: no return value.

ft_revstr(char *str); it reverse the string.
return value: str string.

ft_split(char const *s, char c); it takes an string and split them to different strings. The split character is determined by char c.
return value: String arrays with ending with NULL pointer.

ft_strchr(const char *s, int c); it searches given character inside s string.
return value: The adress of matching character inside s or if the characther is not found NULL.

ft_strdup(const char *str); it copies given string to the heap allocated memory adress.
return value: the adress of  new copied string.

