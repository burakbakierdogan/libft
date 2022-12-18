Use make command to create the library named libft.a file. Make bonus for bonus functions. This is my own C library. I recoded variety of functions from unistd, stdio, string and stdlib libraries. They work as the original functions. I will use this library throughout the 42 Curcus. 

Here is a brief description of each of the functions you listed:

ft_calloc: This function allocates memory for an array of nmemb elements of size bytes each and initializes all the bytes in the allocated memory to zero. It returns a pointer to the allocated memory, or NULL if the request for memory fails.

ft_bzero: This function sets the first n bytes of the memory area pointed to by s to zero.

ft_memset: This function fills the first n bytes of the memory pointed to by s with the constant byte c. It returns a pointer to the memory area s.

ft_memcpy: This function copies n bytes from memory area src to memory area dest. It returns a pointer to dest.

ft_memmove: This function copies n bytes from memory area src to memory area dest, where the memory areas may overlap. It returns a pointer to dest.

ft_memchr: This function searches for the first occurrence of the byte c (converted to an unsigned char) in the first n bytes of the memory area pointed to by s. It returns a pointer to the matching byte, or NULL if the byte is not found.

ft_strdup: This function allocates sufficient memory for a copy of the string str, copies the string into the newly allocated memory, and returns a pointer to it. If the request for memory fails, it returns NULL.

ft_strncmp: This function compares the first n characters of the strings s1 and s2. It returns an integer less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2.

ft_isalpha: This function checks if the given character c is an alphabetic character (i.e., a letter of the alphabet). It returns a non-zero value (i.e., true) if c is an alphabet, and 0 (i.e., false) otherwise.

ft_isdigit: This function checks if the given character c is a digit (i.e., a number between 0 and 9). It returns a non-zero value (i.e., true) if c is a digit, and 0 (i.e., false) otherwise.

ft_isalnum: This function checks if the given character c is an alphabetic character or a digit. It returns a non-zero value (i.e., true) if c is an alphabet or a digit, and 0 (i.e., false) otherwise.

ft_isascii: This function checks if the given character c is an ASCII character. It returns a non-zero value (i.e., true) if c is an ASCII character, and 0 (i.e., false) otherwise.

ft_isprint: This function checks if the given character c is a printable character (i.e., a character).
ft_toupper: This function converts the given character c to its uppercase equivalent if c is a lowercase alphabet. If c is already an uppercase alphabet or is not an alphabet, it returns c unchanged.

ft_tolower: This function converts the given character c to its lowercase equivalent if c is an uppercase alphabet. If c is already a lowercase alphabet or is not an alphabet, it returns c unchanged.

ft_strlen: This function calculates the length of the string s, excluding the null terminator. It returns the length of the string as a size_t value.

ft_strlcpy: This function copies the string src (including the null terminator) to the buffer pointed to by dest, up to a maximum of n - 1 bytes, and then adds a null terminator. It returns the length of src.

ft_strlcat: This function appends the string src to the end of dest, up to a maximum of n - strlen(dest) - 1 bytes, and then adds a null terminator. It returns the initial length of dest plus the length of src.

ft_atoi: This function converts the initial portion of the string nptr to an integer. It skips any leading whitespace characters, then takes as many characters as possible that are part of the integer, and converts them to an integer value. It returns the integer value.

ft_strnstr: This function searches for the first occurrence of the null-terminated string needle in the string haystack, where not more than n characters are searched. It returns a pointer to the beginning of the located string, or NULL if the string is not found.

ft_memcmp: This function compares the first n bytes of the memory areas s1 and s2. It returns an integer less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2.

ft_strchr: This function searches for the first occurrence of the character c (converted to a char) in the string s. It returns a pointer to the located character, or NULL if the character is not found.

ft_substr: This function extracts a substring from the string s, starting at index start and with a length of len characters. It returns a newly allocated string containing the extracted substring, or an empty string if the requested substring is not valid.

ft_strjoin: This function concatenates the strings s1 and s2, and returns a newly allocated string containing the result.

ft_itoa: This function converts the integer n to a null-terminated string and returns the result.

ft_strtrim: This function removes any leading or trailing characters from the string s1 that are in the set of characters specified in set, and returns a newly allocated string containing the resulting string.

