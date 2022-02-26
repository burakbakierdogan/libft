#include <libft.h>
int main (void)
{
	  const char str[] = "http://www.tutorialspoint.com";
   const char ch = 't';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return (0);
}
