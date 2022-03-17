#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


char    *stringer(char const *str, char c, int n)
{
    int i = 0;
    char *string = (char *) malloc(n+1 * sizeof(char));
    memmove(string,str,n+1);
    while (i < n+1)
    {
        if (string[i] == c )
            {
                string[i] = '\0';
            }
        i++;
    }
    i = 0;
    while (string[i] == '\0')
    {
        string++;
        i++;
    }
    return (string);
}
void    mover(char *c, int n)
{
    memmove(c,c+1,n);
}
int main()
{
    const char a[] ="aaanabu rakbakierdoganaanaalwpea1 ";
    char c = 'a';
    int k; 
    k = strlen(a);
   
    char *b = stringer(a,c,k);
    
    int i = 0;
    while (i < k)
    {
        if (b[i] == '\0' && b[i+1] == '\0')
            mover(b+i,k);
        i++;
    }
    i = 0;
    while (i < k+1)
    {
        write(1,&b[i],1);
        write(1,"\n",1);
        i++;
    }
}