ft_strrchr: This function searches for the last occurrence of the character c (converted to a char) in the string s. It returns a pointer to the located character, or NULL if the character is not found.

ft_split: This function splits the string s into an array of strings using the delimiter character c as the separator. It returns a newly allocated array of strings, or NULL if the allocation fails.

ft_striteri: This function applies the function f to each character of the string s and its index, starting from zero.

ft_putchar_fd: This function outputs the character c to the file descriptor fd.

ft_putstr_fd: This function outputs the string s to the file descriptor fd.

ft_putendl_fd: This function outputs the string s followed by a newline character to the file descriptor fd.

ft_putnbr_fd: This function outputs the integer n to the file descriptor fd.

ft_strmapi: This function applies the function f to each character of the string s and its index, starting from zero, and creates a new string with the resulting characters. It returns the newly allocated string, or NULL if the allocation fails.

ft_printf: This function is a variable-argument function that formats and outputs a string according to the specified format. It returns the number of characters output.

ft_itoa_base: This function converts the integer nbr to a null-terminated string in the specified base and returns the result.

get_next_line: This function reads a line from a file descriptor, where a line is defined as a sequence of characters terminated by a newline character or the end of the file. It returns the line as a newly allocated string, or NULL if the end of the file is reached or if an error occurs.

ft_str_merge: This function concatenates the string buf to the end of container and returns the resulting string.

ft_container: This function reads from the file descriptor fd into the string container until a newline character or the end of the file is reached. It returns the modified container.

ft_ret_line: This function extracts the first line from the string container, where a line is defined as a sequence of characters terminated by a newline character. It returns the line as a newly allocated string, and modifies container to contain the remaining characters.

ft_new_contaier: This function creates a new string with the same content as the string container, and returns a pointer to the new string.

ft_strlenn: This function calculates the length of the string str, including the null terminator. It returns the length of the string as an integer.
ft_strchrr: This function searches for the last occurrence of the character c (converted to a char) in the string s. It returns a pointer to the located character, or NULL if the character is not found.

get_next_line_bonus: This function reads a line from a file descriptor
ft_lenn: This function calculates the length of the string str, including the null terminator. It returns the length of the string as an integer.

ft_is_nl: This function checks if the string str contains a newline character. It returns a non-zero value (i.e., true) if str contains a newline character, and 0 (i.e., false) otherwise.

ft_append: This function concatenates the string str2 to the end of str1, and returns a pointer to the resulting string.

ft_move_rest: This function copies the remaining characters from the string rest to the string to_free, and returns a pointer to the resulting string.

ft_seperate: This function extracts the first line from the string str, where a line is defined as a sequence of characters terminated by a newline character, and returns a structure containing the line and the remaining characters.

ft_is_capital: This function checks if the given character c is an uppercase alphabet. It returns a non-zero value (i.e., true) if c is an uppercase alphabet, and 0 (i.e., false) otherwise.

ft_is_space: This function checks if the given character c is a whitespace character (i.e., a space, a tab, a newline, etc.). It returns a non-zero value (i.e., true) if c is a whitespace character, and 0 (i.e., false) otherwise.

ft_atoi_base: This function converts the string str to an integer in the specified base. It returns the integer value.

ft_atoi_for_push_swap: This function converts the initial portion of the string nptr to an integer. It skips any leading whitespace characters and any leading + or - signs, then takes as many characters as possible that are part of the integer, and converts them to an integer value. It returns the integer value.

ft_lstnew: This function creates a new list node and initializes its content with the given value. It returns a pointer to the new node, or NULL if the allocation fails.

ft_lstadd_front: This function adds the given node new at the beginning of the list pointed to by lst.

ft_lstsize: This function returns the number of nodes in the list pointed to by lst.

ft_lstlast: This function returns a pointer to the last node of the list pointed to by lst.

ft_lstadd_back: This function adds the given node new at the end of the list pointed to by lst.
ft_lstdelone: This function frees the memory of the given node lst, and sets its content and next pointer to NULL.

ft_lstclear: This function frees the memory of all the nodes in the list pointed to by lst, and sets the list pointer to NULL.

ft_lstiter: This function applies the function f to each element of the list pointed to by lst.

ft_lstmap: This function applies the function f to each element of the list pointed to by lst, and creates a new list with the resulting elements. It returns the newly created list, or NULL if the allocation fails.
