#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    char str[45] = "aaaburak";
    char dest[45];
    int i = 0;
    int j = 0;
    char c = 'a';
  int size = strlen(str);
   while (i < size)
   {
       while (str[i] == c)
       {
           i++;
       }
       while (str[i] != c)
       {
           dest[j++] = str[i++];
           if (str[i] == c)
                {
                    dest[j++] = '\0';
                    i++;
                }
       }
   }
        for (int t = 0; t< 5; t++)
        printf("%d\n",dest[t]);

}
