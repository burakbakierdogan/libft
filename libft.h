#include <unistd.h>
#include <stdio.h>


void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, void const *src, size_t n);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isupper(int c);
int	ft_islower(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isspace(int c);
size_t	ft_strlen(const char *s);
int	ft_atoi(const char *nptr);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
