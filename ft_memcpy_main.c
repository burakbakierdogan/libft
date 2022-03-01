#include <libft.h>
int main ()
{
 char a[] = "burak";
 char *src;
 src = a;
 char *dest = src + 1; // src +1 = urak'\0'
 printf("ft_memcpy oncesi SRC = %s\nft_memcpy oncesi DEST = %s\n", src, dest);
 ft_memcpy(dest,src,4);
 printf("ft_memcpy sonrasi SRC = %s\nft_memcpy sonrasi DEST = %s\n", src, dest);
}
