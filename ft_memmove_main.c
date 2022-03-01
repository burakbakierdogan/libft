#include <stdio.h>
#include <string.h>
#include <libft.h>
int main( void )
{
    char cdizi1[] = "Burak";
    char cdizi2[] = "urak";

    printf("cdizi1 bellek içeriği: %s, cdizi2 bellek içeriği: %s\n", cdizi1, cdizi2);

    ft_memmove(cdizi1, cdizi2, 15);

    printf("cdizi1 bellek içeriği: %s, cdizi2 bellek içeriği: %s\n", cdizi1, cdizi2);

    return 0;
}
