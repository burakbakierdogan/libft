#include <libft.h>
int main()
{
    //initializing character array
 char str1[ ] = "Learn python from tyrtoprogram.com";
 char str2[ ] = "Learn C from trytoprogram.com";

 //displaying str1 and str2
 printf("str1 = %s\n", str1);
 printf("str2 = %s\n", str2);

 printf("\nmemcmp( str1, str2, 5 ) = %d\n", ft_memcmp( str1, str2, 5 ));
 printf("\nmemcmp( str1, str2, 15 ) = %d\n", ft_memcmp( str1, str2, 15 ));
 printf("\nmemcmp( str2, str1, 15 ) = %d\n", ft_memcmp( str2, str1, 15 ));

 return 0;
    
}
