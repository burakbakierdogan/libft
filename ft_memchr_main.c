#include <stdio.h>
#include <string.h>
#include <libft.h>

int main(int argc, const char * argv[])
{
    char search[] = "TechOnTheNet";
    char *ptr;

    /* Return a pointer to the first 'N' within the search string */
    ptr = ft_memchr(search, 'N', ft_strlen(search));

    /* If 'N' was found, print its location (This should produce "10") */
    if (ptr != NULL) printf("Found 'N' at position %ld.\n", 1+(ptr-search));
    else printf("'N' was not found.\n");

    return 0;
}
