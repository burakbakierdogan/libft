# **********This is my own C library********** 
        It contains of string and memory functions.
        Most of the functions are reimplemantation of their originals.

# ********** FUNCTION DESCRIPTIONS **********
# ft_atoi (const char *nptr)
        ASCII to interger function.
        this function takes the first adress of the char array which represents a number
        and it returns the array as an integer value.
        function works with signed numbers too. But there can only be one sign in front of the number.

# ft_bzero (void *s, size_t n)
        This function takes any type of adress
        and it writes n bytes of '\0'.
        there is no return value.

# ft_calloc (size_t nmemb, size_t size)
        Clear Allocation.
        This Function uses stdlib malloc function
        and returns given adresses filled with '\0'.

# ft_isalnum (int c)
        This function checks whether given value contatins digits or English characters. 
        It returns true or false value.
# int	ft_isalpha(int c)
        This function returns 1 if the given argument is alphabetical character of English.
  
        
